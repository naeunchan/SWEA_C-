#include <iostream>

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
        int x1, x2, y1, y2, N;
        int a1 = 0, a2 = 0, a3 = 0;
        
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> N;
        
        for(int i = 0; i < N; i++)
        {
            int x, y;
            cin >> x >> y;
            if((x > x1 && x < x2) && (y > y1 && y < y2))
                a1++;
            else if((x == x1 && y >= y1 && y <= y2) || (x == x2 && y >= y1 && y <= y2) || (y == y1 && x >= x1 && x <= x2) || (y == y2 && x >= x1 && x <= x2))
                a2++;
            else
                a3++;
        }
        
        cout << "#" << tc << " " << a1 << " " << a2 << " " << a3 << endl;
    }
    return 0;
}