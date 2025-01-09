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
void findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        map<int,vector<int>> hash;
        for(int i = 0; i<m ; i++)
        {
            for(int j = 0 ; j<n ; j++)
               hash[i+j].push_back(mat[i][j]);
        }
        bool flip = true;
        vector<int> ans;
        for(auto it : hash)
        {
            if(flip)
            {
                reverse(it.second.begin(),it.second.end());
            }
            flip = !flip;
            for(auto i : it.second)
               ans.push_back(i);
        }
        print(ans);
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
        get(m);
        vvi mat(n,vi(m));
        for(int i = 0 ; i<n ; i++)
            for(int j = 0 ; j<m ; j++)
                cin>>mat[i][j];
        findDiagonalOrder(mat);
        }
    }
