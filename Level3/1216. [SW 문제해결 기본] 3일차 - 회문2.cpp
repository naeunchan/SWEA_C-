#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    for(int t = 1; t <= 10; t++)
    {
        vector<string> v;
        int n, max = 0;
        string s;
        bool flag = true;
        
        cin >> n;
        
        for(int i = 0; i < 100; i++)
        {
            cin >> s;
            v.push_back(s);
        }
        
        n = 100;
        
        while(flag)
        {
            //row check
            for(int i = 0; i < 100; i++)
            {
                for(int j = 0; j <= 100 - n; j++)
                {
                    bool rowKeep = true;
                    for(int k = 0; k < n / 2; k++)
                    {
                        if(v[i][j + k] != v[i][j + n - k - 1])
                        {
                            rowKeep = false;
                        }
                    }
                    if(rowKeep)
                    {
                        max = n;
                        flag = false;
                        break;
                    }
                }
            }
            
            //col check
            for(int i = 0; i <= 100 - n; i++)
            {
                for(int j = 0; j < 100; j++)
                {
                    bool colKeep = true;
                    for(int k = 0; k < n / 2; k++)
                    {
                        if(v[i + k][j] != v[i + n - k - 1][j])
                        {
                            colKeep = false;
                        }
                    }
                    if(colKeep)
                    {
                        max = n;
                        flag = false;
                        break;
                    }
                }
            }
            n--;
        }
        cout << "#" << t << " " << max << endl;
    }
    return 0;
}