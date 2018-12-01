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
//    freopen("C:\\CLionProjects\\Kattis Training\\Easy\\lastfactorialdigit\\lastfactorialdigit.in", "r", stdin);
//    freopen("C:\\CLionProjects\\Kattis Training\\Easy\\lastfactorialdigit\\lastfactorialdigit.out", "w", stdout);
//    freopen("C:\\CLionProjects\\Kattis Training\\Easy\\lastfactorialdigit\\lastfactorialdigit.err", "w", stderr);
    int noTcs;
    cin >> noTcs;
    for (int j = 0; j < noTcs; ++j) {
        int n;
        cin >> n;
//        cerr << "n = " << n << endl;
        int mod = 1;
        for (int i = 1; i <= n; ++i) {
            mod *= (i % 10);
            mod %= 10;
//            cerr << mod << endl;
        }
//        cerr << endl;
        cout << mod % 10 << endl;
    }
    return 0;
}


