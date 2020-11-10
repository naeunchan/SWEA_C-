#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
        int N, A, B;
        long long R, C;
        long long min = 9876543210;
        
        cin >> N >> A >> B;
        
        for(R = 1; R <= sqrt(N); R++)
        {
            long long maxC = N / R;
            for(C = 1; C <= maxC; C++)
            {
               long long tmp = (A * abs(R - C)) + (B * (N - (R * C)));
            	if(min > tmp)
                	min = tmp;
            }
        }
        cout << "#" << i << " " << min << endl;
    }
    return 0;
}