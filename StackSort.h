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
	//we first get the element that we will perform comparisons on
	  T elem = stack.peek();
	  stack.pop();
	//when top element in the temporary stack is less than the first element of the
	//original stack we put it back in the original stack to then push that larger element to the
	//temporary stack. We want the temporary stack to go form largest to smallest element.
	
	//When there's no more element greater than the top of the temporary stack
	//we incrementally pop the top of the original stack in the temporary stack
    while (!tempStack.IsEmpty() && tempStack.peek() < elem)
    {
		stack.push(tempStack.peek());
		tempStack.pop();
    }
	tempStack.push(elem);
  }
  //after the loops the temporary stack is ordered and we can put back the elements in the original stack
  //the original stack will be ordered with the biggest element on top of the stack and the smallest element
  //on the bottom of the stack.
  while (!tempStack.IsEmpty())
  {
	  stack.push(tempStack.peek());
	  tempStack.pop();
  }
}