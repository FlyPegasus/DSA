//Stack using Array
#include<stdio.h>
int top=-1;
void push(int a[],int s){
    int item;
    if (isFull(a,s))
    {
        return;
    }
    printf("Enter item: ");
    scanf("%d",&item);
    a[++top]=item;
    return;
}
void pop(int a[]){
    if (isEmpty(a))
    {
        return;
    }
    printf("Popped: %d\n",a[top]);
    top--;
    return;
}
void display(int a[]){
    printf("Stack items: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%3d",a[i]);
    }
    printf("\n");
}
int isEmpty(int b[]){
    if (top==-1)
    {
        printf("Stack Underflow.\n");
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(int b[],int s){
    if (top==s)
    {
        printf("Stack Overflow.\n");
        return 1;
    }
    else{
        return 0;
    }
}
void peek(int a[]){
    if (top==-1)
    {
        printf("Stack empty.\n");
        return;
    }
    printf("Stack top is: %d\n",a[top]);
}
int main(void){
    int size;
    printf("Enter the size of your stack: ");
    scanf("%d",&size);
    int arr[size];
    int choice;
    while (1){
        printf("******MENU******\n1.push\n2.pop\n3.peek\n4.display\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: push(arr,size-1); break;
            case 2: pop(arr); break;
            case 3: peek(arr); break;
            case 4: display(arr); break;
            default: exit(0); break;
        }
    }
    return 0;
}