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
void spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        int left , right , top ,bottom;
        left = 0 ; 
        right = m-1;
        top = 0;
        bottom = n-1;
        vector<int> ans;
        while(top<=bottom && left<=right)
        {
            for(int i = left ; i<=right ; i++) ans.pb(mat[top][i]);
            top++;
            for(int i = top ; i<=bottom ; i++) ans.pb(mat[i][right]);
            right--;
            if(top<=bottom)
            {
                for(int i= right ; i>=left; i--) ans.pb(mat[bottom][i]);
                bottom--;
            }
            if(left<=right)
            {
                for(int i = bottom ; i>=top ; i--) ans.pb(mat[i][left]);
                left++;
            }
        }
        print(ans);
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
        get(m);
        vvi mat(n,vi(m));
        for(int i = 0 ; i<n ; i++)
            for(int j = 0 ; j<m ; j++)
                cin>>mat[i][j];
       spirallyTraverse(mat);
    }
    return 0;
}