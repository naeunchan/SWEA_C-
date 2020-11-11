#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
        char map[20][20], cmd[100];
        int H, W, C, x, y;
        char state;
        cin >> H >> W;
        
        for(int j = 0; j < H; j++)
        {
            for(int k = 0; k < W; k++)
            {
                cin >> map[j][k];
                if(map[j][k] == '^' || map[j][k] == 'v' || map[j][k] == '<' || map[j][k] == '>')
                {
                    x = j;
                    y = k;
                    if(map[j][k] == '^')
                    	state = 'U';
                    else if(map[j][k] == 'v')
                    	state = 'D';
                    else if(map[j][k] == '<')
                        state = 'L';
                    else if(map[j][k] == '>')
                        state = 'R';
                }
        	}
        }
        cin >> C;
        for(int j = 0; j < C; j++)
            cin >> cmd[j];
        for(int j = 0; j < C; j++)
        {
            if(cmd[j] == 'U')
            {
                state = 'U';
                if(x - 1 >= 0 && map[x - 1][y] == '.')
                {
                    map[x][y] = '.';
                    map[x - 1][y] = '^';
                    x -= 1;
                }
                else
                    map[x][y] = '^';
            }
            else if(cmd[j] == 'D')
            {
                state = 'D';
                if(x + 1 < H && map[x + 1][y] == '.')
                {
                    map[x][y] = '.';
                    map[x + 1][y] = 'v';
                    x += 1;
                }
                else
                    map[x][y] = 'v';
            }
            else if(cmd[j] == 'L')
            {
                state = 'L';
                if(y - 1 >= 0 && map[x][y - 1] == '.')
                {
                    map[x][y] = '.';
                    map[x][y - 1] = '<';
                    y -= 1;
                }
                else
                    map[x][y] = '<';
            }
            else if(cmd[j] == 'R')
            {
                state = 'R';
                if(y + 1 < W && map[x][y + 1] == '.')
                {
                    map[x][y] = '.';
                    map[x][y + 1] = '>';
                    y += 1;
                }
               	else
                    map[x][y] = '>';
            }
            else if(cmd[j] == 'S')
            {
                if(state == 'U')
                {
                    for(int r = x - 1; r >= 0; r--)
                    {
                        if(map[r][y] == '*')
                        {
                            map[r][y] = '.';
                            break;
                        }
                        else if(map[r][y] == '#')
                            break;
                    }       
                }
                else if(state == 'D')
                {
                    for(int r = x + 1; r < H; r++)
                    {
                        if(map[r][y] == '*')
                        {
                            map[r][y] = '.';
                            break;
                        }
                        else if(map[r][y] == '#')
                            break;
                    }
                }
                else if(state == 'L')
                {
                    for(int c = y - 1; c >= 0; c--)
                    {
                        if(map[x][c] == '*')
                        {
                            map[x][c] = '.';
                            break;
                        }
                        else if(map[x][c] == '#')
                            break;
                    }
                }
                else if(state == 'R')
                {
                    for(int c = y + 1; c < W; c++)
                    {
                        if(map[x][c] == '*')
                        {
                            map[x][c] = '.';
                            break;
                        }
                        else if(map[x][c] == '#')
                            break;
                    }
                }
            }
        }

        cout << "#" << i << " ";
        for(int j = 0; j < H; j++)
        {
            for(int k = 0; k < W; k++)
                cout << map[j][k];
            cout << endl;
        }   
    }
    return 0;
}