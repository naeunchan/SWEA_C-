#include <iostream>
#include <vector>
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
        int N, ans = 0;
        vector<bool> v(100, false);
        
        cin >> N;
        
        for(int i = 0; i < N; i++)
        {
            string s;
            
            cin >> s;
            v[s[0] - 'A'] = true;
        }
        
        if(v[0])
            ans++;
        
        for(int i = 1; i < 26; i++)
        {
            if(v[i - 1] && v[i])
                ans++;
            else
                v[i] = false;
        }
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}