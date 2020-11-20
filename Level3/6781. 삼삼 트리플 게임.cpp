#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int ans = 0;
int r1 = 0;
int r2 = 0;

void check(vector<char> card)
{
    vector<int> count1(10, 0), count2(10, 0);
    
    sort(card.begin(), card.end());
    
    for(int i = 0; i < card.size(); i++)
    {
        int num = card[i] - '0';
        count1[num]++;
        count2[num]++;
    }
    
    for(int i = 1; i < 10; i++)
    {
        if(count1[i] >= 3)
        {
            r1++;
            count1[i] -= 3;
        }
    }
    for(int i = 1; i < 8; i++)
    {
        if(count1[i] > 0 && count1[i + 1] > 0 && count1[i + 2] > 0)
        {
            r1++;
            count1[i]--;
            count1[i + 1]--;
            count1[i + 2]--;
            i--;
        }
    }
    
    for(int i = 1; i < 8; i++)
    {
        if(count2[i] > 0 && count2[i + 1] > 0 && count2[i + 2] > 0)
        {
            r2++;
            count2[i]--;
            count2[i + 1]--;
            count2[i + 2]--;
            i--;
        }
    }
    for(int i = 1; i < 10; i++)
    {
        if(count2[i] >= 3)
        	r2++;
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        string card, color;
        vector<char> R,G,B;
        
        ans = 0;
        r1 = 0, r2 = 0;
        
        cin >> card;
        cin >> color;
        
        for(int i = 0; i < 9; i++)
        {
            if(color[i] == 'R')
                R.push_back(card[i]);
            else if(color[i] == 'G')
                G.push_back(card[i]);
            else
                B.push_back(card[i]);
        }
        
        if(R.size() > 0)
            check(R);
        if(G.size() > 0)
            check(G);
        if(B.size() > 0)
            check(B);
        
        cout << "#" << tc << " ";
        if(r1 >= 3 || r2 >= 3)
            cout << "Win" << endl;
        else
            cout << "Continue" << endl;
    }
    return 0;
}