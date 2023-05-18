#include<iostream>
#include<vector>
using namespace std;

class Node
{
public:
  int data;
  Node * left;
  Node * right;

  Node(int d)
  {
    data=d;
    left=NULL;
    right=NULL;
  }
  Node(){}
};
void inOrder(Node *root,vector<int> &v)
{
 if(root==NULL)
 {
   return;
 }
 inOrder(root->left,v);
 v.push_back(root->data);
 inOrder(root->right,v);

}
void print(vector<int> v)
{
cout<<"InOrder Traversal of Binary Tree is : ";
for(int i=0;v.size()>i;i++)
{
  cout<<v[i]<<" ";
}
cout<<endl;
}

int main()
{

  Node * root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);

  root->left->left= new Node(4);
  root->left->right= new Node(5);

  root->left->right->left = new Node(8);

  root->right->left = new Node(6);
  root->right->right = new Node(7);
  root->right->right->left = new Node(9);
  root->right->right->right = new Node(10);

  vector<int> v;


  inOrder(root,v);

  print(v);


  return 0;
}
//Time Complexity : O(N)
//Space Complexity : O(N)
