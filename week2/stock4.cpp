#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define vvi vector<vector<int>>
#define yes          \
    cout << "YES\n"; \
    return; 
#define no          \
    cout << "NO\n"; \
    return;
#define read(arr)                          \
    for (int i = 0; i < (arr).size(); i++) \
    {                                      \
        cin >> (arr)[i];                   \
    }
#define print(arr)                         \
    for (int i = 0; i < (arr).size(); i++) \
    {                                      \
        cout << (arr)[i] << " ";           \
    }                                      \
    cout << endl;
#define get(n) \
    int n;     \
    cin >> n
#define prt(x) cout << x << '\n'
const int MOD = 1e9 + 7; 
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
/*int f(vector<int>&prices,int i,int t,int buy,vector<vector<vector<int>>>&dp)
    {
        if(t==0) return 0;
        if(i==prices.size()) return 0;
        if(dp[i][buy][t]!=-1) return dp[i][buy][t];
        if(buy==1)
            return dp[i][buy][t]=max(-prices[i]+f(prices,i+1,t,0,dp),f(prices,i+1,t,1,dp));
        else
            return dp[i][buy][t]=max(prices[i]+f(prices,i+1,t-1,1,dp),f(prices,i+1,t,0,dp));
    }*/
    int f1(vector<int> &prices,int i , int transNo,int k,vvi &dp)
    {
        if(i==prices.size()|| transNo == 2*k) return 0;
        if(dp[i][transNo]!=-1) return dp[i][transNo];
        if(transNo%2==0)
            return dp[i][transNo]=max(-prices[i]+f1(prices,i+1,transNo+1,k,dp),f1(prices,i+1,transNo,k,dp));
        else
            return dp[i][transNo]=max(prices[i]+f1(prices,i+1,transNo+1,k,dp),f1(prices,i+1,transNo,k,dp));
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
       // vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
        //return f(prices,0,k,1,dp);
        vi prev(2*k+1,0);
        vi curr(2*k+1,0);
        //return f1(prices,0,0,k,dp);
        for(int i = n-1 ; i>=0 ; i--)
        {
            for(int transNo = 2*k-1; transNo>=0 ; transNo--)
            {
                 if(transNo%2==0)
                    curr[transNo]=max(-prices[i]+prev[transNo+1],prev[transNo]);
                else
                   curr[transNo]=max(prices[i]+prev[transNo+1],prev[transNo]);
            }
            prev = curr;
        }
        cout<< prev[0]<<endl;
    }
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    get(t);
    for (int i = 0; i < t; i++)
    {
        get(n);
        vi arr(n);
        read(arr);
        get(k);
         maxProfit(k,arr);
    }
    return 0;
}