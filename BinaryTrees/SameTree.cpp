#include<iostream>
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
//Method for checking whether the trees are Same or Not
bool isSameTree(Node* p, Node* q)
{
    if(p==NULL || q==NULL)
    {
        return (p==q);
    }
    return (p->data==q->data) && isSameTree(p->left, q->left) && isSameTree(p->right,q->right);


}
int main()
{
    //Entering details of 1st Tree
    Node * node1 = new Node(1);
    node1 -> left = new Node(3);
    node1 -> left -> left = new Node(2);
    node1 -> right = new Node(2);
    node1 -> right -> right = new Node(4);

    //Entering details of 2nd Tree
    Node * node2 = new Node(1);
    node2 -> left = new Node(3);
    node2 -> left -> left = new Node(2);
    node2 -> right = new Node(2);
    node2 -> right -> right = new Node(4);

    if(isSameTree(node1,node2)) cout<<"Following trees are same"<<endl;

    else cout<<"Trees are differant"<<endl;

}
