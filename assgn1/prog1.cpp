//sum of series
#include<iostream>
using namespace std;
int main(void)
{
    int n,s=0;
    cout<<"Enter the series range: ";
    cin>>n;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            s=s+j;
        }
        
    }
    cout<<"Sum of the series is: "<<s;
    return 0;
}