#include <bits/stdc++.h>

 /*
# floor
. wall
um quarto é separado por duas paredes
 */
using namespace std;    
vector <int> adj [1000];
int visited[1000];

void dfs(int s){
    if(visited[s]) return;
    visited[s] = true;

    for(auto u: adj[s]){
        dfs(u);
    }
}

int main(){
    int nodes, edges, a,b;
    cin >> nodes >> edges;

    for (int i = 1; i <= nodes; i++){
        cin >> a>>  b;
        adj[a].push_back(b);
        adj[b].push_back(a);        
    }

    int cc = 0;

    for(int i = 1; i < nodes;i++){
        if(!visited[i]){
            dfs(i);
            cc++;
    }

    cout << cc;


    return  0;  
}