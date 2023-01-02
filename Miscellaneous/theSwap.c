//Learning the behaviour of the swap function
#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(void){
    int x=9, y=5;
    printf("Before Swap:\n");
    printf("x is %d and y is %d\n",x,y);
    swap(&x,&y);
    printf("After Swap:\n");
    printf("x is %d and y is %d\n",x,y);
    return 0;
}