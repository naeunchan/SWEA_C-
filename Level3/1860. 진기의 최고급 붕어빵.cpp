#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
        int N, M, K;
        vector<int> guest;
        bool ans = true;
        
        cin >> N >> M >> K;
        
        for(int j = 0; j < N; j++)
        {
            int tmp;
            cin >> tmp;
        	guest.push_back(tmp);
        }
        
       	sort(guest.begin(), guest.end());
        
        for(int j = 0; j < N; j++)
        {
            if(K * (guest[j] / M) < j + 1)
            {
                ans = false;
                break;
            }
        }
        
        if(ans)
            cout << "#" << i << " Possible" << endl;
        else
            cout << "#" << i << " Impossible" << endl;
    }
    return 0;
}