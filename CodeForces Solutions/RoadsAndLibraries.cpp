Problem Link: https://www.hackerrank.com/challenges/torque-and-development/submissions/code/159101288
Handle: https://www.hackerrank.com/fawadmirza32?hr_r=1

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define ll long long
int main(){
    int q;
    cin >> q;
    while(q--){
        int n,m,c_lib,c_road;
        cin >> n >> m >> c_lib >> c_road;
        vector<int> v[n];
        for(int i=0;i<m;i++){
            int v1,v2;
            cin >> v1 >> v2;
            v1--; v2--;
            v[v1].push_back(v2);
            v[v2].push_back(v1);
        }
        vector<bool> visited(n,false);
        int cc = 0;
        ll ans = 0;
        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            cc++;
            queue<int> q;
            q.push(i);
            visited[i] = true;
            int len = 0;
            while(!q.empty()){
                int s = q.front();
                q.pop();
                len++;
                for(auto x : v[s]){
                    if(!visited[x]){
                        visited[x] = true;
                        q.push(x);
                    }
                }
            }
            if(c_lib<=c_road) ans += len*c_lib;
            else ans += (len - 1)*c_road + c_lib;
        }
        cout << ans << "\n";
    }
}
