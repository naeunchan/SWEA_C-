#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        int x, y, N, M;
        int ans = 0;

        cin >> N >> M;
        
		vector<vector<bool>> v(51, vector<bool>(N + 1, false));
        
        for(int i = 0; i < M; i++)
        {
            cin >> x >> y;
            v[x][y] = true;
            v[y][x] = true;
        }
        
        for(int i = 1; i <= N; i++)
        {   
            for(int j = 1; j <= N; j++)
            {
                for(int k = 1; k <= N; k++)
                {
                    if(v[i][j] && v[j][k] && v[k][i])
                        ans++;
                }
            }
        }
        
        cout << "#" << tc << " " << ans / 6 << endl;
    }
    return 0;
}