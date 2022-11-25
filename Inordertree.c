#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
    
};

struct node * createNode(int data){
    struct node *n;
    n = (struct node *) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right =NULL;
    return n;

}
void preOrder(struct node* root){
      if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);

      }
}

void postOrder(struct node* root){
       if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
       }
}
void inOrder(struct node* root){
       if(root!=NULL){
        inOrder(root->left);
         printf("%d ",root->data);
        inOrder(root->right);
       }
}
int main(){
    // Constructing the root node - using function
    struct  node *p =createNode(4);
    struct  node *p1 =createNode(1);
    struct  node *p2 =createNode(6);
    struct  node *p3 =createNode(5);
    struct  node *p4=createNode(2);

    /*      4
           / \
          1   6
         / \
        5   2 
     */

    /*ptrorder 4 ,1, 5, 2 ,6
      postorder 5, 2, 1, 6,4*/
         
         // Linking the node with left anf right childern
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    //preOrder(p);
    //postOrder(p);
    inOrder(p);
    return 0;
    
}