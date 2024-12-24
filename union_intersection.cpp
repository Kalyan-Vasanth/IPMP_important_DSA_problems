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

void uni(vector<int>&v1, vector<int>&v2) {
    set<int> s;
    for(auto nums: v1) s.insert(nums);
    for(auto nums: v2) s.insert(nums);
    if(s.size()==0) cout<<"No union elements ";
    else for(auto nums: s) cout << nums << " ";
    cout << endl;
}

void intersection(vector<int>& nums1, vector<int>& nums2) {
    //sort(nums1.begin(), nums1.end());
    //sort(nums2.begin(), nums2.end());
    vector<int> ans;
    int i = 0, j = 0;
    while(i < nums1.size() && j < nums2.size()) {
        if(nums1[i] < nums2[j]) {
            i++;
        } else if(nums1[i] > nums2[j]) {
            j++;
        } else {
            if(ans.empty() || ans.back() != nums1[i]) {
                ans.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }
    if(ans.size()==0) cout<<"No common elements ";
    else for(auto nums: ans) cout << nums << " ";
    cout << endl;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int i = 0; i < n; i++) cin >> v1[i];
    int m;
    cin >> m;
    vector<int> v2(m);
    for(int i = 0; i < m; i++) cin >> v2[i];
    uni(v1, v2);
    intersection(v1, v2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
