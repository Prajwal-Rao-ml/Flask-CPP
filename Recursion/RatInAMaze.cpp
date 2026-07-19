#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class RatInAMaze
{
private:
    bool isSafe(int x, int y, vector<vector<int>> visted, vector<vector<int>> m, int n)
    {
        if (x >= 0 && x < n && y >= 0 && y < n && visted[x][y] != 1 && m[x][y] == 0)
        {
            return true;
        }
        return false;
    }
    void solve(vector<vector<int>> &m, vector<vector<int>> &visited, vector<string> &answer, int srcX, int srcY, string path, int n)
    {
        if (srcX == n - 1 && srcY == n - 1)
        {
            answer.push_back(path);
            return;
        }

        // Case where we go right
        if (isSafe(srcX, srcY + 1, visited, m, n))
        {
            path.push_back('R');
            visited[srcX][srcY + 1] = 1;
            solve(m, visited, answer, srcX, srcY + 1, path, n);
            visited[srcX][srcY + 1] = 0;
            path.pop_back();
        }

        // Up

        if (isSafe(srcX - 1, srcY, visited, m, n))
        {
            path.push_back('U');
            visited[srcX - 1][srcY] = 1;
            solve(m, visited, answer, srcX - 1, srcY, path, n);
            visited[srcX - 1][srcY] = 0;
            path.pop_back();
        }

        // down

        if (isSafe(srcX + 1, srcY, visited, m, n))
        {
            path.push_back('D');
            visited[srcX + 1][srcY] = 1;
            solve(m, visited, answer, srcX + 1, srcY, path, n);
            visited[srcX + 1][srcY] = 0;
            path.pop_back();
        }

        // Left
        if (isSafe(srcX, srcY - 1, visited, m, n))
        {
            path.push_back('L');
            visited[srcX][srcY - 1] = 1;
            solve(m, visited, answer, srcX, srcY - 1, path, n);
            visited[srcX][srcY - 1] = 0;
            path.pop_back();
        }
    }

public:
    vector<string> findPaths(vector<vector<int>> &m, int n)
    {
        vector<string> answer;
        int srcX = 0, srcY = 0;

        vector<vector<int>> visited = m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }

        string path = "";
        visited[0][0] = 1;
        solve(m, visited, answer, srcX, srcY, path, n);

        sort(answer.begin(), answer.end());

        return answer;
    }
};

int main()
{
    RatInAMaze rat;
    int n = 6;

    vector<vector<int>> m = {
        {0, 0, 1, 1, 1, 1},
        {1, 0, 0, 0, 1, 1},
        {1, 1, 1, 0, 1, 1},
        {1, 0, 0, 0, 0, 1},
        {1, 0, 1, 1, 0, 0},
        {1, 0, 0, 0, 0, 0}};
    vector<string> result = rat.findPaths(m, n);

    for (string s : result)
    {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
