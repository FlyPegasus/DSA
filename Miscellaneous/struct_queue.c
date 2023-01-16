//Queue using struct
#include<stdio.h>
#include<stdlib.h>
#define max 100
struct Queue{
	int arr[max];
	int rear,front;
};
struct Queue q1;
void insert(){
	if(q1.rear==max-1){
		printf("Queue overflow.\n");
		return;
	}
	int item;
	printf("Enter item: ");
	scanf("%d",&item);
	q1.arr[++q1.rear]=item;
	return;
}
void delete(){
	if(q1.rear<q1.front){
		printf("Queue Underflow.\n");
		return;
	}
	printf("Item deleted: %d\n",q1.arr[q1.front]);
	for(int i=q1.front;i<q1.rear;i++){
		q1.arr[i]=q1.arr[i+1];
	}
	q1.rear--;
}
void display(){
	if(q1.rear<q1.front){
		printf("Queue Underflow.\n");
		return;
	}
	printf("Queue: ");
	for(int k=q1.front;k<=q1.rear;k++){
		printf("%3d",q1.arr[k]);
	}
	printf("\n");
}
int main(void){
	q1.rear=-1;
	q1.front=0;
	int choice;
	while(1){
		printf("\n***Menu***\n1.insert\n2.delete\n3.display\nElse Exit.\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: insert(); break;
			case 2: delete(); break;
			case 3: display(); break;
			default: exit(0); break;
		}
	}
	return 0;
}
