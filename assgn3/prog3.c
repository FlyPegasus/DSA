//Circular Queue using Array
#include<stdio.h>
#include<stdlib.h>
int rear,front=-1;
int isFull(int a[],int n){
    if ((rear+1)%n==front)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(int a[]){
    if(front==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void insert(int a[],int n){
    int item;
    printf("Enter your item: ");
    scanf("%d",&item);
    if (isEmpty(a))
    {
        front=0;
        rear=0;
        a[rear]=item;
    }
    else if(isFull(a,n)){
        printf("Queue overflow.\n");
        return;
    }
    else{
        rear=(rear+1)%n;
        a[rear]=item;
    }
}
void delete(int a[],int n){
    if (isEmpty(a))
    {
        printf("Queue underflow.\n");
    }
    else if(front==rear){
        int item;
        item=a[front];
        front=rear=-1;
    }
    else{
        printf("Item deleted: %d\n",a[front]);
        front=(front+1)%(n-1);
    }
}
void display(int a[],int n){
    for (int i = front; i != rear+1; (++i)%n)
    {
        printf("%3d",a[i]);
    }
    printf("\n");
}
int main(void){
    int size;
    printf("Enter the size of your cqueue: ");
    scanf("%d",&size);
    int arr[size];
    int choice;
    while (1){
        printf("******MENU******\n1.insert\n2.delete\n3.display\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert(arr,size); break;
            case 2: delete(arr,size); break;
            case 3: display(arr,size); break;
            default: exit(0); break;
        }
    }
    return 0;
}
//Bug: After queue full and deletion, then insertion, then display shows no output