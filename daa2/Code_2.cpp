#include<bits/stdc++.h>
using namespace std;

//state =1 (increasing) , = 0(decreasing) = 2(neutral)
int HELPER(int n , int prev , int state,vector<vector<int>> &dp,vector<int> &arr)
{
    if(n==0)return 0;

    if(dp[n][state] !=-1)return dp[n][state];

    if(state == 0)
    {
        int a,b; a=b=INT_MIN;
        //leave
        a = HELPER(n-1, prev , state,dp,arr);
        //take
        if(arr[n-1]>prev)
            b = 1+ HELPER(n-1, arr[n-1] , 1,dp,arr);

        return dp[n][state] = max(a,b);
    }
    else if(state == 1)
    {
        int a,b; a=b=INT_MIN;
        //leave
        a = HELPER(n-1, prev , state,dp,arr);
        //take
        if(arr[n-1]<prev)
            b = 1+ HELPER(n-1, arr[n-1] , 0,dp,arr);

        return dp[n][state] = max(a,b);
    }
    else
    {
        int a,b,c; a=b=c= INT_MIN;
        a = HELPER(n-1, prev , state,dp,arr);
        b = 1+HELPER(n-1, arr[n-1] , 0,dp,arr);
        c = 1+HELPER(n-1, arr[n-1] , 1,dp,arr);
        return dp[n][state] = max(a,max(b,c));
    }
}

int main()
{
    int n; 
    cin>>n;
    vector<int>  temp(3,-1);
    vector<vector<int>> dp(n+1,temp);
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans = HELPER(n,-1, 2,dp,v);
    cout<<ans<<"\n";
    return 0;
}