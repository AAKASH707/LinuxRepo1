#include<iostream>
using namespace std;
 
struct bintree_node{
    bintree_node *left;
    bintree_node *right;
    int data;
} ;
class bst{
    bintree_node *root;
    public:
    bst(){
        root=NULL;
    }
    int isempty() {
        return(root==NULL);
    }
    void insert(int item);
    void displayBinTree();
    void printBinTree(bintree_node *);
     
};
void bst::insert(int item){
    bintree_node *p=new bintree_node;
    bintree_node *parent;
    p->data=item;
    p->left=NULL;
    p->right=NULL;
    parent=NULL;
    if(isempty())
        root=p;
    else{
        bintree_node *ptr;
        ptr=root;
        while(ptr!=NULL){
            parent=ptr;
            if(item>ptr->data)        
                ptr=ptr->right;
            else
                ptr=ptr->left;
        }   
        if(item<parent->data)
            parent->left=p;
        else
            parent->right=p;
    }
}
void bst::displayBinTree(){
    printBinTree(root);
}
void bst::printBinTree(bintree_node *ptr){
    if(ptr!=NULL){
        printBinTree(ptr->left);
        cout<<"  "<<ptr->data<<"     ";
        printBinTree(ptr->right);
    }
}
int main(){
    bst b;
    b.insert(20);
    b.insert(10);
    b.insert(5);
    b.insert(15);
    b.insert(40);
    b.insert(45);
    b.insert(30); 
     
    cout<<"Binary tree created: "<<endl;
    b.displayBinTree(); 
}

// adding binary tree traversal part
#include<iostream>
using namespace std;
//binary tree node declaration 
struct bintree_node{
    bintree_node *left;
    bintree_node *right;
    char data;
} ;
class bintree_class{
    bintree_node *root;
    public:
    bintree_class(){
        root=NULL;
    }
    int isempty() {
        return(root==NULL);
    }
    void insert_node(int item);
    void inorder_seq();
    void inorder(bintree_node *);
    void postorder_seq();
    void postorder(bintree_node *);
    void preorder_seq();
    void preorder(bintree_node *);
};
void bintree_class::insert_node(int item){
    bintree_node *p=new bintree_node;
    bintree_node *parent;
    p->data=item;
    p->left=NULL;
    p->right=NULL;
    parent=NULL;
    if(isempty())
        root=p;
    else{
        bintree_node *ptr;
        ptr=root;
        while(ptr!=NULL)        {
            parent=ptr;
            if(item>ptr->data)        
                ptr=ptr->right;
            else
                ptr=ptr->left;
        }   
        if(item<parent->data)
            parent->left=p;
        else
            parent->right=p;
    }
}
void bintree_class::inorder_seq()
{
    inorder(root);
}
void bintree_class::inorder(bintree_node *ptr)
{
    if(ptr!=NULL){
        inorder(ptr->left);
        cout<<"  "<<ptr->data<<"     ";
        inorder(ptr->right);
    }
}
void bintree_class::postorder_seq()
{
    postorder(root);
}
void bintree_class::postorder(bintree_node *ptr)
{
    if(ptr!=NULL){
        postorder(ptr->left);
        postorder(ptr->right);
        cout<<"  "<<ptr->data<<"     ";
    }
}
void bintree_class::preorder_seq()
{
    preorder(root);
}
void bintree_class::preorder(bintree_node *ptr)
{
    if(ptr!=NULL){
        cout<<"  "<<ptr->data<<"     ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
int main()
{
    bintree_class bintree;
    bintree.insert_node('A');
    bintree.insert_node('B');
    bintree.insert_node('C');
    bintree.insert_node('D');
    bintree.insert_node('E');
    bintree.insert_node('F');
    bintree.insert_node('G'); 
    cout<<"Inorder traversal:"<<endl;
    bintree.inorder_seq();
    cout<<endl<<"Postorder traversal:"<<endl;
    bintree.postorder_seq();
    cout<<endl<<"Preorder traversal:"<<endl;
    bintree.preorder_seq();
}
