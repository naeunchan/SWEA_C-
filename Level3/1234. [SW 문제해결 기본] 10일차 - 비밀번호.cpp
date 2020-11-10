#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    for(int t = 1; t <= 10; t++)
    {
        int n;
        string tmp;
        stack<char> s, ans;
        
        cin >> n >> tmp;
        
        for(int i = 0; i < tmp.size(); i++)
        {
            if(!s.empty() && s.top() == tmp[i])
                s.pop();
            else
                s.push(tmp[i]);
        }
        
        cout << "#" << t << " ";
        while(!s.empty())
        {
            ans.push(s.top());
            s.pop();
        }
        while(!ans.empty())
        {
            cout << ans.top();
            ans.pop();
        }
        
        cout << endl;
    }
    return 0;
}