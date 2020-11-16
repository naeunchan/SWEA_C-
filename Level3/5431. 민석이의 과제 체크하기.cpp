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
        int N, K;
        vector<bool> check(101, false);
        
        cin >> N >> K;
        
        for(int i = 0; i < K; i++)
        {
            int tmp;
            cin >> tmp;
            check[tmp] = true;
        }
        
        cout << "#" << tc << " ";
        for(int i = 1; i <= N; i++)
        {
            if(!check[i])
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}