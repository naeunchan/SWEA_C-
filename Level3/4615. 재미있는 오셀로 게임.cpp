#include <iostream>
#include <vector>

using namespace std;

char board[9][9];
int N, M;

void check(int x, int y, int turn)
{
    char D, C;

    if (turn == 1)
    {
        D = 'B';
        C = 'W';
    }
    else
    {
        D = 'W';
        C = 'B';
    }

    // 오른쪽 검사
    for (int i = y + 1; i <= N; i++)
    {
        if (board[x][i] == ' ')
            break;

        if (board[x][i] == D)
        {
            for (int j = y; j < i; j++)
                board[x][j] = D;
            break;
        }
    }

    // 왼쪽 검사
    for (int i = y - 1; i > 0; i--)
    {
        if (board[x][i] == ' ')
            break;

        if (board[x][i] == D)
        {
            for (int j = y; j > i; j--)
                board[x][j] = D;
            break;
        }
    }

    // 아래쪽 검사
    for (int i = x + 1; i <= N; i++)
    {
        if (board[i][y] == ' ')
            break;

        if (board[i][y] == D)
        {
            for (int j = x; j < i; j++)
                board[j][y] = D;
            break;
        }
    }

    // 위쪽 검사
    for (int i = x - 1; i > 0; i--)
    {
        if (board[i][y] == ' ')
            break;

        if (board[i][y] == D)
        {
            for (int j = x; j > i; j--)
                board[j][y] = D;
            break;
        }
    }

    // 우상대각 검사
    for (int i = x - 1, j = y + 1; i > 0 && j <= N; i--, j++)
    {
        if (board[i][j] == ' ')
            break;

        if (board[i][j] == D)
        {
            for (int k = x, l = y; k > i && l < j; k--, l++)
                board[k][l] = D;
            break;
        }
    }

    // 좌상대각 검사
    for (int i = x - 1, j = y - 1; i > 0 && j > 0; i--, j--)
    {
        if (board[i][j] == ' ')
            break;

        if (board[i][j] == D)
        {
            for (int k = x, l = y; k > i && l > j; k--, l--)
                board[k][l] = D;
            break;
        }
    }

    // 우하대각 검사
    for (int i = x + 1, j = y + 1; i <= N && j <= N; i++, j++)
    {
        if (board[i][j] == ' ')
            break;

        if (board[i][j] == D)
        {
            for (int k = x, l = y; k < i && l < j; k++, l++)
                board[k][l] = D;
            break;
        }
    }

    // 좌하대각 검사
    for (int i = x + 1, j = y - 1; i <= N && j > 0; i++, j--)
    {
        if (board[i][j] == ' ')
            break;

        if (board[i][j] == D)
        {
            for (int k = x, l = y; k < i && l > j; k++, l--)
                board[k][l] = D;
            break;
        }
    }
}

void reset()
{
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            board[i][j] = ' ';
}

void play()
{
    int x, y, turn;

    for (int i = 0; i < M; i++)
    {
        cin >> y >> x >> turn;
        check(x, y, turn);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        int wC = 0, bC = 0;

        cin >> N >> M;

        reset();
        board[N / 2][N / 2] = 'W';
        board[N / 2][N / 2 + 1] = 'B';
        board[N / 2 + 1][N / 2] = 'B';
        board[N / 2 + 1][N / 2 + 1] = 'W';

        play();

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if (board[i][j] == 'B')
                    bC++;
                else if (board[i][j] == 'W')
                    wC++;
            }
        }

        cout << "#" << tc << " " << bC << " " << wC << endl;
    }
    return 0;
}