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
        int N;
        long long ans = 0;
        string x;
        
        cin >> N >> x;
        
        for(int i = 0; i < x.size(); i++)
            ans += (x[i] - '0') % (N - 1);
        
        printf("#%d %lld\n", tc, ans % (N - 1));
    }
    return 0;
}