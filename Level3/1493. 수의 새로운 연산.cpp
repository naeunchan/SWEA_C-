#include <iostream>

using namespace std;
int arr[301][301];

int main(void)
{
    int num = 1;
    
    for(int i = 1; i <= 300; i++)
    {
        arr[i][1] = num;
        for(int j = 2; j <= 300; j++)
            arr[i][j] = arr[i][j - 1] + i + j - 1;
        num += i;
    }
    cin >> num;
    
    for(int i = 1; i <= num; i++)
    {
        int p, q, x, y, a, b;
        
        cin >> a >> b;
        
        for(int j = 1; j <= 300; j++)
        {
            for(int k = 1; k <= 300; k++)
            {
                if(arr[j][k] == a)
                {
                    p = j;
                    q = k;
                }
                if(arr[j][k] == b)
                {
                    x = j;
                    y = k;
                }
            }
        }
        p += x;
        q += y;
        cout << "#" << i << " " << arr[p][q] << endl;
    }
    return 0;
}