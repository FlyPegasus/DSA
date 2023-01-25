#include<iostream>
using namespace std;
#define size 10
class Queue
{
    int front,rear;
    int arr[size];
    public:
    Queue(){
        front=-1;
        rear=-1;
    }
    void display();
    void insert(int x);
    int del();
    int isFull();
    int isEmpty();
};
void Queue::insert(int x)
{
    if (!isFull())
    {
        rear++;
        arr[rear]=x;
    }
    else
    {
        cout<<"Queue overflow."<<endl;
    }
}
int Queue::isEmpty()
{
    if (rear==front)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int Queue::isFull()
{
    if (rear==size-1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main(void)
{
    Queue q;
    return 0;
}