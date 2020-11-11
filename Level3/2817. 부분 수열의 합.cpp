#include <iostream>

using namespace std;

int N = 0;
int K = 0;
int ans = 0;
int arr[20];

void dfs(int start, int current)
{
    if(current == K)
    {
        ans++;
        return;
    }
    
    for(int i = start + 1; i < N; i++)
    {
        if(current + arr[i] <= K)
            dfs(i, current + arr[i]);
    }
}

int main(void)
{
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        cin >> N >> K;
        
        ans = 0;
        for(int i = 0; i < N; i++)
            cin >> arr[i];
        
        for(int i = 0; i < N; i++)
        	dfs(i, arr[i]);
        
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}