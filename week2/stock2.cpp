#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define yes          \
    cout << "YES\n"; \
    return; 
#define no          \
    cout << "NO\n"; \
    return;
#define all(arr) (arr).begin(), (arr).end()
#define rall(x) (x).rbegin(), (x).rend()
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define RREP(i, a, b) for (int i = a; i > b; --i)
#define debug(x) cout << #x << ": " << x << endl
#define prt(x) cout << x << '\n'
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
const int N1 = 1e5 + 1;
const int N2 = 1e7 + 1;
const int MOD = 1e9 + 7; 
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
    int f(vector<int>&prices,int i,int buy,vector<vector<int>>&dp)
    {
        if(i == prices.size()) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        if(buy==1)
            return dp[i][buy]=max(-prices[i]+f(prices,i+1,0,dp),f(prices,i+1,1,dp));
        else
           return  dp[i][buy]=max(prices[i]+f(prices,i+1,1,dp),f(prices,i+1,0,dp));
    }
    int maxProfit(vector<int>& prices) {
        //either you can take or not take
        int n = prices.size();
        //vector<vector<int>> dp(n+1,vector<int>(2,-1));
        //return f(prices,0,1,dp);
        // in this we need to top down (tabulation)
        //base cases
       /* dp[n][0] = 0;
        dp[n][1] = 0;
        for(int i = n-1 ; i>=0 ; i--)
        {
            for(int buy = 0 ; buy<=1 ;  buy++)
            {
                if(buy==1)
                    dp[i][buy]=max(-prices[i]+dp[i+1][0],dp[i+1][1]);
                else
                   dp[i][buy]=max(prices[i]+dp[i+1][1],dp[i+1][0]);
            }
        }
        return dp[0][1];*/
        int aheadBuy = 0 , aheadNotBuy = 0;
        int currBuy,currNotBuy;
        for(int i = n-1 ; i>=0 ; i--)
        {
            currBuy = max(-prices[i]+aheadNotBuy,aheadBuy);
            currNotBuy = max(prices[i]+aheadBuy,aheadNotBuy);
            aheadBuy = currBuy;
            aheadNotBuy = currNotBuy;
        }
        return aheadBuy;
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
        int ans = maxProfit(arr);
        prt(ans);
    }
    return 0;
}