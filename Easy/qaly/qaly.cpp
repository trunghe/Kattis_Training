#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
//typedef vector<vi> vvi;
//typedef vector<ll> vl;
//typedef vector<vl> vvl;
//typedef vector<vvl> vvvl;
//typedef pair<int, int> ii;
//typedef vector<ii> vii;
//typedef vector<vii> vvii;

#define FOR(i, a, b) \
    for (int i = (a); i < (b); i++)
#define FORE(i, a, b) \
    for (int i = (a); i <= (b); i++)
//#define FORD(i, a, b) \
//    for (int i = (a); i >= (b); i--)

//#define INF 1e9+7
//#define INFLL 1e18+7
//#define esp 1e-9
//#define PI 3.14159265
//
//ll nMod = 1e9 + 7;

//inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
//inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};

int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie();
    freopen("C:\\CLionProjects\\Kattis Training\\Easy\\qaly\\qaly.in", "r", stdin);
    freopen("C:\\CLionProjects\\Kattis Training\\Easy\\qaly\\qaly.out", "w", stdout);
    freopen("C:\\CLionProjects\\Kattis Training\\Easy\\qaly\\qaly.err", "w", stderr);
    int n;
    cin >> n;
    long double sum = 0;
    for (int i = 0; i < n; ++i) {
        long double a, b;
        cin >> a >> b;
        sum += a * b;
    }
    cout << setprecision(3) << fixed << sum << endl;
    return 0;
}


