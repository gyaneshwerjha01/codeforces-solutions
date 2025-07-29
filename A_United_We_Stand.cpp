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

// void solve() {
//     // Add problem-specific logic here
// }

int main() {
    stop_sync;
    untie_ios;

    int t;
    cin >> t;
    // cout<<t<<endl;
    while (t > 0) {
        int n;
        cin>>n;
        vi a(n);
        scanv(a);

        unordered_map<int, int> mp;
        for(int x: a){
            mp[x] += 1;
        }
        if(mp.size() < 2){
            cout<<"-1"<<endl;
            t--;
            continue;
        }

        sort(a.begin(), a.end());
        int occur = mp[a[0]];

        vi b;
        for(int i=0; i<occur; i++){
            b.push_back(a[0]);
        }

        vi c;
        for(int i = 0; i < n; i++){
            if(a[i] != a[0]){
                c.push_back(a[i]);
            }
        }

        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i = 0; i < b.size(); i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(int j = 0; j < c.size(); j++){
            cout<<c[j]<<" ";
        }
        cout<<endl;

        t--;
    }
    return 0;
}