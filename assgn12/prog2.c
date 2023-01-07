//Quick Sort
#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int lb,int ub){\
    int start=lb;
    int end=ub;
    int pivot=a[0];
    while(start<end){
        while(a[start]<=a[pivot]){
            //swap(&a[start],&pivot);
            start++;
        }
        while(a[end]>pivot){
            //swap(&a[end],&pivot);
            end--;
        }
        if(start<end){
            swap(&a[start],&a[end]);
        }
        swap(&a[lb],&a[end]);
    }
    return end;
}
void quickSort(int a[],int lb,int ub){
    int location;
    if(lb<ub){
        location=partition(a,lb,ub);
    }
    quickSort(a,lb,location-1);
    quickSort(a,location+1,ub);
}
int main(void){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        printf("Element no. %d: ",i+1);
        scanf("%d",(arr+i));
    }
    quickSort(arr,arr[0],arr[n-1]);
    return 0;
}
