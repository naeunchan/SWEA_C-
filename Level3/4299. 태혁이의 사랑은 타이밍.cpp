#include <iostream>

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
        int D, H, M;
        cin >> D >> H >> M;
        
        D -= 11;
        H -= 11;
        M -= 11;
        
        cout << "#" << tc << " ";
        if(M < 0)
        {
            M = 60 + M;
            H--;
        }
        if(H < 0)
        {
            H = 24 + H;
            D--;
        }
        if(D < 0)
            cout << -1 << endl;
        else
            cout << (24 * 60 * D) + (60 * H) + M << endl;
    }
    return 0;
}