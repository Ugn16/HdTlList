
#include "HeadTail.h"

void HdTlList::DisplayAll()
{
	Element* current = head;
	while (current != nullptr)
	{
		cout << " " << current->data;
		current = current->next;
	}
	cout << endl;
}

int HdTlList::getSize()
{
	return size;
}
