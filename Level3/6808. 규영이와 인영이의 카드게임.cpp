#include <iostream>
#include <vector>

using namespace std;

vector<int> m, y;
int win = 0, lose = 0;

void dfs(bool* picked, int turn, int mScore, int yScore)
{
    if(mScore > 85 || yScore > 85)
    {
        int remain =  1;
        
        for(int i = 9 - turn; i > 0; i--)
            remain *= i;
        
        if(mScore < yScore)
            lose += remain;
        else if(mScore > yScore)
            win += remain;
        
        return;
    }
    
    for(int i = 0; i < 9; i++)
    {
        if(!picked[i])
        {
            int score = m[turn] + y[i];
            
            picked[i] = true;
            
            if(m[turn] < y[i])
                dfs(picked, turn + 1, mScore, yScore + score);
            else
                dfs(picked, turn + 1, mScore + score, yScore);
            
            picked[i] = false;
        }
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
        bool check[19] = {0, }, picked[9] = {0, };
        win = 0, lose = 0;
        
        m.clear();
        y.clear();
        
        for(int i = 0; i < 9; i++)
        {
            int tmp;
            cin >> tmp;
            m.push_back(tmp);
            check[tmp] = true;
        }
        
        for(int i = 1; i < 19; i++)
        {
            if(!check[i])
                y.push_back(i);
        }
        
        dfs(picked, 0, 0, 0);
        cout << "#" << tc << " " << win << " " << lose << endl;
    }
    return 0;
}