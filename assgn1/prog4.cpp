//sum of even and odd numbers
#include<iostream>
using namespace std;
int main(void){
    int n,o=0,e=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for (int j = 0; j < n; j++)
    {
        cin>>arr[j];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            e+=arr[i];
        }
        else
        {
            o+=arr[i];
        }
        
    }
    cout<<"Sum of all odds: "<<o<<endl;
    cout<<"Sum of all evens: "<<e<<endl;
    return 0;
}