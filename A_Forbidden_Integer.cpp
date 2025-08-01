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

void solve() {
    // Add problem-specific logic here
}

int main() {
    stop_sync;
    untie_ios;

    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin>>n>>k>>x;

        if(x != 1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i = 0; i < n; i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if(x == 1){
            if(k == 1){
                cout<<"NO"<<endl;
            }
            else if(k == 2){
                if(n % 2 != 0){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i = 0; i < n / 2; i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k >= 3){ // When x = 1 and k >= 3
                cout<<"YES"<<endl; // It's always possible
                if(n % 2 != 0){ // If n is odd
                    // Use one '3' and the rest '2's
                    cout << (n - 3) / 2 + 1 << endl; // Total count: (n-3)/2 for 2s + 1 for 3
                    for(int i = 0; i < (n - 3) / 2; i++){
                        cout<<2<<" ";
                    }
                    cout<<3<<endl; // Print the '3' last
                }
                else{ // If n is even
                    // Use only '2's
                    cout<<n/2<<endl;
                    for(int i = 0; i < n / 2; i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
            }
        }
        solve();
    }
    return 0;
}