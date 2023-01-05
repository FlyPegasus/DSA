//Array Operations
#include<stdio.h>
#define size 10
int arr[size];
void update(int item,int k){
    if (k-1>=size || k-1<0)
    {
        printf("Updation not possible\n");
        return;
    }
    arr[k-1]=item;
}
void insert(int item,int k){
    if (k-1>=size || k-1<0)
    {
        printf("Insertion not possible\n");
        return;
    }
    if (k-1==size)
    {
        arr[k-1]=item;
        return;
    }
    for (int i = size; i > k-1; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[k-1]=item;
    return;
}
void search(int x){
    for (int i = 0; i < size; i++)
    {
        int flag=1;
        if (arr[i]==x)
        {
            printf("Item %d found at position %d.\n",x,i+1);
            flag=0;
        }
        if(flag==1){
            printf("Item not found.");
        }
    }
    return;
}
//void remove(int x){}
void display(){
    for (int i = 0; i < size; i++)
    {
        printf("%3d",arr[i]);
    }
    
}
int main(void){
    int choice;
    while (1){
        printf("******MENU******\n1.insert\n2.search\n3.update\n4.display\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: int item,pos; printf("Enter item and pos: "); scanf("%d%d",&item,&pos); insert(item,pos); break;
            case 2: int item; printf("Enter item: "); scanf("%d",&item); search(item); break;
            case 3: int item,pos; printf("Enter item and pos: "); scanf("%d%d",&item,&pos); update(item,pos); break;
            case 4: display(); break;
            default: exit(0); break;
        }
    }
    return 0;
}