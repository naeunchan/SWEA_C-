#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        int N, a = 0, b = 0, tmp;
        int current = 0;
        vector<int> v;
        
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            cin >> tmp;
    		v.push_back(tmp);
        }
        
        for(int i = 1; i < N; i++)
        {
            if(v[i - 1] < v[i])
                a = max(a, v[i] - v[i - 1]);
            else
                b = max(b, v[i - 1] - v[i]);
            
        }
        cout << "#" << tc << " " << a << " " << b << endl;
    }
    return 0;
}