#include "stack.h"

int main()
{
	Stack st1 = Stack(5);
	if(st1.isempty())
		std::cout << "Stack 1 is empty!\n";
	Item num = 0;
	Item temp;
	while(!st1.isfull())
	{
		std::cout << ++num << " pushed.\n";
		st1.push(num);
	}
	Stack st2 = st1;
	Stack st3;
	st3 = st1;
	if(st1.isfull())
		std::cout << "Stack 1 is full!\n";
	st2.pop(temp);
	std::cout << "Item " << temp << " poped out!\n";
	std::cout << "Stack 2 has ";
	for(int i = 0; st2.pop(temp); i++)
		std::cout << temp << " ";
	std::cout << "lefted.\n";
	std::cout << "Stack 3 has ";
        for(int i = 0; st3.pop(temp); i++)
                std::cout << temp << " ";
        std::cout << "lefted. \n";
	return 0;
}
