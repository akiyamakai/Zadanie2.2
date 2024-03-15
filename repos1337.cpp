#include <iostream>

const int SIZE = 3; 

int sumMainDiagonal(int matrix[][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += matrix[i][i];
    }
    return sum;
}

int sumSecondaryDiagonal(int matrix[][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += matrix[i][SIZE - 1 - i];
    }
    return sum;
}

int main() {
    int matrix[SIZE][SIZE] = { {1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9} };

   
    int mainDiagonalSum = sumMainDiagonal(matrix);

   
    int secondaryDiagonalSum = sumSecondaryDiagonal(matrix);

 
    std::cout << "The sum of elements on the main diagonal: " << mainDiagonalSum << std::endl;
    std::cout << "The sum of the elements on the side diagonal: " << secondaryDiagonalSum << std::endl;

    return 0;
}
