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
        int N, ans = -1, current = 0;
        int v[1000];
        
        cin >> N;
        
        for(int i = 0; i < N; i++)
            cin >> v[i];
        
        for(int i = 0; i < N; i++)
        {
            for(int j = i + 1; j < N; j++)
            {
                bool check = true;
                int tmp = v[i] * v[j];
                
                if(ans < tmp)
                {
                    int num = tmp;
                    while(num)
                    {
                        if(num % 10 < (num / 10) % 10)
                        {
                            check = false;
                            break;
                        }
                        num /= 10;
                    }
                    
                    if(check)
                        ans = tmp;
                }
            }
        }
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}