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
	MyStack(void):top(stack.begin()), length(0) {};

	//push an element on the stack, return false if it fails.
	bool push(T elem);
	//pop element on top of the stack
	void pop(void);
	//get the value of the top element of the stack
	T peek(void);
	//return true if stack is empty
	bool IsEmpty (void);
	//returns size of the stack
	unsigned int GetSize(void) {return length;} ;

private:
	LinkedList<T> stack;
	LinkedList<T>::ListIterator top;
	unsigned int length;
};

template<typename T>
bool MyStack::push(T elem) 
	{
		if (stack.PushFront(elem)) 
		{
			return true;
			++length;
			top = stack.begin();
		}
		else 
			return false;
	}

template<typename T>
void MyStack::pop(void)
{
	stack.DeleteHead(void);
	top = stack.begin();
	--length;
}

template<typename T>
T MyStack::peek()
{
	return *top;
}

template<typename T>
bool MyStack::IsEmpty()
{
	if (length == 0)
		return true;
	else
		retrun false;
}