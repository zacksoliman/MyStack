/*	Zakaria Soliman ID:5816734
*		Assignment 1
*/

#include <iostream>
#include<iostream>
#include<ctime>
#include "MyStack.h"
#include "timer.h"
#include "StackSort.h"




using namespace std;


int main (){

	MyStack<int> stack, temp;

	srand(time(NULL));
	
	cout<<"Input size: "<<endl;
	int n;
	cin >> n;

	for(int i=0; i<n; ++i){
	
		stack.push(rand() % 100 + 1);
	}

	cout<<endl;

	timer time;

	time.StartTimer();
	Sort(stack);
	double elapsedTime = time.GetTime();

	cout<<"The sorted stack: \n";

	for(int i=0; i<n; ++i){
		cout<<stack.peek()<<" ";
		temp.push(stack.peek());
		stack.pop();
	}
	cout<<endl;

	cout<<"It took: "<<elapsedTime<<" miliseconds to sort.";
	
	system("PAUSE");

	return 0;
}