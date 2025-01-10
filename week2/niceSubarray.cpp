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
int helper(vector<int>&nums,int k)
    {
        if(k==-1) return 0;
        //a function to caluculate number of subarrays with length less than or equal to k
        int l = 0 , r = 0;
        int count = 0,ans = 0;
        int n = nums.size();
        while(r<n)
        {
            if(nums[r]%2 == 1) count++;
            if(count>k)
            {
                while(count>k)
                {
                    if(nums[l]%2==1) count--;
                    l++;
                }
            }
            ans+=r-l+1;
            r++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
       return helper(nums,k)-helper(nums,k-1);
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
        cout<<numberOfSubarrays(arr,target)<<endl;
     }
     return 0;
}
