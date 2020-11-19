#include <iostream>
#include <cstdio>

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
        double p, x, ans = 0;
        
        cin >> N;
        
        for(int i = 0; i < N; i++)
        {
            cin >> p >> x;
            ans += (p * x);
        }
        
        printf("#%d %f\n", tc, ans);
    }
    return 0;
}