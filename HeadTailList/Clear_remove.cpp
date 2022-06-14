#include "HeadTail.h"

void HdTlList::pop_front()
{
	Element* tmp = head ->next;
	//tmp->next = head->next->next;
	delete head;
	tmp->prev = nullptr;
	head = tmp;
	size--;
}

void HdTlList::pop_back()
{
	Element* tmp = tail->prev;
	//tmp->prev = head->prev->prev;
	delete tail;
	tmp->next = nullptr;
	tail = tmp;
	size--;
}

void HdTlList::clear()
{
	while (size)
	{
		pop_front();
	}
}

void HdTlList::removeAt(int index)
{
	int counter = 0;
	if (index <= size/2)
	{
		Element* current = head;
		while (counter != index-1)
		{
			current = current->next;
			counter++;
		}
		current->next = current->next->next;
		
	}
	else if (index > size/2) 
	{
		counter = size-1;
		Element* current = tail;
		while (counter != index)
		{
			current = current->prev;
			counter--;
		}
		current->next->prev = current->prev;
		current->prev->next = current->next;
	}
	size--;
}
