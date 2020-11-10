#include <iostream>
#include <vector>
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
        vector<bool> S(14, false), D(14, false), H(14, false), C(14, false);
        string s;
        bool check = false;
        int sC = 13, dC = 13, hC = 13, cC = 13;
        
        cin >> s;
        
        for(int i = 0; i < s.size(); i += 3)
        {
            string card = s.substr(i, 3);
            int num = stoi(s.substr(i + 1, 2));
            if(card[0] == 'S')
            {
                if(S[num])
                {
                    check = true;
                    break;
                }
                S[num] = true;
                sC--;
            }
            else if(card[0] == 'D')
            {
                if(D[num])
                {
                    check = true;
                    break;
                }
                D[num] = true;
                dC--;
            }
            else if(card[0] == 'H')
            {
                if(H[num])
                {
                    check = true;
                    break;
                }
                H[num] = true;
                hC--;
            }
            else
            {
                if(C[num])
                {
                    check = true;
                    break;
                }
                C[num] = true;
                cC--;
            }
        }
        cout << "#" << tc << " ";
        if(check)
            cout << "ERROR" << endl;
        else
            cout << sC << " " << dC << " " << hC << " " << cC << endl;
    }
    return 0;
}