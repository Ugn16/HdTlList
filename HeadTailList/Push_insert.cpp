#include "HeadTail.h"

void HdTlList::push_back(int data)
{
	if (head == nullptr)
	{
		Element* NewEl = new Element(data, nullptr, nullptr);
		tail = NewEl;
		head = NewEl;
	}
	else
	{
		Element* NewEl = new Element(data, nullptr, nullptr);
		NewEl->prev = tail;
		tail->next = NewEl;
		tail = NewEl;
		
	}	
	size++;
}

int& HdTlList::operator[](const int index)
{
	int counter = 0;
	if (index < size / 2)
	{
		Element* current = head;
		while (counter != index)
		{
			current = current->next;
			counter++;
		}
		return current->data;
	}
	else if (index >= size / 2)
	{
		counter = size-1;
		Element* current = tail;
		while (counter != index)
		{
			current = current->prev;
			counter--;
		}
		return current->data;
	}
}

void HdTlList::push_front(int data)
{
	if (head == nullptr)
	{
		Element* NewEl = new Element(data);
		head = NewEl;
		tail = NewEl;
	}
	else
	{
		Element* NewEl = new Element(data);
		NewEl->prev = nullptr;
		head->prev = NewEl;
		NewEl->next = head;
		head = NewEl;

	}
	size++;
}

//int HdTlList::Counter()
//{
//	Element* current = head;
//	int counter = 0;
//	while (current)
//	{
//		current = current->next;
//		counter++;
//	}
//	return counter;
//}

void HdTlList::insert(int data, int index)
{
	if (index <= 0)
	{
		push_front(data);
	}
	else if (index >= size)
	{
		push_back(data);
	}
	else
	{
		int counter = 0;
		if (index < size / 2)
		{
			Element* Prev = head;
			while (counter != index-1)
			{
				Prev = Prev->next;
				counter++;
			}
			Element* NewEl = new Element(data);
			NewEl->prev = Prev;
			NewEl->next = Prev->next;
			Prev->next = NewEl;
			
		}
		else if (index >= size / 2)
		{
			counter = size-1;
			Element* Next = tail;
			while (counter != index)
			{
				Next = Next->prev;
				counter--;
			}
			Element* NewEl = new Element(data);
			
			Next->prev->next = NewEl;
			NewEl->next = Next;
			NewEl->prev = Next->prev;
			Next->prev = NewEl;
		}
		size++;
	}
	
}
