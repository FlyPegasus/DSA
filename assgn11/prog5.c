//Radix Sort
#include<stdio.h>
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
    return 0;
}