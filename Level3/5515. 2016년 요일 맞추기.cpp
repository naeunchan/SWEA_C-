#include <iostream>

using namespace std;

int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        int m, d, now = 0;
        cin >> m >> d;
        
        for(int i = 1; i < m; i++)
            now += month[i];
        now += d;
        now += 3;
        
        cout << "#" << tc << " " << now % 7 << endl;
    }
    return 0;
}