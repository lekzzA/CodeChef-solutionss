#include <bits/stdc++.h>
using namespace std;

int* solve(int n,int* arr){
    int arr_cp[n];
    for(int i=0;i<n;i++)arr_cp[i]=arr[i];
    sort(arr_cp,arr_cp+n);
    
    int diff=0;
    int dp[n];
    for(int i=0;i<n;i++){
        dp[arr_cp[i]]=min(diff,arr_cp[i]);
        diff=min(diff+1,arr_cp[i]);
    }
    
    int* ans = new int[n];
    for(int i=0;i<n;i++){
        ans[i]=dp[arr[i]];
        if(dp[arr[i]]!=0)dp[arr[i]]-=1;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)cin>>arr[j];
        int* ans=solve(n,arr);
        for(int j=0;j<n;j++)cout<<ans[j]<<" ";
        cout<<endl;
    }

    return 0;
}
