#pragma once

struct Node
{
  int Data;
  Node* Next;
};
class LinkedList
{
  public:
    LinkedList();
    ~LinkedList();
    void Insert(int index, int data);
    void Delete(int index);
    void Preppend(int data);
    void Append(int data);
    void Display();
    int Size();
  private:
  Node* CreateNode(int data);
  Node* Head;
  Node* Tail;
  int Length;
};