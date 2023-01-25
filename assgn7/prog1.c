//Doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head=NULL;
void insertBeg(){
    int item;
    printf("Enter item: ");
    scanf("%d",&item);
    struct Node* curr=(struct Node*)malloc(sizeof(struct Node*));
    if (head==NULL)
    {
        head->data=item;
        head->prev=NULL;
        head->next=NULL;
        return;
    }
    else{
        curr->data=item;
        curr->next=head;
        curr->prev=NULL;
        head=curr;
    }
}
void display(){
    if (head==NULL)
    {
        printf("Empty List");
        return;
    }
    
}
int main(void){
    return 0;
}