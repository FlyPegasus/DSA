//largest and smallest numbers in an array
#include<iostream>
using namespace std;
int main(void){
    int n,s=9999,l=-9999;
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
        if (arr[i]<s)
        {
            s=arr[i];
        }
        if (arr[i]>l)
        {
            l=arr[i];
        }
        
    }
    cout<<"Largest element is: "<<l<<endl;
    cout<<"Smallest element is: "<<s<<endl;
    return 0;
}