#pragma once
#ifndef HeadTail.h

#include <iostream>
using namespace std;

class HdTlList
{
	class Element
	{
	public:
		Element* prev;
		Element* next;
		int data;

		Element(int data = 0, Element* prev = nullptr, Element* next = nullptr) :
			data{ data }, prev{ prev }, next{ next }
		{
			//cout << " Element constructor: " << this << endl;
		}
		~Element()
		{
			//cout << " Element destructor: " << this << endl;
		}

	};
	Element* head;
	Element* tail;
	int size;

public:
	HdTlList() : size{0}, head{head}, tail{tail}
	{
		//cout << " HdTlList constructor: " << this << endl;
	}

	void push_back(int data);
	void push_front(int data);
	/*int Counter();*/
	void insert(int data, int index);

	int& operator[](const int index);
	void DisplayAll();
	void DisplayOne(int index);
	int getSize();

	void pop_front();
	void pop_back();
	void clear();
	void removeAt(int index);

	~HdTlList()
	{
		//cout << " HdTlList destructor: " << this << endl;
	}
};


#endif 
