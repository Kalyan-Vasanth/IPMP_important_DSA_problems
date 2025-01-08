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
static bool customComp(pair<int,int> a , pair<int,int> b)
    {
        if(a.second!=b.second) return a.second<b.second;
        else return a.first>=b.first;
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> hash;
        for(int num: nums) hash[num]++;
        // we need to sort according to 2nd values of hash map
        vector<pair<int,int>> v;
        for(auto it : hash)
            v.push_back({it.first,it.second});
        sort(v.begin(),v.end(),customComp);
        vector<int> ans;
        for(auto it : v)
        {
            int x = it.first;
            int f = it.second;
            while(f--)
              ans.push_back(x);
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
        vi ans = frequencySort(arr);
        print(ans);
    }
    return 0;
}