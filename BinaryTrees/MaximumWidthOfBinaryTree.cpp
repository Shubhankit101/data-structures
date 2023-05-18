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

int widthOfBinaryTree(Node * root)
{
    if(!root) return 0;
    queue<pair<Node*,int>> q; //Creating a queue
    long ans = 0;
    q.push({root,0});
    long first, last;
    while(!q.empty())
    {
        int n = q.size();
        int mini = q.front().second;

        for(int i=0;n>i;i++)
        {
            long currId = q.front().second - mini; //For avoiding overflow error
            Node *node = q.front().first;

            q.pop();

            if(i==0) first = currId;
            if(i==n-1) last = currId;

            if(node->left) q.push({node->left, currId * 2 + 1});// checking left child of current node
            if(node->right) q.push({node->right, currId * 2 + 2}); //checking right child of current node


        }

        ans = max(ans, last - first + 1 );

    }
    return ans;
}
int main() {

  Node *root = new Node(1);
  root -> left = new Node(3);
  root -> left -> left = new Node(5);
  root -> left -> left -> left = new Node(7);
  root -> right = new Node(2);
  root -> right -> right = new Node(4);
  root -> right -> right -> right = new Node(6);

  int maxWidth = widthOfBinaryTree(root);
  cout << "The maximum width of the Binary Tree is " << maxWidth;

  return 0;
}
