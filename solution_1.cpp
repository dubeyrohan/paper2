#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int ma=INT_MIN;
    vector<int> leaders;
    for(int i=n-1;i>=0;i--){
        ma=max(ma,arr[i]);
        if(arr[i]==ma)    
            leaders.push_back(arr[i]);
    }
    reverse(leaders.begin(),leaders.end());
    for(auto i : leaders)
        cout<<i<<" ";
}  
int main()
{
    solve();
    return 0;
}
