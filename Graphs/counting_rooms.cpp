#include <bits/stdc++.h>
 
using namespace std;  


 /*
# floor
. wall
um quarto é separado por duas paredes
 */

/*
void dfs(int s){
    if(visited[s]) return;
    visited[s] = true;

    for(auto u: adj[s]){
        dfs(u);
    }
}
*/

bool visited[1001][1001];
char adj[1001][1001];
int n, m;

bool isValid(int x , int y)
{
	if(x < 1 || x > n || y < 1 || y > m) return false;
	
	
	return true;
}

void dfs(int x, int y){
    if(visited[x][y] || adj[x][y] == '#') return;
    visited[x][y] = true;
	if(isValid(x-1 , y)) //up
	dfs(x-1 , y);
	
	if(isValid(x , y + 1)) //right
	dfs(x , y + 1);
	
	if(isValid(x + 1 , y)) //down
	dfs(x + 1 , y);
	
	if(isValid(x , y-1)) //left
	dfs(x , y - 1);
}


int main(){
    cin >> n >> m;

    for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		cin>>adj[i][j];
	}
	
	int cnt = 0;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		if(adj[i][j] == '.' && visited[i][j] == false)

		dfs(i , j) , cnt++;
	}
    cout << cnt << endl;
        return 0;
    }

