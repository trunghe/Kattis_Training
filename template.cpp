//
// Created by T on 12/1/2018#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//typedef vector<int> vi;
////typedef vector<vi> vvi;
////typedef vector<ll> vl;
////typedef vector<vl> vvl;
////typedef vector<vvl> vvvl;
////typedef pair<int, int> ii;
////typedef vector<ii> vii;
////typedef vector<vii> vvii;
//
//#define FOR(i, a, b) \
//    for (int i = (a); i < (b); i++)
//#define FORE(i, a, b) \
//    for (int i = (a); i <= (b); i++)
////#define FORD(i, a, b) \
////    for (int i = (a); i >= (b); i--)
//
////#define INF 1e9+7
////#define INFLL 1e18+7
////#define esp 1e-9
////#define PI 3.14159265
////
////ll nMod = 1e9 + 7;
//
////inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
////inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};
//
//ll max(ll a1, ll b1) {
//    return a1 > b1 ? a1 : b1;
//}
//
////ll maxSum1D(vl arr1D) {
////    ll dp = arr1D[0];
////    ll max1D = dp;
////    FOR(i, 1, arr1D.size()) {
////        dp = max(arr1D[i], dp + arr1D[i]);
////        max1D = max(max1D, dp);
////    }
////    return max1D;
////}
//
////vl addArr1D(vl arr1, vl arr2) {
////    int size = arr1.size();
////    FOR(i, 0, size) {
////        arr1[i] += arr2[i];
////    }
////    return arr1;
////}
//
////ll maxSum2D(vvl arr2D) {
////    ll dp = maxSum1D(arr2D[0]);
////    ll max2D = dp;
////    FOR(i, 1, arr2D.size()) {
////        vl tempArr = arr2D[i];
////        dp = maxSum1D(tempArr);
////        FORD(j, i - 1, 0) {
////            tempArr = addArr1D(tempArr, arr2D[j]);
////            dp = max(dp, maxSum1D(tempArr));
////        }
////        max2D = max(max2D, dp);
////    }
////    return max2D;
////}
//
////vvl addArr2D(vvl arr1, vvl arr2) {
////    int size = arr1.size();
////    FOR(i, 0, size) {
////        arr1[i] = addArr1D(arr1[i], arr2[i]);
////    }
////    return arr1;
////}
//
////ll maxSum3D(vvvl arr3D) {
////    ll dp = maxSum2D(arr3D[0]);
////    ll max3D = dp;
////    FOR(i, 1, arr3D.size()) {
////        vvl tempArr = arr3D[i];
////        dp = maxSum2D(tempArr);
////        FORD(j, i - 1, 0) {
////            tempArr = addArr2D(tempArr, arr3D[j]);
////            dp = max(dp, maxSum2D(tempArr));
////        }
////        max3D = max(max3D, dp);
////    }
////    return max3D;
////}
//
//// function to find the divisors in order
//list<int> getDivisors(int n) {
//    // Lists to store halves of the divisors
//    list<int> firstHalf;
//    list<int> secondHalf;
//    int sqrtN = sqrt(n);
//    FORE(i, 1, sqrtN) {
//        if (n % i == 0) {
//            firstHalf.emplace_back(i);
//            int nOverI = n / i;
//            if (nOverI != i) // check if divisors are NOT equal
//            {
//                // push the second divisor in the second half
//                secondHalf.emplace_front(nOverI);
//            }
//        }
//    }
//    firstHalf.merge(secondHalf);
//    return firstHalf;
//}
//
////// Time complexity : O(ElogV)
////#include <bits/stdc++.h>
////using namespace std;
////
////typedef vector<int> vi;
////typedef pair<int,int> pii;
////typedef vector< pii > vii;
////#define INF 0x3f3f3f3f
////
////vii *G;   // Graph
////vi Dist;  // for storing the distance of every other node from source.
/////*==========================================*/
////void Dijkstra(int source, int N) {
////    priority_queue<pii, vector<pii>, greater<pii> > Q;   // min heap
////    Dist.assign(N,INF);
////    Dist[source] = 0;
////    Q.push({0,source});
////    while(!Q.empty()){
////        int u = Q.top().second;
////        Q.pop();
////        for(auto &c : G[u]){
////            int v = c.first;
////            int w = c.second;
////            if(Dist[v] > Dist[u]+w){
////                Dist[v] = Dist[u]+w;
////                Q.push({Dist[v],v});
////            }
////        }
////    }
////}
/////*===========================================*/
////int main() {
////    int N, M, u, v, w, source;  // N-total no of nodes, M-no. of edges,
////    cin >> N >> M;              // u,v and w are the end vertices and the weight associated with an edge
////    G = new vii[N+1];
////
////    for(int i=0;i<M;++i){
////        cin >> u >> v >> w;
////        G[u].push_back({v,w});
////        G[v].push_back({u,w});
////    }
////    cin >> source;
////    Dijkstra(source,N);
////
////    for(int i=0;i<N;i++)
////        cout<<Dist[i]<<" ";
////    cout<<endl;
////
////    return 0;
////}
//
//struct edge {
//    int to, length;
//};
//
//int dijkstra(const vector<vector<edge> > &graph, int source, int target) {
//    vector<int> min_distance(graph.size(), INT_MAX);
//    min_distance[source] = 0;
//    set<pair<int, int> > active_vertices;
//    active_vertices.insert({0, source});
//
//    while (!active_vertices.empty()) {
//        int where = active_vertices.begin()->second;
//        if (where == target) {
//            return min_distance[where];
//        }
//        active_vertices.erase(active_vertices.begin());
//        for (auto ed : graph[where])
//            if (min_distance[ed.to] > min_distance[where] + ed.length) {
//                active_vertices.erase({min_distance[ed.to], ed.to});
//                min_distance[ed.to] = min_distance[where] + ed.length;
//                active_vertices.insert({min_distance[ed.to], ed.to});
//            }
//    }
//    return INT_MAX;
//}
//
//int main() {
////    ios_base::sync_with_stdio(false);
////    cin.tie();
////    freopen("input.txt", "r", stdin);
////    freopen("output.txt", "w", stdout);
////    freopen("error.txt", "w", stderr);
//    list<int> div = getDivisors(100);
//    for (int d : div) {
//        cout << d << ' ';
//    }
//    cout << endl;
//
//    return 0;
//}
//

