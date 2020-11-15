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
        vector<string> v;
        int max = 0;
        string s, ans = "";
        
        for(int i = 0; i < 5; i++)
        {
            cin >> s;
            max = max < s.size() ? s.size() : max;
            v.push_back(s);
        }
        
        for(int col = 0; col < max; col++)
        {
         	for(int row = 0; row < 5; row++)
            {
                if(v[row].size() > col)
                	ans += v[row][col];
            }
        }
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}