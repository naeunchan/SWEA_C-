#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    int test_case;
    int T;

    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        queue<pair<pair<int, int>, int>> q;
        vector<int> v;
        int count = 1;
        int n;
        int K;

        cin >> K;

        for (int i = 0; i < pow(2, K) - 1; i++)
        {
            cin >> n;
            v.push_back(n);
        }

        cout << "#" << test_case << " ";

        q.push({{0, v.size()}, 0});

        while (!q.empty())
        {
            pair<pair<int, int>, int> p = q.front();
            int front = p.first.first;
            int back = p.first.second;
            int depth = p.second;
            int mid = ((front + back) / 2);

            q.pop();

            cout << v[mid] << " ";

            if (front == mid || back == mid)
            {
                continue;
            }

            q.push({{front, mid}, depth + 1});
            q.push({{mid + 1, back}, depth + 1});

            if (count == pow(2, depth))
            {
                cout << endl;
                count = 1;
            }
            else
            {
                count++;
            }
        }
        cout << endl;
    }

    return 0;
}