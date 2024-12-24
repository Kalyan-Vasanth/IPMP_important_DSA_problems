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
 int getOddOccurrence(vector<int> &arr, int n) {
        // code here
        int res = 0;
        for(int i = 0 ; i<n ;i++)
           res^=arr[i];
        return res;
    }
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
     vector<int> arr(n);
        for(int i = 0 ; i<n ; i++) cin>>arr[i];
        int b = getOddOccurrence(arr,n);
        cout<<b<<endl;
    }
}