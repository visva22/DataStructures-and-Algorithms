#include "Stack.h"
#include "LinkedList.h"
#include <iostream>
Stack::Stack()
: stack(new LinkedList())
{
}

Stack::~Stack()
{
  delete stack;
}
void Stack::Push(int data)
{
  stack->Push(data);
}

int Stack::Pop()
{
  return stack->Pop();
}

int Stack::Peek()
{
  return stack->Peek();
}

void Stack::TraverseItems()
{
  stack->Display();
}