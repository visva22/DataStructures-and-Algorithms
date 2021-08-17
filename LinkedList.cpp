#include "LinkedList.h"
#include <iostream>
LinkedList::LinkedList()
: Head(nullptr)
, Tail(nullptr)
{
}
LinkedList::~LinkedList() = default;

void LinkedList::Preppend(int data)
{
  Node* node = CreateNode(data);
  if(Head == nullptr)
  {
    Head = node;
    Tail = node;
  }
  else
  {
    node->Next = Head;
    Head = node;
  }
}

Node* LinkedList::CreateNode(int data)
{
  Node* node = new Node();
  node->Data = data;
  node->Next = nullptr;
  return node;
}

void LinkedList::Display()
{
  Node* temp = Head;
  while(temp not_eq nullptr)
  {
    std::cout<<"Data: "<< temp->Data << std::endl;
    temp = temp->Next;
  }
}