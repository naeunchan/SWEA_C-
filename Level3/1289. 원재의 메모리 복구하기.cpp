#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
        int ans = 0;
        string bit;
        int original[50] = {0, };
        cin >> bit;
        
        for(int j = 0; j < bit.size(); j++)
        {
            string change;
            
            if(stoi(bit.substr(j, 1)) == original[j])
                continue;
            change = bit[j];
            
            for(int k = j; k < bit.size(); k++)
            	original[k] = stoi(change);
            ans++;
        }
        cout << "#" << i << " " << ans << endl;
    }
    return 0;
}