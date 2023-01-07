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
        swap(&a[largest],a[i]);
        maxHeapify(a,s,largest);
    }
}
void heapSort(int a[],int s){
    //Delete

}
int main(void){
    int n=7;
    int arr[n];
    int i=n/2;
    heapSort(arr,7);
    return 0;
}