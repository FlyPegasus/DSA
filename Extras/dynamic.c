#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int *)malloc(5*sizeof(int));
    printf("%u\n",*ptr);
    return 0;
}