//Radix Sort
#include<stdio.h>
#include<math.h>
void countingSort(int a[],int n,int pass){
    //sorry for long code but need to update pass value, since pow() func returns double
    int power=1;
    if (pass>1){
        for (int p = 0; p < pass-1; p++)
        {
            power=power*10;
        }
    }
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
        int h=(a[j]/power)%10;
        arr[h]++;
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
    //printf("\nSorted array: \n");
    for (int r = 0; r < n; r++)
    {
        a[r]=b[r];
    }
    //return b;
}
void RadixSort(int a[],int n){
    int max=0,pass=0;
    //finding the largest number in the user given array
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    int temp=max;
    while (temp!=0)
    {
        temp=temp/10;
        pass++;
    }
    //creating a new array for each pass
    for (int j = 1; j <= pass; j++)
    {
        countingSort(a,n,pass);
    }
    printf("\nSorted array: \n");
    for (int r = 0; r < n; r++)
    {
        printf("%3d",a[r]);
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
    RadixSort(arr,size);
    return 0;
}