#include<stdio.h>
int main(void){
    int arr[3]={1,2,3};
    printf("%u\n",arr);
    printf("%u\n",&arr[0]);
    printf("%u\n",&arr);
    return 0;
}