#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define pll pair<long long, long long>
#define pvi pair<vector<int>, int>

 
#define yes          \
    cout << "YES\n"; \
    return;
 
#define no          \
    cout << "NO\n"; \
    return;
 
#define endl '\n'
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
int mod_exp(int base, int exp, int mod = MOD)
{
    int res = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}
#define ll long long 
 void twoOddNum(vector<int>&arr,int N)  
    {
        // code here
        vector<ll> ans;
        ll xor1 = 0;
        for(int i = 0 ; i<N ; i++) xor1 = xor1 ^ arr[i];
        xor1 = xor1 & -xor1; 
        ll a = 0, b =0;
        for(int i = 0 ; i<N ; i++)
        {
            if(arr[i] & xor1) a = a ^ arr[i];
            else b = b ^ arr[i];
        }
        cout<<a<<endl;
        cout<<b<<endl;
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
        vector<int> arr(n);
        read(arr);
        twoOddNum(arr,n);
    }
    return 0;
}