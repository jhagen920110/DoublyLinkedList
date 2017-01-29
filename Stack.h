#pragma once
#define CAPACITY 128
typedef int StackElement;

class IntStack
{
	StackElement stackArray[CAPACITY];
	int stack_top;
public:
	IntStack();
	bool empty();
	void push(StackElement item);
	StackElement pop();
	void display();
};
