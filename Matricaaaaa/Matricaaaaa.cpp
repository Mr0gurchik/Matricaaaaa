#include <iostream>
#include <math.h>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    srand(time(NULL));

    int K;
    cout << "Введите размерность квадратной матрицы (K < 20): ";
    cin >> K;

    if (K <= 0 || K >= 20)
    {
        cout << "Размерность матрицы должна быть в диапазоне (1, 19)" << endl;
        return 1;
    }


    vector<vector<int>> matrix(K, vector<int>(K));

    for (int i = 0; i < K; i++)
    {
        for (int j = 0; j < K; j++)
        {
            matrix[i][j] = rand() % 10;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;
    for (int i = 0; i < K; i++) {
        sum += matrix[i][K - i - 1];
    }

    cout << "Сумма элементов на побочной диагонали: " << sum << endl;

    return 0;
}