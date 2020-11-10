#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    for(int t = 1; t <= 10; t++)
    {
        int tmp, n, count = 1;
        queue<int> q;
        
        cin >> n;
        for(int i = 0; i < 8; i++)
        {
            cin >> tmp;
            q.push(tmp);
        }
        
        while(q.front() - count > 0)
        {
            q.push(q.front() - count);
            q.pop();
            count++;
            if(count > 5)
                count = 1;
        }
        
        q.push(0);
        q.pop();
        
        cout << "#" << t << " ";
        while(!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
    return 0;
}