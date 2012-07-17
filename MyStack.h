#pragma once
#include"LinkedList.h"

/*
*	This stack is implemented by using my implementation of a singly linked list.
*
*	The head of the list will be used as the top and as we push elements on the stack the previous element that was the head of the list will
*	become second and so on.
*
*/
template<typename T>
class MyStack
{
public:
	MyStack(void):top(list.begin()), length(0) {};
	~MyStack(void){list.~LinkedList();};

	//push an element on the stack, return false if it fails.
	bool push(T elem) 
	{
		if (list.PushFront(elem)) 
		{
			return true;
			++length;
			top = list.begin();
		}
		else 
			return false;
	};

	bool pop(void)
	{
		
	};

private:
	LinkedList<T> list;
	LinkedList<T>::ListIterator top;
	unsigned int length;
};

