#include <iostream>
#include <cmath>

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
        int S, E, M, s = 0;
        int year = 1;
        
        cin >> S >> E >> M;
        s = S;
        
        while(1)
        {
         	if((s - E) % 24 == 0 && (s - M) % 29 == 0)
                break;
            s += 365;
        }
        
        cout << "#" << tc << " " << s << endl;
    }
    return 0;
}