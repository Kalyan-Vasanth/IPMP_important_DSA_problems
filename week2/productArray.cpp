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
void productExceptSelf(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> product(n,0);
        int count = 0 ;
        ll totPro = 1;
        for(auto num: arr)
        {
            //2 zeros case
            if(num==0 && count==1)
            {
                 print(product);
                 return;
            }
            // 1 zero case
            else if(num==0 && count==0) count++;
            else totPro*=num;
        }
        if(count==1)
        {
            for(int i = 0 ; i<n ; i++)
            {
                if(arr[i]==0) {product[i]=(int)totPro;break;}
            }
            print(product);
            return;
        }
        for(int i = 0 ; i<n ; i++)
        {
            product[i] = (int)totPro/arr[i];
        }
        print(product);
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
        productExceptSelf(arr);
    }
    return 0;
}