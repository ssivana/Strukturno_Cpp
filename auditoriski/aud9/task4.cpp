//
// Created by Ivana Stojkoska on 9.5.2026.
//

#include <iostream>
using namespace std;

int main() {
    int rows, cols, m[100][100], counter = 0;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 1; i < rows - 1; i++) {
        for (int j = 1; j < cols - 1; j++) {
            int up = m[i - 1][j];
            int down = m[i + 1][j];
            int right = m [i][j+1];
            int left = m[i][j-1];
            int center = m[i][j];
            if (up==1 && down==1 && right==1 && left==1 && center==1) {

                m[i][j] = 0;
                m[i-1][j] = 0;
                m[i+1][j] = 0;
                m[i][j-1] = 0;
                m[i][j+1] = 0;
                counter ++;
            }
        }
    }

    cout << "There are " << counter << " pluses (+) in the matrix";

    return 0;
}
