#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long totSum = 0;
        long long couponSum = x; // Start with the cost of the coupon
        
        for (int i = 0; i < n; i++) {
            totSum += a[i];
            if (a[i] > y) {
                couponSum += (a[i] - y);
            }
        }
        
        if (couponSum < totSum) {
            cout << "COUPON" << endl;
        } else {
            cout << "NO COUPON" << endl;
        }
    }
    return 0;
}