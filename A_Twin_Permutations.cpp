// @Author: Gyaneshwer Jha
// @date: [04-Aug-2025]
// Competitive Programming Boilerplate

#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

// Type aliases

// Macros

// Constants

void solve() {
    // Add problem-specific logic here
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }

        vector<int>ans(n);
        for(int i = 0; i < n; i++){
            ans[i] = n - v[i] + 1;
        }

        for(int i = 0; i < n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        // solve();
    }
    return 0;
}