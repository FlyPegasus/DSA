//Insertion Sort
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
void insertionSort(int a[],int s){
    for (int i = 1; i < s; i++)
    {
        int temp=a[i];
        int j=i-1;
        while (j>=0 && temp<a[j])
        {
            a[j+1]=a[j];
            display(a,s);
            j--;
        }
        a[j+1]=temp;
        printf("\n%d iteration",i);
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
    insertionSort(arr,size);
    display(arr,size);
    printf("\n");
    return 0;
}