#include <iostream>
using namespace std;
#define size 4

bool maze[size][size], solution[size][size];

void initMaze() {
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            solution[i][j] = 0;
}
void inputMaze() {
    cout << "Input a maze(" << size << 'x' << size << "):" << endl;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> maze[i][j];
    cout << "The Entered Maze is:\n";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cout << maze[i][j];
}
void dispSolution() {
    cout << "The solution:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << solution[i][j] << ' ';
        cout << endl;
    }
}
bool solveMaze(int r, int c) {
    if (r == size - 1 && c == size - 1) {
        solution[r][c] = 1;
        return 1;
    }
    if (r < size && c < size && solution[r][c] == 0 && maze[r][c] == 0) {
        solution[r][c] = 1;
        if (solveMaze(r + 1, c))
            return 1;
        if (solveMaze(r, c + 1))
            return 1;
        if (solveMaze(r - 1, c))
            return 1;
        if (solveMaze(r, c - 1))
            return 1;
    } else {
        solution[r][c] = 0;
        return 0;
    }
}
int main() {
    initMaze();
    inputMaze();
    if (solveMaze(0, 0))
        dispSolution();
    return 0;
}