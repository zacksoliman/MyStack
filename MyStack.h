#pragma once
#include"LinkedList.h"

/*	Zakaria Soliman ID:5816734
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
	MyStack(void):length(0) {};

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
	unsigned int length;
};

template<typename T>
bool MyStack<T>::push(T elem) 
	{
		++length;
		return stack.PushFront(elem);
	};

template<typename T>
void MyStack<T>::pop(void)
{
	stack.DeleteHead();
	--length;
};

template<typename T>
T MyStack<T>::peek(void)
{
	return stack.FirstElement();
};

template<typename T>
bool MyStack<T>::IsEmpty(void)
{
	if (length == 0)
		return true;
	else
		return false;
};

template<typename T>
void Sort(MyStack<T>& stack)
{
  MyStack<T> tempStack;
  while (!stack.IsEmpty())
  {
	  int element = stack.peek();
	  stack.pop();

    while (!tempStack.IsEmpty() && tempStack.peek() < element)
    {
		stack.push(tempStack.peek());
		tempStack.pop();
    }
	tempStack.push(element);
  }
  while (!tempStack.IsEmpty())
  {
	  stack.push(tempStack.peek());
	  tempStack.pop();
  }
}
