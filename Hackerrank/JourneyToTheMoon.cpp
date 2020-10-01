// https://www.hackerrank.com/challenges/journey-to-the-moon
#include <bits/stdc++.h>
#define deb(x) cout << #x << " --> " << x << endl;
#define print(x)                         \
    for (auto _x : x) cout << _x << " "; \
    cout << endl
#define pb push_back
typedef long long ll;
using namespace std;

// total number of countries using dfs
// result = TotalNoOfAstr.C.2 - summation (i=0..totalCountries) |countryStr(i)|.C.2

class Graph {
   private:
    map<int, list<int>> l;
    int vertices;

   public:
    Graph(int vertices) {
        this->vertices = vertices;
    }

    void addEdge(int u, int v) {
        l[u].pb(v);
        l[v].pb(u);
    }

    int dfsHelper(int src, map<int, bool> &visited, int &count) {
        // cout << src << " ";
        count++;
        visited[src] = true;

        for (auto nbr : l[src]) {
            if (!visited[nbr]) {
                dfsHelper(nbr, visited, count);
            }
        }
        return count;
    }

    vector<int> countTrees() {
        map<int, bool> visited;
        for (auto p : l) visited[p.first] = false;
        vector<int> count_vec;
        for (auto p : l) {
            if (!visited[p.first]) {
                int count = 0;
                count_vec.pb(dfsHelper(p.first, visited, count));
            }
        }
        return count_vec;
    }
};

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int vertices, pairs;
    cin >> vertices >> pairs;
    Graph graph(vertices);
    while (pairs--) {
        int x, y;
        cin >> x >> y;
        graph.addEdge(x, y);
    }

    vector<int> counts = graph.countTrees();

    // nC2 - (countryC2)-foreachcountry
    int result = (((vertices) * (vertices - 1)) / 2);
    for (auto count : counts) {
        result -= (((count) * (count - 1)) / 2);
    }

    cout << result << "\n";
}
