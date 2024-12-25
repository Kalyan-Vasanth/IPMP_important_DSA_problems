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
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

 
void segregateEvenOdd(vector<int>& v) {
        // code here
        int n = v.size();
        int i,j=-1;
        for(i = 0 ; i<n ;i++)
        {
            if(v[i]%2==1)
            {
                j = i;
                break;
            }
        }
        if(j==-1) return; //returned without sorting 
        for(i = j+1; i<n ; i++)
        {
            if(v[i]%2==0)
            {
                swap(v[i],v[j]);
                j=j+1;
            }
        }
        sort(v.begin(),v.begin()+j);
        sort(v.begin()+j,v.end());
        print(v);
        return;
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
        segregateEvenOdd(arr);
    }
    return 0;
}