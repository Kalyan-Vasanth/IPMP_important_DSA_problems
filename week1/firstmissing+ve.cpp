#pragma GCC optimize("O3,unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define inf (int)1e9
#define PI 3.141592653589793238462
#define print(x) cout<<x<<endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define all(x) x.begin(), x.end()
int firstMissingPositive(vector<int>& nums) 
{
        // the answer range will be in [1,n+1]
        int n = nums.size();
        //loop 1 to make numbers which are negative to 0
        for(int i = 0 ; i<n ;i++)
            if(nums[i]<0) nums[i]=0;
        //loop 2 to make if number is occured we will make nums-1 index value to neg
        for(int i = 0 ; i<n ; i++)
        {
            int a = abs(nums[i]);
            if(a-1>=0 && a-1<n) 
            {
                if(nums[a-1]>0)
                    nums[a-1]*=-1;
                //if it is equal to 0 then make it as out of bounds answer 
                else if(nums[a-1]==0) 
                   nums[a-1] = -1*(n+1);
            }
        }
        //loop 3 to check first negative occurence 
        for(int i =0 ; i<n ;i++)
        {
            if(nums[i]>=0) //a positive value indicates it is not visited 
                return i+1;
        }
        return n+1;
    }
int main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T;
     cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i =0 ; i<n ;i++) cin>>arr[i];
        int ans = firstMissingPositive(arr);
        cout<<ans<<endl;
    }
    return 0;
}