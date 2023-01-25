#include<stdio.h>
#include<stdlib.h>
int max(int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
struct avl_tree
{
    struct avl_tree* lchild;
    struct avl_tree* rchild;
    int data;
    int height;
};
struct avl_tree* root=NULL;
struct avl_tree* createNode(int key)
{
    struct avl_tree* ptr;
    ptr=(struct avl_tree*)malloc(sizeof(struct avl_tree));
    ptr->data=key;
    ptr->lchild=NULL;
    ptr->rchild=NULL;
    return ptr;
}
struct avl_tree* leftRotate(struct avl_tree* x){
    struct avl_tree* y=x->rchild;
}
int main(void)
{
	int num;
	while(1)
	{
		printf("Enter\n1 for arr_in\n2 for display\n3 for update\n4 for insert\n5 for remove\n6 for search\nYour choice : ");
		scanf("%d",&num);
		switch (num)
		{
			case 1:
				arr_in();
				break;
			case 2:
				display();
				break;
			case 3:
				update();
				break;
			case 4:
				insert();
				break;
			case 5:
				remove();
				break;
			case 6:
				search();
				break;
			default:
				exit(1);
				break;
		}
	}
    return 0;
}