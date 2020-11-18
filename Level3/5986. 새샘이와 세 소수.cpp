#include <iostream>
#include <vector>

using namespace std;

int N = 0;
int ans = 0;
vector<bool> prime(1000, false);
vector<int> p;

void dfs(int current, int count, int start)
{
    if(current >= N || count >= 3)
    {
        if(current == N && count == 3)
            ans++;
        return;
    }
    for(int i = start; i < p.size(); i++)
    {
        if(current + p[i] <= N)
            dfs(current + p[i], count + 1, i);
        else
            return;
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    for(int i = 2; i <= 999; i++)
    {
        if(!prime[i])
        {
            p.push_back(i);
            for(int j = i + i; j <= 999; j += i)
                prime[j] = true;
        }
    }
    
    for(int tc = 1; tc <= t; tc++)
    {
        ans = 0;
        cin >> N;
        
        dfs(0, 0, 0);
        
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}