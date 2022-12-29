//sum of digits
#include<iostream>
using namespace std;
int main(void)
{
    int num,s=0;
    cout<<"Enter your digit: ";
    cin>>num;
    while(num!=0)
    {
        s+=num%10;
        num=num/10;
    }
    cout<<"Sum of digits is: "<<s;
}