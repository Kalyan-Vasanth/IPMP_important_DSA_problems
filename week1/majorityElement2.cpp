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
 
const int N1 = 1e5 + 1;
const int N2 = 1e7 + 1;
const int MOD = 1e9 + 7;
 
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
int mod_exp(int base, int exp, int mod = MOD)
{
    int res = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}
vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums;
        if(n==2)
        {
            vector<int> ans;
            if(nums[0]==nums[1]) {
                ans.push_back(nums[0]);
                return ans;
            }
            return nums;       
        }
        vector<int> ans;
        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        int c1 = 0 , c2 = 0;
        for(int i =0 ; i<n ;i++)
        {
            if(c1==0 && nums[i]!=ele2)
            {
                c1 = 1;
                ele1 = nums[i];
            }
            else if (c2 == 0 && nums[i]!=ele1)
            {
                c2 = 1;
                ele2 = nums[i];
            }
            else if(nums[i]==ele1) c1++;
            else if(nums[i]==ele2) c2++;
            else 
            {
                c1--;
                c2--;
            }
        }
        int a=0,b=0;
        for(int i = 0 ; i<n ;i++)
        {
            if(nums[i]==ele1) a++;
            else if(nums[i]==ele2) b++;
        }
        int req = (int)n/3 + 1;
        if(a>=req) ans.push_back(ele1);
        if(b>=req) ans.push_back(ele2);
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
        vector<int> arr(n);
        read(arr);
        vector<int> ans = majorityElement(arr);
        print(ans);
    }
    return 0;
}