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
        int n, m, ans = 0;
        vector<pair<string, int>> v;
        vector<string> user;
        
        cin >> n >> m;
        
        for(int i = 0; i < n; i++)
        {
            string s;
            int money;
            cin >> s >> money;
            v.push_back(make_pair(s, money));
        }
        
        for(int i = 0; i < m; i++)
        {
            string s;
            cin >> s;
            user.push_back(s);
        }
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                bool check = false;
                for(int k = 0; k < 8; k++)
                {
                    if(v[j].first[k] == '*')
                       continue;
                    if(user[i][k] == v[j].first[k])
                        check = true;
                    else
                    {
                        check = false;
                        break;
                    }
                }
                if(check)
                    ans += v[j].second;
            }
        }
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}