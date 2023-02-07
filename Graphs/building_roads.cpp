#include<bits/stdc++.h>

using namespace std;

bool visited[100001];
vector<int> adj[100001];

void dfs(int s)
{
   if (visited[s])
      return;
   visited[s] = true;

   for (int u : adj[s])
   {
      dfs(u);
   }
}

int main()
{
   int cities, roads, a, b;
   vector<int> new_roads;

   cin >> cities >> roads;

   // Construindo lista
   for (int i = 1; i <= roads; i++)
   {
      cin >> a >> b;
      adj[a].push_back(b);
      adj[b].push_back(a);
   }
   // Contar os componentes conectados.
   for (int i = 1; i <= cities; i++)
   {
      if (!visited[i])
      {
         dfs(i);
         new_roads.push_back(i); // Adiciona as ultimas ruas de cada componente
      }
   }

   //A quantidade de componentes conectados - 1 é a quantidade de ruas q precisam ser feitas

   cout << new_roads.size() - 1 << endl;
   for (int i = 1; i < new_roads.size(); i++)
   {
      cout << new_roads[i - 1] << " " << new_roads[i] << endl;
   }

   return 0;
}