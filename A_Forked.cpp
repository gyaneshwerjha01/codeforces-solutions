// @Author: Gyaneshwer Jha
// @date: 10-Aug-2025

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
    long long a, b;
    cin >> a >> b;

    long long kingX, kingY;
    cin >> kingX >> kingY;

    long long queenX, queenY;
    cin >> queenX >> queenY;

    // Use a set to store unique knight positions that can attack the king
    set<pair<long long, long long>> king_attack_positions;

    long long dx[] = {a, a, -a, -a, b, b, -b, -b};
    long long dy[] = {b, -b, b, -b, a, -a, a, -a};

    for (int i = 0; i < 8; i++) {
        king_attack_positions.insert({kingX + dx[i], kingY + dy[i]});
    }



    
    // In the case where a != b, some queen moves might land on the same king-attacking square.
    // For example, from (queenX, queenY), a move of (+a,+b) could land on the same spot as a move of (+b,+a).
    // The previous loop would count this twice. To fix this, we need to consider only unique
    // positions from which the queen can be attacked.

    set<pair<long long, long long>> queen_attack_positions;
    for(int i = 0; i < 8; ++i) {
        queen_attack_positions.insert({queenX + dx[i], queenY + dy[i]});
    }

    int final_count = 0;
    for(auto const& pos : queen_attack_positions) {
        if(king_attack_positions.count(pos)) {
            final_count++;
        }
    }

    cout << final_count << endl;
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