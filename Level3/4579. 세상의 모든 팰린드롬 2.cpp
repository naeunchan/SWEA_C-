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
        int len;
        bool check = false;
        cin >> s;
        
        len = s.size();
        for(int i = 0; i < len / 2; i++)
        {
            if(s[i] == '*' || s[len - 1 - i] == '*')
                break;
            if(s[i] != s[len - 1 - i])
            {
                check = true;
                break;
            }
        }
        
        if(check)
            cout << "#" << tc << " " << "Not exist" << endl;
        else
            cout << "#" << tc << " " << "Exist" << endl;
    }
    return 0;
}