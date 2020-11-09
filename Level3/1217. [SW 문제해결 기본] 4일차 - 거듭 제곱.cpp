#include <iostream>

using namespace std;

int num(int N, int M)
{
    if(M < 1)
        return 1;
    else
        return N * num(N, M - 1);
}

int main(void)
{
    for(int t = 1; t <= 10; t++)
    {
        int N, M, ans = 0;
        cin >> ans;
        cin >> N >> M;
        
        ans = num(N, M);
        cout << "#" << t << " " << ans << endl;
    }
    return 0;
}