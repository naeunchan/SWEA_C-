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
        int N, ans = 0, start = 1;
        cin >> N;
        
        while(start <= N)
        {
            int tmp = 0;
            
            for(int i = start; i <= N; i++)
            {
                tmp += i;
                if(tmp == N)
                    ans++;
                else if(tmp > N)
                    break;
            }
            start++;
        }
        
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}