//Circular Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
void insertBeg(){
    struct Node* curr=(struct Node*)malloc(sizeof(struct Node*));
    int item;
    printf("Enter item: ");
    scanf("%d",&item);
    curr->data=item;
    if(head==NULL){
        curr->next=head;
    }
    else{
        curr->next=NULL;
    }
    head=curr;
}
void insertEnd(){}
void delBeg(){}
void delEnd(){}
void display(){
    struct Node* temp=head;
    if(head==NULL){
        printf("Empty List.\n");
        return;
    }
    if (head->next==head)
    {
        printf("%d",head->data);
        return;
    }
    while(temp->next!=head){
        printf("%3d",temp->data);
        temp=temp->next;
    }
}
int main(void){
    int choice;
    while (1){
        printf("\n******MENU******\n1.insertBeg\n2.delBeg\n3.display\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: insertBeg(); break;
            case 2: delBeg(); break;
            case 3: display(); break;
            default: exit(0); break;
        }
    }
    return 0;
}