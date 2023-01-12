//Binary Search Tree
#include<stdio.h>
#include<stdlib.h>
struct Tree{
    int data;
    struct Tree* lchild;
    struct Tree* rchild;
};
void insert(struct Tree* root){
    struct Tree* curr=(struct Tree*)malloc(sizeof(struct Tree*));
    struct Tree* temp=(struct Tree*)malloc(sizeof(struct Tree*));
    int item;
    printf("Enter element to be inserted: ");
    scanf("%d",&item);
    curr->data=item;
    curr->lchild=NULL;
    curr->rchild=NULL;
    if (root==NULL)
    {
        root=curr;
        return;
    }
    temp=root;
    while (temp!=NULL)
    {
        if (item==temp->data)
        {
            return;
        }
        else if(item<temp->data){
            temp=temp->lchild;
        }
        else{
            temp=temp->rchild;
        }
    }
    temp=curr;
}
//inorder
void preorder(struct Tree* x){
    //preorder: left right root
    if (x==NULL)
    {
        return;
    }
    preorder(x->lchild);
    preorder(x->rchild);
    printf("%3d",x->data);
}
//postorder
//search
int main(void){
    struct Tree* root=NULL;
    int choice;
    while (1){
        printf("******MENU******\n1.insert\n2.preorder\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert(root); break;
            case 2: preorder(root); break;
            default: exit(0); break;
        }
    }
    return 0;
}