#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        string s, ans = "";
        
        cin >> s;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                ans += s[i];
        }
        
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}