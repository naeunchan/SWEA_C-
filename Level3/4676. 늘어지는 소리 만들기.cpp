#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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
        string s;
        int n, len, cnt = 0;
        vector<int> v;
        cin >> s;
        cin >> n;
        
        len = s.size();
        for(int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        
        for(int i = 0; i < n; i++)
        {
            if(v[i] == len)
                s += "-";
            else
                s.insert(v[i] + cnt++, "-");
        }
        cout << "#" << tc << " " << s << endl;
    }
    return 0;
}