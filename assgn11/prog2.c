//Bubble Sort
/*
Swap adjacent elements of array to sort
*/
#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void display(int a[],int s){
    printf("\n");
    for (int i = 0; i < s; i++)
    {
        printf("%3d",a[i]);
    }
}
void bubbleSort(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nIteration %d\n",i);
        for (int j = 1; j < n-i; j++)
        {
            if (a[j]<a[j-1])//Ascending Order
            {
                swap(&a[j],&a[j-1]);
            }
            //display(a,n);
        }
        display(a,n);
    }
    
}
int main(void){
    int size;
    printf("Enter Array size: ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("\nElement %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,size);
    printf("\nSorted Array: \n");
    display(arr,size);
    return 0;
}