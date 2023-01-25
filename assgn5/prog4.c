//single linked list operations(insert at beg/end, delete at beg/end, display, search, reverse)
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
void insertBeg(int item){
    struct Node* curr=(struct Node*)malloc(sizeof(struct Node*));
    curr->data=item;
    curr->next=head;
    head=curr;
}
void insertEnd(int item){
    struct Node* curr=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* temp;
    temp=head;
    curr->data=item;
    curr->next=NULL;
    if (head==NULL)
    {
        head=curr;
        return;
    }
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=curr;
}
void delEnd(){
    struct Node* temp;
    temp=head;
    if (head==NULL)
    {
        printf("Empty List.\n");
    }
    else if(head->next==NULL){
        head=NULL;
    }
    else{
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
    }
}
void display(){
    struct Node* temp;
    temp=head;
    while (temp!=NULL)
    {
        printf("%3d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(void){
    int choice;
    while (1){
        printf("******MENU******\n1.insertBeg\n2.insertEnd\n3.display\n4.delEnd\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: int item; printf("Enter item: "); scanf("%d",&item); insertBeg(item); break;
            //case 2: int item; printf("Enter item: "); scanf("%d",&item); search(item); break;
            case 2: printf("Enter item: "); scanf("%d",&item); insertEnd(item); break;
            case 3: display(); break;
            case 4: delEnd(); break;
            default: exit(0); break;
        }
    }
    return 0;
}