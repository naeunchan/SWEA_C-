#include <iostream>
#include <vector>

using namespace std;

vector<int> v(300001, 0);

int main(void)
{
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        int N, D, ans = 0, i = -1;
        
        cin >> N >> D;
        for(int i = 0; i < N; i++)
        	cin >> v[i];
        
        while(i < N - 1)
        {
            bool check = false;
            
            for(int j = 1; j <= D; j++)
            {
               if(i + j < N && v[i + j])
               {
                   check = true;
                   i += j;
                   break;
               }
            }
            if(!check)
            {
                ans++;
            	i += D;
            }
        }
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}