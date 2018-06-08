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

int SumMatrixElements( int **matrix, int lines, int columns ){
    int response=0;
    for(int lin=0; lin<lines; lin++)
        for(int col=0; col<columns; col++)
            response+=matrix[lin][col];
    return response;
}

int main(){

    int lines=0, columns=0;
    cout << "Digite a quantidade de linhas da matriz:";
    cin >> lines;
    cout << "Digite a quantiadde de colunas da matriz:";
    cin >> columns;

    int **matrix = NULL;

    matrix = new int*[lines];
    for(int col=0; col<columns; col++)
        matrix[col] = new int[columns];

    cout << "Agora preencha a matriz:";
    FillMatrix(matrix, lines, columns);

    cout << "\n\n\n\n" << "A soma dos elementos da matriz é: " << SumMatrixElements(matrix, lines, columns);


    return 0;
}