//
// Created by guilherme on 08/06/18.
//

#include <iostream>

using namespace std;

void FillMatrix( int **matrix, int lines, int columns ){
    for(int lin=0; lin<lines; lin++)
        for(int col=0; col<columns; col++)
            cin >> matrix[lin][col];
}

bool IsSymmetric( int **matrix, int lines, int columns ){
    for(int lin=0; lin<lines; lin++)
        for(int col=0; col<columns; col++)
            if( matrix[lin][col] == matrix[col][lin] ) return true;
}

int main(){

    int lines=0, columns=0;
    int **matrix = nullptr;

    // Fill Matrix
    cout << "Input the number of lines of the matrix:" << endl;
    cin >> lines;
    cout << "Input the number of columns of the matrix:" << endl;
    cin >> columns;
    matrix = new int*[lines];
    for(int lin=0; lin<lines; lin++)
        matrix[lin] = new int[columns];
    FillMatrix( matrix, lines, columns );

    // Verification
    if( IsSymmetric(matrix, lines, columns) ) cout << "IS SYMMETRIC" << endl;
    else cout << "IS NOT SYMMETRIC";

    return 0;
}