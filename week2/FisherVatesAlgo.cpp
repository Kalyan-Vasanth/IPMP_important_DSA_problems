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
void swap (int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
// A function to generate a random permutation
void randomize (vi &arr, int n) 
{ 
    // Use a different seed value so that 
    // we don't get same result each time
    // we run this program 
    srand (time(NULL)); 
    // Start from the last element and swap 
    // one by one. We don't need to run for 
    // the first element that's why i > 0 
    for (int i = n - 1; i > 0; i--) 
    { 
        // Pick a random index from 0 to i 
        int j = rand() % (i + 1); 
        // Swap arr[i] with the element 
        // at random index 
        swap(&arr[i], &arr[j]); 
    } 
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
        randomize(arr,n);
        print(arr);
    }
    return 0;
}