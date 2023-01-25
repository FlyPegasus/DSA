#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node* head;
    struct Node* left;
    struct NOde* right;
    int data;
};
struct Node* head=NULL;
void insertData(int item)
{
    struct Node* curr=(struct Node*)malloc(sizeof(struct Node));
    if (head==NULL)
    {
        head->data=item;
        curr=head;
    }
    else if(curr->data<item)
    {
        curr=curr->left;
        curr->data=item;
    }
    else
    {
        curr=curr->right;
        curr->data=item;
    }
}
/*void search(int item)
{
    struct Node*
}*/
int main(void)
{
    return 0;
}