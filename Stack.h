#pragma once
class LinkedList;
class Stack
{
  public:
  Stack();
  ~Stack();
  void Push(int data);
  int Pop();
  int Peek();
  void Enqueue(int data);
  int DeQueue();
  void TraverseItems();

  private:
  LinkedList* stack;
};