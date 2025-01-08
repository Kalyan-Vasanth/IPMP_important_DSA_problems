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
int f(vector<int>&prices,int i,int t,int buy,vector<vector<vector<int>>>&dp)
    {
        if(t==0) return 0;
        if(i==prices.size()) return 0;
        if(dp[i][buy][t]!=-1) return dp[i][buy][t];
        if(buy==1)
            return dp[i][buy][t]=max(-prices[i]+f(prices,i+1,t,0,dp),f(prices,i+1,t,1,dp));
        else
            return dp[i][buy][t]=max(prices[i]+f(prices,i+1,t-1,1,dp),f(prices,i+1,t,0,dp));
    }
    void maxProfit(vector<int>& prices) {
        int n = prices.size();
        //vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        //return f(prices,0,2,1,dp);
        vvi prev(2,vi(3,0)),curr(2,vi(3,0));
        /*for(int i = 0 ; i<n ; i++)
            for(int j = 0 ; j<2 ; j++) dp[i][j][0]=0;
        for(int j = 0 ; j<2 ;j++)
            for(int k = 0 ; k<3 ; k++) dp[n][j][k] = 0;*/
        for(int i = n-1 ; i>=0 ; i--)
        {
            for(int buy = 0 ; buy<2 ;buy++)
            {
                for(int t = 1 ; t<3 ; t++)
                {
                    if(buy==1)
                  curr[1][t]=max(-prices[i]+prev[0][t],prev[1][t]);
                    else
                  curr[0][t]=max(prices[i]+prev[1][t-1],prev[0][t]);
                }
            }
            prev = curr;
        }
        prt(prev[1][2]);
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
         maxProfit(arr);
    }
    return 0;
}