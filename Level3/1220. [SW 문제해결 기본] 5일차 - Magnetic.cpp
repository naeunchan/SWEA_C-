#include <iostream>

using namespace std;

int arr[100][100];

int main(void)
{
    for(int t = 1; t <= 10; t++)
    {
        int n, ans = 0;
        cin >> n;
        
        for(int i = 0; i < 100; i++)
        {
            for(int j = 0; j < 100; j++)
                cin >> arr[i][j];
        }
        
        for(int j = 0; j < 100; j++)
        {
            bool n = false, s = false;
            
            for(int i = 99; i >= 0; i--)
            {
                if(arr[i][j] == 1)
                {
                    if((!n && !s) || (n && !s))
                        continue;
                    else if(!n && s)
                    {
                        ans++;
                        n = false;
                        s = false;
                    }
                }
                else if(arr[i][j] == 2)
                {
                    if(!n && !s)
                       s = true;
                    else if(s && !n)
                        continue;
                    else if(!s && n)
                    {
                        ans++;
                        n = false;
                        s = false;
                    }
                }
            }
        }
        cout << "#" << t << " " << ans << endl;
    }
    return 0;
}