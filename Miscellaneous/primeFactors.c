#include<stdio.h>
int primeFact(int n){
    int flag=0;
    for (int i = 1; i < (n/2)+1; i++)
    {
        
        if (n%i==0)
        {
            flag++;
        }
        
    }
    if (flag>1)
    {
        return primeFact(n/2);
    }
    else
    {
        printf("%d",n);
    }
    
}
int main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    primeFact(num);
    return 0;
}