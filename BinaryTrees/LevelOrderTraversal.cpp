#include<iostream>
#include<vector>
#include<queue>   
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


vector<int> levelOrder(Node* root)
{
    vector<int> v;
    if(root == NULL) return v;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        int size = q.size();
        for(int i = 0; size > i; i++)
        {
            Node* node = q.front();
            q.pop();
            
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
            
            v.push_back(node->data);
        }
                
    }
    
    return v;
}

void print(vector<int> v)
{
    cout<<"Level Order Traversal of Binary Tree is : ";
    for(int i=0;v.size()>i;i++)
    {
      cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    //Tree Construction 
    Node * root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->left->left= new Node(5);
    root->left->right= new Node(15);
    root->right->left = new Node(25);
    root->right->right = new Node(35);
    
    
    
    vector<int> ans;
    ans = levelOrder(root);
    
    print(ans);

    
    
    return 0;
    
    
}


//Time Complexity = O(N)
//Space Complexity = O(N)