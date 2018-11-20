#include "stack.h"

bool stack::push(const Item & item)
{
	if(top < MAX)
	{
		items[top++] = item; //Add this to the top (original 0..(top-1), now 0..top)
		return true;
	}
	else
		return false;
}

bool stack::pop(Item & item)
{
	if(top > 0)
	{
		item = items[--top]; //Remove this from the top (original 0..top, now(0..(top-1)))
		return true;
	}
	else
		return false;
}


