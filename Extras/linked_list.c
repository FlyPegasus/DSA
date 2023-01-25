#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node* head;
    struct Node* next;
    int data;
};
struct Node* head=NULL;
void insertBeg(int item)
{
    struct Node* curr=(struct Node*)malloc(sizeof(struct Node));
    curr->data=item;
    curr->next=head;
    head=curr;
}
void delBeg()
{
    if (head==NULL)
    {
        printf("Empty list.");
    }
    struct Node* temp=head;
    head=head->next;
    temp=NULL;
    free(temp);
}
void display(){
    struct Node* temp=head;
    while (temp!=NULL)
    {
        printf("%3d",temp->data);
        temp=temp->next;
    }
}
int main(void)
{
    insertBeg(45);
    insertBeg(55);
    insertBeg(65);
    display();
    printf("\n");
    delBeg();
    display();
    return 0;
}