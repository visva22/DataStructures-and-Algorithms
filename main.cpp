#include <iostream>
#include "LinkedList.h"
#include "Stack.h"

int main() {
  // std::cout << "linkedList1!\n";
  LinkedList linkedList;
  linkedList.Push(10);
 // linkedList.Push(45);
 // linkedList.Push(35);
  //linkedList.Push(12);
  //linkedList.Push(25);
 // linkedList.Display();
 // LinkedList linkedList2;
 // linkedList2.Append(10);
  //linkedList2.Append(45);
  linkedList.Append(35);
  linkedList.Append(12);
  linkedList.Append(25);
  linkedList.Insert(0, 7);
  // linkedList.Delete(0);
  // linkedList.Delete(1);
  linkedList.Reverse();
  std::cout << "linkedList!\n";
  linkedList.Display();
  Node* node =  linkedList.NthNodeFromEnd(linkedList.GetHeadNode(),5);
  if(node not_eq nullptr)
  std::cout << "Nth Node from back: " << node->Data << std::endl;

  Stack stack;
  stack.Push(10);
  stack.Push(20);
  stack.Push(30);
  stack.Push(40);
  stack.Push(50);
  std::cout << "Stack Contents " <<  std::endl;
  stack.TraverseItems();
  std::cout << "Stack Contents after pop" << std::endl;
  stack.Pop();
  stack.Pop();
  stack.Pop();
  stack.Pop();
  stack.Peek();

  stack.TraverseItems();
}