#include <iostream>
#include <vector>

using namespace std;
int ans = 0;
bool visited[10][10] = {false, };

void dfs(int, int, int, int);
bool isTrue(int, int, int);

void dfs(int n, int row, int col, int queen)
{
    if(queen == n)
    {
        ans++;
        return;
    }
    
    for(int j = 0; j < n; j++)
    {
        if(isTrue(n, row, j))
        {
            visited[row][j] = true;
            dfs(n, row + 1, j, queen + 1);
            visited[row][j] = false;
        }
    }
}

bool isTrue(int n, int row, int col)
{
    //가로
    for(int i = 0; i < n; i++)
    {
        if(visited[row][i] == true)
            return false;
    }
    
    //세로
    for(int i = 0; i < n; i++)
    {
        if(visited[i][col] == true)
            return false;
    }
    
    //우측 상방 대각
    for(int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if(visited[i][j] == true)
            return false;
    }
    
    //우측 하방 대각
    for(int i = row, j = col; i < n && j < n; i++, j++)
    {
        if(visited[i][j] == true)
            return false;
    }
    
    //좌측 상방 대각
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if(visited[i][j] == true)
            return false;
    }
    
    //좌측 하방 대각
    for(int i = row, j = col; i < n && j >= 0; i++, j--)
    {
        if(visited[i][j] == true)
            return false;
    }
    return true;
}

int main(void)
{
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        
        for(int j = 0; j < n; j++)
            for(int k = 0; k < n; k++)
                visited[j][k] = false;
        
        ans = 0;
        dfs(n, 0, 0, 0);
        
        cout << "#" << i << " " << ans << endl;
    }
    return 0;
}