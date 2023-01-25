#include<stdio.h>
void Toh(int n,char src,char aux,char dest){
    if (n==1)
    {
        printf("Move disk 1 from %c to %c",src,dest);
    }
    else{
        Toh(n-1,src,dest,aux);
    }
    Toh(n-1,aux,dest,src);
}
int main(void){
    Toh(3,'A','B','C');
    return 0;
}