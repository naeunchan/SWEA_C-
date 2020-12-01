#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        string current = "", promise = "";
        int cur = 0, pro = 0, ans = 0;
        
        cin >> current;
        cin >> promise;
        cur = (stoi(current.substr(0, 2)) * 3600) + (stoi(current.substr(3, 2)) * 60) + stoi(current.substr(6, 2));
        pro = (stoi(promise.substr(0, 2)) * 3600) + (stoi(promise.substr(3, 2)) * 60) + stoi(promise.substr(6, 2));
        
        ans = pro - cur;
        
        if(ans > 0)
        {
            cout << "#" << tc << " ";
            if(ans / 3600 < 10)
                cout << "0" << ans / 3600 << ":";
            else
                cout << ans / 3600 << ":";
            if(ans % 3600 / 60 < 10)
                cout << "0" << ans % 3600 / 60 << ":";
            else
                cout << ans % 3600 / 60 << ":";
            if(ans % 60 < 10)
                cout << "0" << ans % 60 << endl;
            else
                cout << ans % 60 << endl;
        }
		else
        {
            ans += (3600 * 24);
            cout << "#" << tc << " ";
            if(ans / 3600 < 10)
                cout << "0" << ans / 3600 << ":";
            else
                cout << ans / 3600 << ":";
            if(ans % 3600 / 60 < 10)
                cout << "0" << ans % 3600 / 60 << ":";
            else
                cout << ans % 3600 / 60 << ":";
            if(ans % 60 < 10)
                cout << "0" << ans % 60 << endl;
            else
                cout << ans % 60 << endl;
        }
    }
    return 0;
}