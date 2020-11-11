#include <iostream>

using namespace std;

int ans;
int N, M;
bool graph[11][11];
bool visited[11];

void dfs(int start, int current)
{
    if(ans < current)
        ans = current;
    
    for(int i = 1; i <= N; i++)
    {
        if(graph[start][i] && !visited[i])
        {
            visited[i] = true;
            dfs(i, current + 1);
            visited[i] = false;
        }
    }
}

int main(void)
{
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
        int x, y;
        cin >> N >> M;
        
        ans = 1;
        for(int j = 0; j <= N; j++)
        {
            visited[j] = false;
            for(int k = 0; k <= N; k++)
                graph[j][k] = false;
        }

        for(int j = 0; j < M; j++)
        {
            cin >> x >> y;
            graph[x][y] = true;
            graph[y][x] = true;
        }

        for(int j = 1; j <= N; j++)
        {
            visited[j] = true;
            dfs(j, 1);
            visited[j] = false;
        }
        
        cout << "#" << i << " " << ans << endl;
    }
    return 0;
}  