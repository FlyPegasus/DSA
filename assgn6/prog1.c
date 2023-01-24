//Stack using Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *top=NULL;
int isEmpty(){
    if (top==NULL)
    {
        return 1;
    }
    return 0;
}
void push(){
    int item;
    printf("Enter item: ");
    scanf("%d",&item);
    struct Node* curr=(struct Node*)malloc(sizeof(struct Node*));
    curr->data=item;
    curr->next=NULL;
    curr->next=top;
    top=curr;
}
void pop(){
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
    }
    else{
        printf("Popped: %d",top->data);
        top=top->next;
    }
}
void display(){
    struct Node* temp=top;
    while (temp!=NULL)
    {
        printf("%3d",temp->data);
        temp=temp->next;
    }
}
int main(void){
    int choice;
    while (1){
        printf("\n******MENU******\n1.push\n2.pop\n3.display\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            default: exit(0); break;
        }
    }
    return 0;
}