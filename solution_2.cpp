#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    for(int j=1;j<=i;j++)
        cout<<"*";
    for(int j=1;j<=2*(n-i);j++)
        cout<<" ";
    for(int j=1;j<=i;j++)
        cout<<"*";
    cout<<"\n";
}

int solve(int n)
{
    for(int i=1;i<=n;i++)
        print(i,n);
    for(int i=n;i>=1;i--)
        print(i,n);
}  
int main()
{
    int n;
    cin>>n;
    solve(n);
    return 0;
}
