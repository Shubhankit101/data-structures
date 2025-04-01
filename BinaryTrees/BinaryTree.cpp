#include<iostream>
using namespace std;

// Create a Node class with left and right poitners
class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int value)
  {
    data=value;
    left=right=NULL;
  }
};

int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->right = new Node(5);
  return 0;
}
