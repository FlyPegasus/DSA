//Merge Sort with steps <3
#include<stdio.h>
void display(int arr[],int low,int high){
    for (int i = low; i < high+1; i++)
    {
        printf("%3d",arr[i]);
    }
    printf("\n");
}
void merge(int a[],int l,int m,int u){
    int i=l;
    int k=l;
    int j=m+1;
    int b[u+1];
    while (i<=m && j<=u)
    {
        if (a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if (i>m)
    {
        while (j<=u)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=m){
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for (int d = l; d <= u; d++)
    {
        a[d]=b[d];
    }
}
void mergeSort(int a[],int lb, int ub){
    int mid;
    if (lb<ub)
    {
        mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        printf("Partitioning the array.\n");
        display(a,lb,mid);
        mergeSort(a,mid+1,ub);
        printf("Partitioning the array.\n");
        display(a,mid+1,ub);
        merge(a,lb,mid,ub);
        printf("Merging.\n");
        display(a,lb,ub);
    }
}
int main(void){
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Element: ");
        scanf("%d",&arr[i]);
    }
    printf("MergeSort steps: \n");
    mergeSort(arr,0,size-1);
    printf("Sorted array: ");
    display(arr,0,size-1);
    return 0;
}
