//Priority Queue using Single Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* rear=NULL;
//struct Node* rear=NULL;
int isEmpty(){
    if (rear==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void insert(){
    struct Node* curr=(struct Node*)malloc(sizeof(struct Node*));
    int item;
    printf("Enter item: ");
    scanf("%d",&item);
    if (isEmpty())
    {
        curr->data=item;
        curr->next=rear;//problematic point
        rear=curr;
    }
    else{
        struct Node* temp=rear;
        while(temp!=NULL && item>temp->data){
            //curr->next=temp->next;
            //temp->next=curr;
            if (temp->next==NULL)
            {
                curr->next=NULL;
                curr->data=item;
                temp->next=curr;
            }
            else{
                curr->next=temp->next;
                curr->data=item;
                temp->next=curr;
            }
            temp=temp->next;
        }
    }
}
void delete(){
    struct Node* temp=rear;
}
void display(){
    struct Node* temp=rear;
    while (temp!=NULL)
    {
        printf("%3d",temp->data);
        temp=temp->next;
    }
    
}


int main(void){
    int choice;
    while (1){
        printf("\n******MENU******\n1.insert\n2.delete\n3.display\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            default: exit(0); break;
        }
    }
    return 0;
}
//Issues: Element is not inserting at beggining