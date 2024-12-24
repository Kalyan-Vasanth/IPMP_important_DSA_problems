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
void repeat2(vector<int>&arr,int n)
{
    //we know array has maximum 2 negative elements 
    // so we will keep negative values and as all are =ve given
    for(int i = 0 ;i<n+2 ; i++)
    {
        if(arr[abs(arr[i])]<0)
        {
            cout<<abs(arr[i])<<" ";
        }
        else 
        {
            arr[abs(arr[i])] = arr[abs(arr[i])]*-1;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n+2);
        for(int i = 0 ; i<n+2 ;i++) cin>>arr[i];
        repeat2(arr,n);
    }
}