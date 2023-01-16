//Counting Sort
#include<stdio.h>
void countingSort(int a[],int n){
    int max=-1,min=999;
    //finding the max and min index
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    //Initializing the array with 0s
    int arr[max+1];
    for (int l = 0; l <= max+1; l++)
    {
        arr[l]=0;
    }
    //Incrementing values of indexes if found in given array
    for (int j = 0; j < n; j++)
    {
        arr[a[j]]++;
    }
    //printing the index count
    for (int k = 0; k <= max; k++)
    {
        printf("%3d",arr[k]);
    }
    //cummulative sum of index frequency
    for (int m = 1; m <= max; m++)
    {
        arr[m]=arr[m]+arr[m-1];
    }
    //now sorting
    int b[n];//sorted array
    for (int f = n-1; f >= 0; f--)
    {
        b[--arr[a[f]]]=a[f];
    }
    //Display sorted array
    printf("\nSorted array: \n");
    for (int r = 0; r < n; r++)
    {
        printf("%3d",b[r]);
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
    countingSort(arr,size);
    return 0;
}
//Counting Sort successful Yo