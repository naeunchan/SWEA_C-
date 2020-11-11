#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

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
        int N, M, ans = 0;
        vector<string> v1, v2;
        string s;
            
        cin >> N >> M;
        
        for(int i = 0; i < N; i++)
        {
            cin >> s;
            v1.push_back(s);
        }
        
        for(int i = 0; i < M; i++)
        {
            cin >> s;
            v2.push_back(s);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        auto itr1 = v1.begin();
        auto itr2 = v2.begin();
        
        while(itr1 != v1.end() && itr2 != v2.end())
        {
            if(*itr1 == *itr2)
            {
                ans++;
                itr1++;
                itr2++;
            }
            else if(*itr1 < *itr2)
                itr1++;
            else if(*itr1 > *itr2)
                itr2++;
        }
       
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}