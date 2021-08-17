#include "LinkedList.h"
#include <iostream>
LinkedList::LinkedList()
: Head(nullptr)
, Tail(nullptr)
, Length(0)
{
}
LinkedList::~LinkedList() = default;

void LinkedList::Preppend(int data)//O(n)
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
  Length++;
}

void LinkedList::Append(int data)//O(1)
{
  Node* node = CreateNode(data);
  if(Tail == nullptr)
  {
    Head = node;
    Tail = node;
  }
  else
  {
    Tail->Next = node;
    Tail = node;
  }
  Length++;
}

void LinkedList::Insert(int index, int data)//Time Complexicity O(n)
{
  Node* node = CreateNode(data);
  if(Head == nullptr and index not_eq 0) // Case when empty LinkedList
  {
    std::cout<< " Invalid Index: " << index << " List is Empty!!" << std::endl;
  }
  else if(index == 0) // Case when node is to Append at index 0
  {
    node->Next = Head;
    Head = node;  
    Length++;
  }
  else 
  {
    int indexItr = 1;
    Node* temp = Head;
    while(temp not_eq nullptr)
    {
      if(index == indexItr)
      {
        node->Next = temp->Next;
        temp->Next = node;
        break;
      }
      else
      {
        indexItr++;
        temp = temp->Next;
      }
    }
    Length++;
  }
}

void LinkedList::Delete(int index) // O(n)
{
  if(Head == nullptr ) // Case when empty LinkedList
  {
    std::cout<< " Nothing to delete, List is Empty!!" << std::endl;
  }
  else if(index == 0) // Case when node is to Append at index 0
  {
    Node * deleteNode = Head;
    Head = deleteNode->Next;
    deleteNode->Next = nullptr;
    delete deleteNode;
    Length--;
  }
  else 
  {
    int indexItr = 1;
    Node* temp = Head;
    while(temp not_eq nullptr )
    {
      if(index == indexItr and temp->Next not_eq nullptr)
      {
        Node * deleteNode = temp ->Next;
        temp->Next = deleteNode->Next;
        deleteNode->Next = nullptr;
        delete deleteNode;
        Length--;
        break;
      }
      indexItr++;
      temp = temp->Next;
    }
  }
}

int LinkedList::Size()
{
  return Length;
}

Node* LinkedList::CreateNode(int data)//O(1)
{
  Node* node = new Node();
  node->Data = data;
  node->Next = nullptr;
  return node;
}

void LinkedList::Display() //O(n)
{
  Node* temp = Head;
  while(temp not_eq nullptr)
  {
    std::cout<<"Data: "<< temp->Data << std::endl;
    temp = temp->Next;
  }
}

void LinkedList::Reverse() // O(n)
{
  if((Length > 0) and (Length not_eq 1)) 
  {
    Node* firstNode =  Head; // Iteratig every 2 nodes and reversing the connection from Head Node.
    Node* secondNode =  Head->Next;
    while(secondNode not_eq nullptr)
    {
      Node* temp = secondNode->Next;
      secondNode->Next = firstNode;
      firstNode = secondNode;
      secondNode =  temp;
    }
    Tail = Head;
    Head = firstNode;
    Tail->Next = nullptr;
  }
}

int LinkedList::Size(Node* head)
{
  int length = 0;
  Node* temp = head;
  while(temp not_eq nullptr)
  {
    length++;
    temp = temp->Next;
  }
  return length;
}

Node* LinkedList::NthNodeFromEnd(Node* head, int n)
{  
  Node* frontItr =  head;
  Node* backItr = head;
  if(n > Size(head))
  {
    std::cout << "error invalid index " << std::endl;
    return nullptr;
  }
  else
  {
    for(int i = 0; i< n-1; i++)
    {
      frontItr = frontItr->Next;// total length will be same from front and back, so n is nothing but offset b/w frontIter and backItr
    }
    while(frontItr->Next not_eq nullptr)
    {
      frontItr = frontItr->Next;
      backItr = backItr->Next;
    }
    return backItr;
  }
 
}

Node* LinkedList::GetHeadNode()
{
  return Head;
}