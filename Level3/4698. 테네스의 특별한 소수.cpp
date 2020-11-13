#include <iostream>

using namespace std;

bool prime[1000001] = {false, };

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    prime[0] = true;
    prime[1] = true;
    
    for(int i = 2; i <= 1000000; i++)
    {
        if(!prime[i])
        {
            for(int j = i + i; j <= 1000000; j += i)
            	prime[j] = true;
        }
    }
    
    for(int tc = 1; tc <= t; tc++)
    {
        int D, A, B, ans = 0;
        string d;
        cin >> D >> A >> B;
        
        d = to_string(D);
        for(int i = A; i <= B; i++)
        {
            if(!prime[i])
            {
                string p;
                p = to_string(i);
                
                if(p.find(d) != string::npos)
                    ans++;
            }
        }
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}