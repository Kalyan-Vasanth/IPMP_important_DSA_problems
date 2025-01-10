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
void subarraySum(vector<int> &arr, int target) {
        // code here
        int l = 0 , r = 0;
        int n = arr.size();
        int sum = 0;
        vector<int> ans;
        while(r<n && l<n)
        {
            sum = sum+arr[r];
           while(sum>target && l<=r)
           {
               sum = sum-arr[l];
               l++;
           }
            if(sum==target)
            {
                ans.push_back(l+1);
                ans.push_back(r+1);
                print(ans);
                return ;
            }
            r++;
        }
        ans.push_back(-1);
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
        vi arr(n);
        read(arr);
        get(target);
        subarraySum(arr,target);
     }
     return 0;
}
