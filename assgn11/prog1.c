//selection sort
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
void selectionSort(int a[],int s){
    for (int i = 0; i < s-1; i++)
    {
        int min=i;
        for (int j = i+1; j < s; j++)
        {
            if (a[min]>a[j])
            {
                min=j;
            }
        }
        swap(&a[i],&a[min]);
        display(a,s);
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
    selectionSort(arr,size);
    printf("\n");
    return 0;
}