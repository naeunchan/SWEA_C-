#include <iostream>
#include <vector>

using namespace std;
vector<bool> check(1000000001, false);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        int N, num, ans = 0, max;
        vector<int> v;
        
        cin >> N;
        num = N - 1;
        
        for(int i = 0; i < N; i++)
        {
            int tmp;
            cin >> tmp;
            check[tmp] = true;
            v.push_back(tmp - 1);
        }
        max = v.back() + 1;
        
        for(int i = 1; i < v.size(); i++)
        {
            bool up = false;
        	for(int j = 1 + v[i]; j <= max; j += v[i])
            {
                if(check[j])
                {
                    check[j] = false;
                    num--;
                    up = true;
                }
            }
            if(up)
            	ans++;
            if(num < 1)
                break;
        }
        
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}
        