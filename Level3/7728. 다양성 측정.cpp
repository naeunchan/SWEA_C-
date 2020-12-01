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
        int ans = 0;
        bool check[10] = {false, };
        
        cin >> s;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(!check[s[i] - '0'])
            {
                ans++;
                check[s[i] - '0'] = true;
            }
        }
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}