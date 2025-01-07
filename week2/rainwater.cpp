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
/*
 int trap(vector<int>& height) {
        int n = height.size();
        int ans=0;
        vector<int>suffixMax(n,0);
        suffixMax[n-1] = height[n-1];
        for(int i = n-2 ; i>=0 ; i--)
        {
            suffixMax[i] = max(suffixMax[i+1],height[i]);
        }
        int leftMax = height[0];
        for(int i = 1; i<n ; i++)
        {
            if(leftMax>height[i] && suffixMax[i]>height[i])
            {
                ans = ans + min(leftMax,suffixMax[i]) - height[i];
            }
            leftMax = max(height[i],leftMax);
        }
        return ans;
    }
*/
void trap(vector<int>& height) {
        int n = height.size();
        int l = 0 , r = n-1;
        int leftMax = 0 , rightMax = 0 , ans = 0;
        while(l<r)
        {
            if(height[l]<=height[r])
            {
                if(leftMax>height[l]) ans += leftMax - height[l];
                else leftMax = height[l];
                l++;
            }
            else
            {
                if(rightMax>height[r]) ans+= rightMax-height[r];
                else rightMax = height[r];
                r--;
            }
        }
       prt(ans);
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
        trap(arr);
    }
    return 0;
}