#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

class Node
{
    public:

    int data;
    Node * left, *right;

    Node(int d)
    {
        data = d;
        left=NULL;
        right=NULL;

    }
};

int height(Node* root, int &maxi)
{
    if(!root) return 0;
    
    int lh = height(root->left, maxi);
    int rh = height(root->right, maxi);
    
    maxi = max(maxi, lh + rh );
    
    return 1 + max(lh,rh);
    
}
int calculateDiameter(Node* root)
{
    int maxi = 0;
    height(root, maxi);
    
    return maxi;
}

int main() {

//Constructing Binary Tree
  Node *root = new Node(1);
  root -> left = new Node(3);
  root -> left -> left = new Node(5);
  root -> left -> left -> left = new Node(7);
  root -> right = new Node(2);
  root -> right -> right = new Node(4);
  root -> right -> right -> right = new Node(6);

// Diameter of a Binary Tree is the longest path between any two nodes
  int diamter = calculateDiameter(root);
  cout << "The Diameter of the Binary Tree is " << diamter;

  return 0;
}
