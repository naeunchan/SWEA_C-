#include <iostream>
#include <string>

using namespace std;

const int hole[26] = {1, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        string a, b, tmpA = "", tmpB = "";
        bool check = false;
        int aCount = 0, bCount = 0;
            
        cin >> a >> b;

        if(a.size() != b.size())
        {
        	cout << "#" << tc  << " DIFF" << endl;
            continue;
        }
        else
        {   
            for(int j = 0; j < a.size(); j++)
            {
                if(hole[a[j] - 'A'] == 1)
                    tmpA += "1";
                else if(hole[a[j] - 'A'] == 0)
                    tmpA += "0";
                else
                    tmpA += "2";
                
                if(hole[b[j] - 'A'] == 1)
                    tmpB += "1";
                else if(hole[b[j] - 'A'] == 0)
                    tmpB += "0";
                else
                    tmpB += "2";
            }
        }
        
        cout << "#" << tc << " ";
        if(tmpA == tmpB)
            cout << "SAME" << endl;
        else
            cout << "DIFF" << endl;
    }
    return 0;
}