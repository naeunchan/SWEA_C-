#include <iostream>
#include <vector>
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
        vector<int> v, ans;
        vector<bool> arr(301, false);
        
        for(int i = 0; i < 7; i++)
        {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        //sort(v.begin(), v.end(), greater<int>());
        
        for(int i = 0; i < 7; i++)
        {
            for(int j = i + 1; j < 7; j++)
            {
                for(int k = j + 1; k < 7; k++)
                {
                    int num = v[i] + v[j] + v[k];
                	if(!arr[num])
                    {
                        ans.push_back(num);
                        arr[num] = true;
                    }
                }
            }
        }
        sort(ans.begin(), ans.end(), greater<int>());
        
        cout << "#" << tc << " " << ans[4] << endl;
    }
    return 0;
}