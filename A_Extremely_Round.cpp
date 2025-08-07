// @Author: Gyaneshwer Jha
// @date: 06-Aug-2025

#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

// Fast I/O
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Type aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using mii = map<int, int>;
using mll = map<ll, ll>;

// Macros
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (a)-1; i >= (b); --i)
#define res(v, n) v.resize(n)

// Input/Output Macros
#define vin(v, n) vi v(n); FOR(i, 0, n) cin >> v[i];
#define vout(v) FOR(i, 0, sz(v)) { cout << v[i] << (i == sz(v) - 1 ? "" : " "); } cout << "\n";

// Constants
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ld PI = acos(-1.0);
const int MAXN = 1e5 + 5; // Adjust as needed

// ---

void solve() {
    string s;
    cin>>s;

    ll k = s.size();

    ll ans = 9 * (k - 1) + s[0] - '0';
    cout<<ans<<endl;
    
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}