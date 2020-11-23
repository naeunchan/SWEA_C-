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
        int N, M, high = 0, people = 0;
        
        cin >> N >> M;
        
        vector<vector<int>> v(N, vector<int>(M + 1, 0));
        
        for(int i = 0; i < N; i++)
        {
            int count = 0;
            for(int j = 0; j < M; j++)
            {
                cin >> v[i][j];
                
                if(v[i][j])
                	v[i][M]++;
            }
            high = max(v[i][M], high);
        }
        
        for(int i = 0; i < N; i++)
        {
            if(v[i][M] == high)
                people++;
        }
        
        cout << "#" << tc << " " << people << " " << high << endl;
    }
    return 0;
}