/*	Zakaria Soliman ID:5816734
*		Assignment 1
*/

#include "MyStack.h"

template<typename T>
void Sort(MyStack<T>& stack)
{
  MyStack<T> tempStack;
  while (!stack.IsEmpty())
  {
	  T element = stack.peek();
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