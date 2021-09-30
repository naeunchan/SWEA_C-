#include <algorithm>
#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main(void) {
    int T;
    int directX[4] = {-1, 1, 0, 0};
    int directY[4] = {0, 0, -1, 1};

    cin >> T;

    for (int t = 1; t <= T; t++) {
        vector<vector<string>> board(4, vector<string>(4));
        set<string> numbers;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> board[i][j];
            }
        }
        
       for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                queue<pair<string, pair<int, int>>> q;
        		int move = 7;
                
                q.push({board[i][j], {i, j}});

                while (move--) {
                    int size = q.size();

                    while (size--) {
                        string currentNumber = q.front().first;
                        int x = q.front().second.first;
                        int y = q.front().second.second;

                        q.pop();

                        for (int k = 0; k < 4; k++) {
                            string tmpNumber = currentNumber;
                            int nx = x + directX[k];
                            int ny = y + directY[k];

                            if (nx >= 0 && nx < 4 && ny >= 0 && ny < 4) {
                                q.push({tmpNumber + board[nx][ny], {nx, ny}});
                            }

                            if (!move) {
                                numbers.insert(tmpNumber);
                            }
                        }
                    }
                }
            }
        }
        
        cout << "#" << t << " " << numbers.size() << endl;
    }
}