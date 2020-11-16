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
        int N, Q, L, R;
        
        cin >> N >> Q;
        
        vector<int> v(N, 0);
        
        for(int i = 1; i <= Q; i++)
        {
            cin >> L >> R;
            for(int j = L - 1; j < R; j++)
                v[j] = i;
        }
        
        cout << "#" << tc << " ";
        for(int i = 0; i < N; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}