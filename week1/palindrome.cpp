#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define pll pair<long long, long long>
#define pvi pair<vector<int>, int>

 
#define yes          \
    cout << "YES\n"; 
 
#define no          \
    cout << "NO\n"; 
 
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
 int rev(int x)
    {
        ll ans = 0;
        while(x!=0)
        {
            int c = x%10;
            ans = ans*10 + c;
            x = x/10;
        }
        return (int)ans;
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        //you will find reverse of that number and find whether it is equal or not
        int revi = rev(x);
        if(revi == x) 
        {
            return true;
        }
        else 
        {
            return false;
        }
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
        bool ans = isPalindrome(n);
        if(ans) 
        {
            yes;
        }
        else no;
    }
    return 0;
}