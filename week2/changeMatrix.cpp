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
void booleanMatrix(vector<vector<int>>& mat) {
    int col0 = 0, rows = mat.size(),
        cols = mat[0].size();
    // Step 1: Mark the first row and 
    // column if there is a 1 in the matrix
    for (int i = 0; i < rows; i++) {
      
      // Check if 0th column contains 1
        if (mat[i][0] == 1) col0 = 1; 
        for (int j = 1; j < cols; j++) {
            if (mat[i][j] == 1) {
                mat[i][0] = 1;  
                mat[0][j] = 1;  
            }
        }
    }

    // Step 2: Traverse the matrix in 
    // reverse direction and update values
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--) {
            if (mat[i][0] == 1 || mat[0][j] == 1) {
                mat[i][j] = 1;
            }
        }
        if (col0 == 1) {
            mat[i][0] = 1;
        }
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
        get(m);
        vvi mat(n,vi(m));
        for(int i = 0 ; i<n ; i++)
            for(int j = 0 ; j<m ; j++)
                cin>>mat[i][j];
        booleanMatrix(mat);
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}