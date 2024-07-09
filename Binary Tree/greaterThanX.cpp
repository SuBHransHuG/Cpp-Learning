#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;   

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void findGreaterThanX(node* root,int x){
    if(root == NULL){
        return;
    }
    if(root->data>x){
        cout<<root->data<<" ";
    }
    findGreaterThanX(root->left,x);
    findGreaterThanX(root->right,x);
}

int main()
{
    int x = 3;
    node* root = NULL;
    root = buildTree(root);
    findGreaterThanX(root,x);

return 0;
}
