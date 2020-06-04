# include <bits/stdc++.h>
using namespace std;
 
int vis[2005];
int dis[2005];
 
int bfs(int source, vector <int> g[]){
    int max_dis = 1;
    vis[source] = 1;
    dis[source] = 1;
    queue <int> q;
    q.push(source);
 
    while(!q.empty()){
        int u = q.front();
        q.pop();
        int len = g[u].size();
        for(int i = 0; i < len; i++){
            int v = g[u][i];
            if(vis[v] == -1){
                q.push(v);
                vis[v] = 1;
                dis[v] = dis[u] + 1;
                max_dis = max(max_dis, dis[v]);
            }
        }
    }
    return max_dis;
}
 
int main(){
 
    int n, ans = 1;
    int imme[2005];
    vector <int> g[2005];
 
    scanf("%d", &n);
 
    for(int i = 1; i <= n; i++){
        scanf("%d", &imme[i]);
        if(imme[i] != -1){
            g[imme[i]].push_back(i);
        }
    }
 
    memset(vis, -1, sizeof(vis));
    memset(dis, -1, sizeof(dis));
 
    for(int i = 1; i <= n; i++){
        if(imme[i] == -1){
            ans = max(ans, bfs(i, g));
        }
    }
 
    printf("%d\n", ans);
 
    return 0;
}
