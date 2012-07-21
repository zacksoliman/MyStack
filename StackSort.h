#include "MyStack.h"

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