//Queue using Array
#include<stdio.h>
int rear=-1,front=0;
int isEmpty(){
    if (rear<front)
    {
        printf("Queue Underflow.\n");
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(int s){
    if (rear==s-1)
    {
        printf("Queue Overflow.\n");
        return 1;
    }
    else{
        return 0;
    }
}
void insert(int a[],int s){
    if (isFull(s))
    {
        return;
    }
    int item;
    printf("Enter your item: ");
    scanf("%d",&item);
    a[++rear]=item;
    return;
}
void delete(int a[]){
    if (isEmpty())
    {
        return;
    }
    
    printf("Item deleted: %d\n",a[front]);
    for (int i = front; i < rear; i++)
    {
        a[i]=a[i+1];
    }
    rear--;
}
void display(int a[]){
    if (isEmpty())
    {
        return;
    }
    printf("Queue: ");
    for (int k = front; k <= rear; k++)
    {
        printf("%3d",a[k]);
    }
    printf("\n");
}
int main(void){
    int size;
    printf("Enter the size of your queue: ");
    scanf("%d",&size);
    int arr[size];
    int choice;
    while (1){
        printf("******MENU******\n1.insert\n2.delete\n3.display\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert(arr,size); break;
            case 2: delete(arr); break;
            case 3: display(arr); break;
            default: exit(0); break;
        }
    }
    return 0;
}