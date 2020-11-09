#include <iostream>
#include <vector>

using namespace std;
long long MOD = 1234567891;
long long fac[1000001] = {1, 1, };

long long fermat(int N, long long mod)
{
    if(mod == 0)
        return 1;
    
    long long tmp = fermat(N, mod / 2);
    long long ans = (tmp * tmp) % MOD;
    
    if(mod % 2 == 0)
        return ans;
    else
        return (N * ans) % MOD;
}

int main(void)
{
    int t;
    cin >> t;
    
    //Factorial 미리 구하기
    for(int i = 2; i <= 1000000; i++)
        fac[i] = (fac[i - 1] * i) % MOD;
    
    for(int i = 1; i <= t; i++)
    {
        int N, R;
        long long ans, a;
        
        cin >> N >> R;
        a = fermat((fac[R] * fac[N - R]) % MOD, MOD - 2);
        ans = (fac[N] * a) % MOD;
        cout << "#" << i << " " << ans << endl;
    }
    return 0;
}