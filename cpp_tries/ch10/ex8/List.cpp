#include <iostream>
#include "List.h"

void increasebalance(Item & item)
{
        std::cout << "Account " << item.account << ": $" << item.balance << " -> $";
        item.balance *= 1.05;
        std::cout << item.balance << std::endl;
}

bool List::pop(Item & item)
{
	if(top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}

bool List::push(const Item & item)
{
	if(top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

void List::visit(pf func)
{
	for(int i = 0; i < top; ++i)
		func(items[i]);
}

void increase_balance(Item & item)
{
        std::cout << "Account " << item.account << ": $" << item.balance << " -> $";
        item.balance *= 1.05;
        std::cout << item.balance << std::endl;
}
