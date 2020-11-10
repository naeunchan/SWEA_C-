#include <iostream>
#include <list>

using namespace std;

int main(void)
{
    for(int t = 1; t <= 10; t++)
    {
        int n, x, y, s;
        char c;
        list<int> lt;
        auto itr = lt.begin();
        
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            lt.push_back(x);
        }
        
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> c;
            if(c == 'I')
            {
                list<int> tmp;
                itr = lt.begin();
                
                cin >> x >> y;
                for(int j = 0; j < x; j++)
                    itr++;
                
                for(int j = 0; j < y; j++)
                {
                    cin >> s;
                    tmp.push_back(s);
                }
                lt.splice(itr, tmp);
            }
            else if(c == 'D')
            {
                itr = lt.begin();
                cin >> x >> y;
                for(int j = 0; j < x; j++)
                    itr++;
                
                for(int j = 0; j < y; j++)
                    itr = lt.erase(itr);
            }
        }
        
        itr = lt.begin();
        cout << "#" << t << " ";
        for(int i = 0; i < 10; i++, itr++)
            cout << *itr << " ";
        cout << endl;
    }
    return 0;
}