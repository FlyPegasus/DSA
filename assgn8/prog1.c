//Binary Search Tree
#include<stdio.h>
#include<stdlib.h>
struct Tree{
    int data;
    struct Tree* lchild;
    struct Tree* rchild;
};
/*struct Tree* newNode(int item){

}*/

struct Tree* root=NULL;
void insert(/*struct Tree* root*/){
    struct Tree* curr=(struct Tree*)malloc(sizeof(struct Tree*));
    struct Tree* temp=root;
    struct Tree* parent=NULL;
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
    //temp=root;
    while (temp!=NULL)
    {
        /*if (item==temp->data)
        {
            return;
        }*/
        if(item<temp->data){
            parent=temp;
            temp=temp->lchild;
            
        }
        else{
            parent=temp;
            temp=temp->rchild;
        }
    }
    //temp=curr;
    if (item<parent->data)
    {
        parent->lchild=curr;
    }
    else{
        parent->rchild=curr;
    }
}
void test(struct Tree* x){
    struct Tree* temp=(struct Tree*)malloc(sizeof(struct Tree*));
    temp=x;
    while(temp!=NULL){
        printf("%3d",temp->data);
        temp=temp->lchild;
    }
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
    //struct Tree* root=NULL;
    int choice;
    while (1){
        printf("******MENU******\n1.insert\n2.preorder\n3.test\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert(); break;
            case 2: preorder(root); break;
            case 3: test(root); break;
            default: exit(0); break;
        }
    }
    return 0;
}