//stack using struct
#include<stdio.h>
#include<stdlib.h>
#define max 100
struct Stack{
	int arr[max];
	int top;
};
struct Stack s1;
//s1.top=-1;
void push(){
	if(s1.top==max-1){
		printf("Stack is full.\n");
		return;
	}
	int item;
	printf("Enter item: ");
	scanf("%d",&item);
	s1.arr[++s1.top]=item;
}
void pop(){
	if(s1.top==-1){
		printf("Stack is Empty.\n");
		return;
	}
	printf("Popped Element: %d\n",s1.arr[s1.top]);
	s1.top--;
}
void display(){
	if(s1.top==-1){
		printf("Stack is Empty.\n");
		return;
	}
	printf("Stack: ");
	for(int i=0;i<=s1.top;i++){
		printf("%3d",s1.arr[i]);
	}
}
int main(void){
	s1.top=-1;
	int choice;
	while(1){
		printf("\n***Menu***\n1.push\n2.pop\n3.display\nElse Exit.\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			default: exit(0); break;
		}
	}
	return 0;
}
