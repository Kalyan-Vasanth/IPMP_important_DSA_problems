#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define yes          \
    cout << "YES\n"; \
    return; 
#define no          \
    cout << "NO\n"; \
    return;
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
int threeSumClosest(vector<int>& nums, int target) {
       int n = nums.size();
       int prevDiff = INT_MAX;
       sort(nums.begin(),nums.end());
       int ans ;
       for(int i = 0 ; i<n ;i++)
       {
           if(i!=0&&nums[i]==nums[i-1]) continue;
           int j = i+1;
           int k = n-1;
           while(j<k)
           {
               int sum = nums[i]+nums[j]+nums[k];
               if(abs(sum-target)<prevDiff)
               {
                  prevDiff = abs(sum-target);
                  ans = sum;
               }
               if(sum<target) j++;
               else if(sum>target) k--;
               else if(sum==target)
               {
                 return sum;
               }
           }
       }
       return ans;
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
        int a = threeSumClosest(arr,target);
        prt(a);
    }
    return 0;
}