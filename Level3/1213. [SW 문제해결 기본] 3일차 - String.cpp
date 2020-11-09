#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    for(int i = 1; i <= 10; i++)
    {
        int n, size;
        string s, search;
        
        cin >> n;
        cin >> search;
        cin >> s;
        size = search.size();
        
        n = 0;
        
        for(int j = 0; j < s.size(); j++)
        {
            if(search == s.substr(j, size))
            {
                n++;
                j += size;
            }
        }
        
        cout << "#" << i << " " << n << endl;
    }
    return 0;
}