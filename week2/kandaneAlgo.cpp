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
#define pb push_back
const int MOD = 1e9 + 7; 
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
int maxSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int sum = arr[0] , res = arr[0];
        for(int i = 1 ; i<n ; i++)
        {
            sum = max(sum+arr[i],arr[i]); //maximum of previous sum + curr or curr
            res = max(res,sum); //update the result every time
        }
        return res;
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
        prt(maxSubarraySum(arr));
     }
     return 0;
}
