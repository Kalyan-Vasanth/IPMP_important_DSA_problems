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
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    int start = 0, end = n - 1, mid;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (matrix[mid][0] <= target && target <= matrix[mid][m - 1])
         {
            start = mid;
            break;
        }
        if (matrix[mid][0] < target) 
        {
            start = mid + 1;
        } 
        else
         {
            end = mid - 1; 
        }
    }
    if(start>end) return false;
    int i = start; 
    start = 0, end = m - 1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (matrix[i][mid] == target) return true;
        if (matrix[i][mid] < target) 
        {
            start = mid + 1;
        } 
        else
         {
            end = mid - 1;
        }
    }
    return false;
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
           for(int j = 0; j<m ; j++) cin>>mat[i][j];
        get(target);
        if(searchMatrix(mat,target)==true)
        {
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
    }
    return 0;
}