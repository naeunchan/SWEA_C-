#include <iostream>

using namespace std;

int arr[1000] = {0, };

int main(void)
{   
    for(int i = 1; i <= 10; i++)
    {
        int t, left = 0, right = 0, count = 0;
        cin >> t;
        
        for(int j = 0; j < t; j++)
        	cin >> arr[j];
		
        for(int j = 2; j < t - 2; j++)
        {
            left = arr[j - 2] > arr[j - 1] ? arr[j - 2] : arr[j - 1];
            right = arr[j + 2] > arr[j + 1] ? arr[j + 2] : arr[j + 1];
            
            if(arr[j] > left && arr[j] > right)
                count += arr[j] - (left > right ? left : right);
        }
        cout << "#" << i << " " << count << endl;
    }
    
    return 0;
}