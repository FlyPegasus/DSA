/*#include<iostream>
using namespace std;
int update(int x[], int index, int value){
    x[index]=value;
}
int main(void)
{
    int n;
    cout<<"Array size: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Array element "<<i+1<<" :";
        cin>>arr[i];
    }
    for (int l = 0; l < n; l++)
    {
        cout<<arr[l]<<" ";
    }
    int op_num;
    cout<<"Enter the number of operations you wanna perform: ";
    cin>>op_num;
    for (int g = 0; g < op_num; g++)
    {
        char optn;
        cout<<"Enter u for update, i for insert, s for search, r for remove and d for display.\nEnter the array operation to be performed: ";
        cin>>optn;
        if (optn=='u')
        {
            update();
        }
        else if(optn=='i')
        {
            insert();
        }
        else if(optn=='s')
        {
            search();
        }
        else if(optn=='r')
        {
            remove();
        }
        else if(optn=='d')
        {
            display();
        }
        else
        {
            cout<<"Wrong input.";
        }
    }
    return 0;
}
*/ //Trial by me.



#include<iostream>
#define size 999
using namespace std;
int arr[size],n;
int arr_in()
{
	int i;
	cout<<"Enter array length: ";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cout<<"Enter array element "<<i+1<<":";
		cin>>arr[i];
	}
    return 0;
}
void display()
{
	int l;
	cout<<"Array is: ";
	for (l=0;l<n;l++)
	{
		cout<<arr[l]<<" ";
	}
	cout<<endl;
}
void insert()
{
	int indx,item;
	cout<<"Enter index for insertion: ";
	cin>>indx;
	cout<<"Enter item: ";
	cin>>item;
	if (indx<0 || indx>n-1)
	{
		cout<<"Insertion is not possible.";
	}
	else if (n-1==indx)
	{
		arr[indx]=item;
	}
	else
	{
		int f=n;
		while(f>=indx)
		{
			arr[f]=arr[f-1];
			f--;
		}
		arr[indx]=item;
	}
}
int remove()
{
	int indx;
	cout<<"Enter index to be removed: ";
	cin>>indx;
	if (indx<0 || indx>n-1)
	{
		cout<<"Deletion is not possible.";
        return 0;
	}
	else
	{
		int f=n;
		while(f<=n-2)
		{
			arr[f]=arr[f+1];
			f++;
		}n--;
		return n;
	}
}
int search()
{
	int item;
	cout<<"Enter item to be searched: ";
	cin>>item;
	if (n<1)
	{
		cout<<"No item in array.";
	}
	int f;
	for (f=0;f<n;f++)
	{
		if (arr[f]==item)
		{
			break;
		}
	}
	cout<<"Item found at position: "<<f+1<<endl;
    return 0;
}
int update()
{
	int indx,item;
	cout<<"Enter index to be modified: ";
	cin>>indx;
	if (indx<0 || indx>n-1)
	{
		cout<<"Update is not possible.";
	}
	else
	{
		cout<<"Enter item: ";
		cin>>item;
		arr[indx]=item;
	}
    return 0;
}
int main(void)
{
	int num;
	while(1)
	{
		cout<<"Enter\n1 for arr_in\n2 for display\n3 for update\n4 for insert\n5 for remove\n6 for search\nYour choice : ";
		cin>>num;
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