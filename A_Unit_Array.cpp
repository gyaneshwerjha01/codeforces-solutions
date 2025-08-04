// @Author: Gyaneshwer Jha
// @date: [02-Aug-2025]
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

void solve() {
    // Add problem-specific logic here
}

int main() {
    stop_sync;
    untie_ios;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }

        unordered_map<int, int> mp;
        mp[-1] = 0;
        mp[1] = 0;
        for(int i = 0; i < n; i++){
            mp[v[i]]++;
        }
        
        int minus_one = mp[-1];
        int plus_one = mp[1];

        // cout<<minus_one<<" "<<plus_one<<endl;
        int operations = 0;
        if(plus_one < minus_one){
            int diff = minus_one - plus_one;
            operations += (((diff - 1) / 2) + 1);
            minus_one -= operations;
            if(minus_one % 2 == 0){
                cout<<operations<<endl;
            }
            else{
                cout<<operations + 1<<endl;
            }
        }
        else if(plus_one > minus_one || plus_one == minus_one){
            if(minus_one % 2 == 0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }


        // solve();
    }
    return 0;
}