//Pascal triangle
#include<iostream>
using namespace std;
int fact(int t){
    int f=1;
    if (t==0)
    {
        return f;
    }
    else
    {
        for (int j = 1; j <= t; j++)
        {
            f=f*j;
        }
    }
    return f;
}
int binomial_coeff(int n,int r){
    int d;
    d=fact(n)/(fact(n-r)*fact(r));
    return d;
}
int main(void)
{
    int count;
    cout<<"Enter height of Pascal Triangle: ";
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        for (int l = count-i; l > 0; l--)
        {
            cout<<" ";
        }
        
        for (int k = 0; k <= i; k++)
        {
            cout<<binomial_coeff(i,k)<<" ";
        }
        cout<<endl;
    }
    
}