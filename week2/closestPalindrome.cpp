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
#define pb push_back
const int N2 = 1e7 + 1;
const int MOD = 1e9 + 7; 
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
long f(long firstHalf,bool isEven) // a function to caluculate the mirror image 
    {
        long resultNum = firstHalf;
        if(isEven==false) firstHalf/=10; 
        //if the length is even ignore middle
        while(firstHalf>0)
        {
            int digit = firstHalf % 10;
            resultNum = (resultNum*10)+digit;
            firstHalf /= 10;
        }
        return resultNum;
    }
    void nearestPalindromic(string s) {
        int n = s.size();
        int r; //for finding the middle element
        r = n%2==0? n/2 : n/2+1;
        long firstHalf = stol(s.substr(0,r)); //a function to 
        //caluculate the value of first half
        vector<long> possibleResults; 
        possibleResults.pb(f(firstHalf,n%2==0)); //take firstHalf
        possibleResults.pb(f(firstHalf+1,n%2==0)); //take firstHalf+1
        possibleResults.pb(f(firstHalf-1,n%2==0));
        possibleResults.pb((long)pow(10,n-1)-1); //for cases like 100...1
        possibleResults.pb((long)pow(10,n)+1); //for cases like 999
        long diff = LONG_MAX;
        long result = INT_MAX;
        long og = stol(s);
        for(long num : possibleResults) //traverse through the array and find the answer
        {
            if(num==og) continue;
            if(abs(num-og)<diff)
            {
                diff = abs(num-og);
                result = num;
            }
            else if(abs(num-og)==diff) result = min(result,num);
        }
        cout<<result<<endl;
    }
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    get(t);
    for (int i = 0; i < t; i++)
    {
        string s;
        cin>>s; //input string
        nearestPalindromic(s);
    }
    return 0;
}