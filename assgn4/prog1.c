//Infix to Postfix
/*
Precedence:
1) (),[],{}
2) ^ (R->L)
3) /,* (L->R)
4) +,- (L->R)
*/
#include<stdio.h>

char stck[50];
int top=-1;
void push(char a[],char item){
    if (isFull(a,50))
    {
        return;
    }
    a[++top]=item;
    return;
}
void pop(char a[]){
    if (isEmpty(a))
    {
        return;
    }
    //printf("Popped: %d\n",a[top]);
    top--;
    return;
}
/*void display(int a[]){
    printf("Stack items: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%3d",a[i]);
    }
    printf("\n");
}*/
int isEmpty(char b[]){
    if (top==-1)
    {
        printf("Stack Underflow.\n");
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(char b[],int s){
    if (top==s)
    {
        printf("Stack Overflow.\n");
        return 1;
    }
    else{
        return 0;
    }
}
char peek(char a[]){
    return a[top];
}


int precedence(char oper){
    if (oper=="+" || oper=="-")
    {
        return 1;
    }
    else if(oper=="*" || oper=="/"){
        return 2;
    }
    else if(oper=="^"){
        return 3;
    }
    else{
        return -1;
    }
}
int isOper(char oper){
    if(oper=="+" || oper=="-" || oper=="*" || oper=="/" || oper=="^"){
        return 1;
    }
    else{
        return 0;
    }
}
char* infPost(char* inf){
    char *x;
    int j=0;
    int n=strlen(*inf);
    for (int i = 0; i < n; i++)
    {
        if (isOper(x[i]))
        {
            while (top>-1 && precedence(x[i])<=precedence(peek(stck)))
            {
                x[j++]=peek(stck);
                top--;
            }
            push(stck,inf[i]);
        }
        
    }
    
}
int main(void){
    char arr[100];
    
    printf("Enter your infix expression: ");
    gets(arr);
    printf(arr);
    char *postf=infPost(arr);
    printf("\n%s",postf);
    return 0;
}