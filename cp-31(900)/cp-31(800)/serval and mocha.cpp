#include<bits/stdc++.h>
using namespace std;

bool beautiful(int a[] , int n)
{
    int res=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            res=min(__gcd(a[i], a[j]), res);
        }
    }
    if(res>2)
    return false;
    else
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(beautiful(a,n))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}