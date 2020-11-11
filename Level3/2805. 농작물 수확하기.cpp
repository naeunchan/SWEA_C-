#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
        int n, mid, ans = 0;
        string s;
        vector<string> v;
        
        cin >> n;
        mid = n / 2;
        
        for(int j = 0; j < n; j++)
        {
            cin >> s;
            v.push_back(s);
        }
        
        for(int j = 0; j < n; j++)
        {
            ans +=v[j][mid] - '0';
            
            if(j > 0 && j <= mid)
            {
            	for(int k = 1; k <= j; k++)
                {
                    ans += v[j][mid - k] - '0';
                    ans += v[j][mid + k] - '0';
                }   
            }
            else if(j > mid && j < n - 1)
            {
                for(int k = 1; k < n - j; k++)
                {
                    ans += v[j][mid - k] - '0';
                    ans += v[j][mid + k] - '0';
                }
            }
        }
        
        cout << "#" << i << " " << ans << endl;
    }
    return 0;
}