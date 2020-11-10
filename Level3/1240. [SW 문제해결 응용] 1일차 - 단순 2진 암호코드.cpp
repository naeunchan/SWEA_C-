#include <iostream>
#include <string>
#include <vector>

using namespace std;

string number[10] = {"0001101", "0011001", "0010011", "0111101", "0100011", "0110001", "0101111", "0111011", "0110111", "0001011"};

int main (void)
{
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
        int n, m, ans = 0, odd = 0, even = 0;
        string input;
        vector<string> s;
        cin >> n >> m;
        
        for(int j = 0; j < n; j++)
        {
            cin >> input;
            if(input.find('1') == -1)
               continue;
            input = input.substr(input.rfind('1') - 55, 56);
            s.push_back(input);
        }
        
        for(int j = 0; j < 8; j++)
        {
            for(int k = 0; k < 10; k++)
            {
                if(number[k] == s[0].substr(7 * j, 7))
                {
                    if((j + 1) % 2 == 0)
                        even +=k;
                    else
                        odd += k;
                    ans += k;
                    break;
                }
            }
        }
        
        cout << "#" << i << " ";
        if(((odd * 3) + even) % 10 != 0)
            cout << 0 << endl;
        else
            cout << ans << endl;
                                           
    }
    return 0;
}