#include <iostream>
#include <string>

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
        string s;
        cin >> s;
        
        for(int i = 0; i < 5; i++)
        {
            if(i == 0 || i == 4)
            {
                for(int j = 0; j < s.size(); j++)
                    cout << "..#.";
                cout << "." << endl;
            }
            else if(i != 2)
            {
                cout << ".";
                for(int j = 0; j < s.size() * 2; j++)
                    cout << "#.";
                cout << endl;
            }
            else
            {
                cout << "#";
                for(int j = 0; j < s.size(); j++)
                    cout << "." << s[j] << ".#";
                cout << endl;
            }
        }
    }
    return 0;
}