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
// function to find all possible subarrays having less than k distinct integers 
    int helper(vector<int>&nums,int k)
    {
        int l=0,r=0,ans=0;
        int n = nums.size();
        unordered_map<int,int> myMap;
        while(r<n)
        {
            myMap[nums[r]]++;
            if(myMap.size()>k)
            {
                while(myMap.size()>k) // decrease the length of subarray
                {
                    myMap[nums[l]]--;
                    if(myMap[nums[l]]==0) myMap.erase(nums[l]);
                    l++;
                }
            }
            r++;
            ans+=r-l; // add every possible answer
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);
        //the limit is 1 <= nums[i], k <= nums.length so we can directly use a array
        //rather than hashmap
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
        cout<<subarraysWithKDistinct(arr,target)<<endl;
     }
     return 0;
}
