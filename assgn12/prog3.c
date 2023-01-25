//HeapSort
#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void maxHeapify(int a[],int s,int i){
    int largest=i;
    int left=i*2;
    int right=left+1;
    while (left<=s && a[left]>a[largest])
    {
        largest=left;
    }
    while (right<=s && a[right]>a[largest])
    {
        largest=right;
    }
    if (largest!=i)
    {
        swap(&a[largest],&a[i]);
        maxHeapify(a,s,largest);
    }
}
void heapSort(int a[],int s){
    //Heapify
    for (int i = s/2; i >= 1; i--)//s/2 bcs heapifying the parent nodes
    {
        maxHeapify(a,s,i);
    }
    for (int j = s; j >=1 ; j--)//Deleting
    {
        swap(&a[1],&a[j]);
        maxHeapify(a,s,1);
    }
}
void display(int a[],int s){
    printf("\n");
    for (int i = 0; i < s; i++)
    {
        printf("%3d",a[i]);
    }
}
int main(void){
    int n=7;
    int arr[]={7,3,5,1,9,6,4};
    int i=n/2;
    printf("Array before Sorting: ");
    display(arr,n);
    heapSort(arr,7);
    printf("\nArray after Sorting: ");
    display(arr,n);
    return 0;
}