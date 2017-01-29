#pragma once
using namespace std;
#include <iostream>
#include "stack.h"

IntStack::IntStack()
{
	stack_top = 0;
}

bool IntStack::empty()
{
	if (stack_top == 0)
		return true;
	else return false;
}
void IntStack::push(StackElement item)
{
	if (stack_top == CAPACITY)
		cout << "stack is full.\n";
	else
	{
		stackArray[stack_top] = item;
		stack_top++;
	}
}

StackElement IntStack::pop()
{
	stack_top--;
	if (stack_top >= 0)
		return stackArray[stack_top];
	else return '\0';
}

void IntStack::display()
{
	for (int i = stack_top - 1; i >= 0; i--)
	{
		cout << stackArray[i] << " ";
	}
	cout << "\n";
}
