#include <iostream>
#include <cmath>

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
        unsigned long long num, ans = 0;
        
        cin >> num;
        
        for(unsigned long long i = 1; i * i * i <= num; i++)
        {
            if(i * i * i == num)
            {
                ans = i;
                break;
            }
        }
        
        cout << "#" << tc << " ";
        
        if(ans == 0)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}