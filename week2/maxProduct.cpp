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
 int maxProduct(vector<int>& nums) {
       int n = nums.size();
       if(n==1) return nums[0];
       int firstNeg = 1; // to maintain odd neg and even neg
       int res = INT_MIN;
       int prod = 1;
       //traverse throughh thhe array 
       for(int i = 0; i<n ;i++)
       {
           if(nums[i]==0)
           {
               firstNeg = 1;
               res = max(res,0); // if both sides are negatives this is best
               prod = 1;
               continue;
           }
           prod = prod * nums[i];
           if(prod<0)
           {
               if(firstNeg!=1) res = max(res,prod/firstNeg); //until that not found
               else firstNeg = prod; // already found a negative 
           }
           res = max(res,prod);
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
        prt(maxProduct(arr));
     }
     return 0;
}
