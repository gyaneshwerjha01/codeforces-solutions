// @Author: Gyaneshwer Jha
// @date: [CURRENT_DAY-Jul-2025]
// Competitive Programming Boilerplate

#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

// Type aliases
using lli = long long int;
using vi = vector<int>;
using vii = vector<lli>;
using vs = vector<string>;
template<typename T> using vv = vector<vector<T>>;
template<typename T1, typename T2> using vp = vector<pair<T1, T2>>;

// Macros
#define ln "\n"
#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr)
#define pb push_back
#define sz(x) static_cast<int>((x).size())
#define All(x) (x).begin(), (x).end()
#define scanv(x) for(auto &i: x) cin >> i
#define printv(v) for(auto i: v) cout << i << ' '; cout << ln
#define maxE(a) (*max_element(All(a)))
#define minE(a) (*min_element(All(a)))
#define bug(x) cout << (#x) << ": " << (x) << ln

// Constants
const lli MOD = 1e9 + 7;
const lli INF = LLONG_MAX;
const double PI = acos(-1.0L);

void solve(int n, vi v) {
    bool get = false;
    int sum = accumulate(v.begin(), v.end(), 0);
    for(int i = 0; i < n; i++){
        int remain = sum - v[i];
        if(remain % 2 == 0 && v[i] % 2 == 0){
            get = true;
            cout<<"YES"<<endl;
            return;
        }
        else if(remain % 2 != 0 && v[i] % 2 != 0){
            get = true;
            cout<<"YES"<<endl;
            return;
        }
    }

    if(!get){
        cout<<"NO"<<endl;
        return;
    }
}

int main() {
    stop_sync;
    untie_ios;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vi v(n);
        scanv(v);

        solve(n, v);
    }
    return 0;
}