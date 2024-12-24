#pragma GCC optimize("O3,unroll-loops")
 #include<bits/stdc++.h>
  using namespace std;
#define inf (int)1e9
#define PI 3.141592653589793238462
#define print(x) cout<<x<<endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define all(x) x.begin(), x.end()
void missing(vector<int>&arr,int n)
{
    int xor1=0,xor2=0;
    for(int i = 1 ; i<=n ; i++)
    {
        xor1^=i;
    }
    for(auto num: arr) xor2^=num;
    int ans = xor2^xor1;
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n-1);
        for(int i = 0 ; i<n-1 ; i++) cin>>arr[i];
        missing(arr,n);
    }
}