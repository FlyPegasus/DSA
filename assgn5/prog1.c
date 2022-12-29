//tail recursion factorial
#include<stdio.h>
int fact(int n){
    if (n==1)
    {
        return 1;
    }
    return fact(n-1)*n;
}
int main(void){
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    printf("Factorial of %d is %d\n",a,fact(a));
    return 0;
}