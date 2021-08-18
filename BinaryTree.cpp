#include "BinaryTree.h"
#include <iostream>

BinaryTree::BinaryTree()
: RootNode(nullptr)
{
}
BinaryTree::~BinaryTree()
{
}

Node_b* BinaryTree::CreateNode(int data)
{
  Node_b* node = new Node_b();
  node->data = data;
  node->left = nullptr;
  node->right = nullptr;
  return node;
}
void BinaryTree::Insert(int data)
{
  Node_b* node = CreateNode(data);
  if(RootNode == nullptr)
  {
    RootNode = node;
  }
  else
  {
    Node_b* temp = RootNode;
    while(true)
    {
      if(data < temp->data)
      {
        if(temp->left == nullptr)
        {
          temp->left = node;
          break;
        }
        temp = temp->left;
      }
      else
      {
        if(temp->right == nullptr)
        {
          temp->right = node;
          break;
        }
        temp = temp->right;
      }
    }
  }
}
Node_b* BinaryTree::GetRoot()
{
  return RootNode;
}
void BinaryTree::Traverse(Node_b* root)
{
  if(root == nullptr)
  {
    return;
  } 
  Traverse(root->left);
  std::cout<< root->data << std::endl;
  Traverse(root ->right);
}