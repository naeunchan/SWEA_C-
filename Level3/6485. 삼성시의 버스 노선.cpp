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
        int N, P;
        vector<int> v(5001, 0);
        
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            int a, b;
            cin >> a >> b;
            for(int j = a; j <= b; j++)
                v[j]++;
        }
        
        cout << "#" << tc << " ";
        cin >> P;
        for(int i = 0; i < P; i++)
        {
            int tmp;
            cin >> tmp;
            cout << v[tmp] << " ";
        }
        cout << endl;
    }
    return 0;
}