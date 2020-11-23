#include <iostream>
#include <vector>
#include <algorithm>

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
        int N, M, high = 0;
        vector<int> v(40, 0);
        
        cin >> N >> M;
        
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= M; j++)
                v[i + j]++;
        }
        
        high = *max_element(v.begin(), v.end());
        
        cout << "#" << tc << " ";
        for(int i = 2; i <= 40; i++)
        {
            if(v[i] == high)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}