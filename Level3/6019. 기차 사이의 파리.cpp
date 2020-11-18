#include <iostream>

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
        double D, A, B, F;
        double s1, s2, d;
       	
        cin >> D >> A >> B >> F;
        
        s1 = D / (B + F);
        d = F * s1 - A * s1;
        s2 = d / (A + B);
        
        printf("#%d %f\n", tc, F * s1 + F * s2);
    }
    return 0;
}