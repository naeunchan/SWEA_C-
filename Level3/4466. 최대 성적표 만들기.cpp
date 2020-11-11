#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool desc(int a, int b)
{
    return a > b;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        vector<int> v;
        int ans = 0, N, K;
        
        cin >> N >> K;
        
        for(int i = 0; i < N; i++)
        {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        
        sort(v.begin(), v.end(), desc);
        
        for(int i = 0; i < K; i++)
            ans += v[i];
        
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}