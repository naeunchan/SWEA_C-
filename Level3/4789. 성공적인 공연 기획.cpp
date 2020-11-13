#include <iostream>
#include <string>

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
        string s;
        int sum = 0, ans = 0;
        
        cin >> s;
        
        for(int i = 0; i < s.size(); i++)
        {
            int num = s[i] - '0';
            
            if(num > 0)
            {
                if(sum >= i)
                    sum += num;
                else
                {
                    ans += (i - sum);
                    sum = i + num;
                }
            }
        }
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}