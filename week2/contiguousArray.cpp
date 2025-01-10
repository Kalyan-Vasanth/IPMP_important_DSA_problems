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
int findMaxLength(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) nums[i] = -1;
    }
    unordered_map<int, int> hash;
    int prefixSum = 0, ans = 0;
    hash[0] = -1;
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        if (hash.find(prefixSum) != hash.end()) {
            ans = max(ans, i - hash[prefixSum]);
        } else {
            hash[prefixSum] = i;
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
        cout<<findMaxLength(arr)<<endl;
    }
    return 0;
}