//
// Created by Ivana Stojkoska on 9.5.2026.
//
#include  <iostream>
using namespace std;

// Да се напише програма која за матрица внесена од тастатура ќе
// ја пресмета разликата на збирот на елементите на непарните колони
// и збирот на елементите на парните редици. Матрицата не мора да биде квадратна.
int main() {
    int rows, cols, matrix[100][100], sumEvenRows = 0, sumOddCols = 0;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j % 2 == 1) {
                sumOddCols += matrix[i][j];
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < cols; j++) {
                sumEvenRows+=matrix[i][j];
            }
        }
    }

    cout << "Razlikata na (zbirot na neparni koloni) i (zbir na parni redici) e: " << sumOddCols - sumEvenRows;


    return 0;
}
