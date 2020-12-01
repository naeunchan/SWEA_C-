#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        string s;
        long long ans = 1;
        
        cin >> s;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(i == 0)
            {
                if(s[i] != s[i + 1])
                    ans = (ans * 2) % (long long)(1e9 + 7);
            }
            else if(i == s.size() - 1)
            {
                if(s[i] != s[i - 1])
                    ans = (ans * 2) % (long long)(1e9 + 7);
            }
            else
            {
                if(s[i - 1] == s[i] && s[i] == s[i + 1])
                    continue;
                else if((s[i - 1] == s[i] && s[i] != s[i + 1]) || (s[i + 1] == s[i] && s[i - 1] != s[i]) || (s[i - 1] == s[i + 1] && s[i] != s[i + 1]))
                    ans = (ans * 2) % (long long)(1e9 + 7);
                else
                    ans = (ans * 3) % (long long)(1e9 + 7);
            }
        }
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}