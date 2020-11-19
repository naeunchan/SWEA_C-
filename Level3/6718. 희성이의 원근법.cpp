#include <cstdio>

using namespace std;

int main(void)
{
    int t;
    scanf("%d", &t);
    
    for(int tc = 1; tc <= t; tc++)
    {
        int d, ans = 0;
        
        scanf("%d", &d);
        
        if(d < 100)
            ans = 0;
        else if(d < 1000)
            ans = 1;
        else if(d < 10000)
            ans = 2;
        else if(d < 100000)
            ans = 3;
        else if(d < 1000000)
            ans = 4;
        else
            ans = 5;
        
        printf("#%d %d\n", tc, ans);
    }
    return 0;
}