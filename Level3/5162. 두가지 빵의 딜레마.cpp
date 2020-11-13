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
        int A, B, C;
        int ans = 0;
        
        cin >> A >> B >> C;
        
        ans = (A < B ? C / A : C / B);
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}