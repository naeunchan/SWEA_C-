#include <iostream>
#include <string>

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
        string s;
        cin >> s;
        
        cout << "#" << tc << " ";
        if((s.back() - '0') % 2)
            cout << "Odd" << endl;
        else
            cout << "Even" << endl;
    }
    return 0;
}