#include <iostream>

using namespace std;

int arr[10001];

int main(void)
{
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
        int sum = 0, N, div, ans = 0;
        cin >> N;
        
        for(int j = 0; j < N; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        
        div = sum / N;
        
        for(int j = 0; j < N; j++)
        {
            if(arr[j] < div)
                ans += (div - arr[j]);
        }
        
        cout << "#" << i << " " << ans << endl;
    }
    return 0;
}