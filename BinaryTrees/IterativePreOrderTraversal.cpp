#include<bits/stdc++.h>
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

void print(vector<int> v)
{
cout<<"PreOrder Traversal of Binary Tree is : ";
for(int i=0;v.size()>i;i++)
{
  cout<<v[i]<<" ";
}
cout<<endl;
}


vector<int> preOrder (Node* root)
{
    vector<int> v;
    if(!root) return v; 
    stack<Node*> st;
    
    st.push(root); // Using a Stack and pushing the root.
    while(!st.empty())
    {
        Node* node = st.top();
        
        st.pop();
        v.emplace_back(node->data);
        if(node->right!=NULL) st.push(node->right);
        if(node->left!=NULL) st.push(node->left);
    }
    return v;
        
}

int main()
{
  //Constructing Binary Tree 
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

  // calling preOrder function
   v = preOrder(root);

  // Printing the vector
  print(v);


  return 0;
}

// Time Complexity = O(N)
// Space Complexity = O(N) 