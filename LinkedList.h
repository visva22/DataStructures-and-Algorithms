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
    void Push(int data);
    void Append(int data);
    void Display();
    int Size();
    int Size(Node* head);
    int Pop();
    int Peek();
    Node* GetHeadNode();

    //Algorihms
    void Reverse();
    Node* NthNodeFromEnd(Node* head, int n);
  private:
  Node* CreateNode(int data);
  Node* Head;
  Node* Tail;
  int Length;
};