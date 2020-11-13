#include <iostream>

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
        int N, L;
        int dp[21][10001];
        int w[21], v[21];
        
        cin >> N >> L;
        
        for(int i = 1; i <= N; i++)
            cin >> v[i] >> w[i];
        
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= L; j++)
            {
                if(w[i] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = v[i] + dp[i - 1][j - w[i]] > dp[i -1][j] ? v[i] + dp[i - 1][j - w[i]] : dp[i -1][j];
            }
        }
        cout << "#" << tc << " " << dp[N][L] << endl;
    }
    return 0;
}