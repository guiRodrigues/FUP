//
// Created by guilherme on 08/06/18.
//

#include <iostream>

using namespace std;

void FillVector( int *search, int amount ){
    for(int i=0; i<amount; i++) cin >> search[i];
}

void PrintVector( int *search, int amount ){
    for(int i=0; i<amount; i++) cout << search[i] << " ";
}

void FillMatrix( int **matrix, int lines, int columns ){
    for(int lin=0; lin<lines; lin++)
        for(int col=0; col<columns; col++)
            cin >> matrix[lin][col];
}

int Bingo( int *search, int amount, int **matrix, int lines, int columns ){
    int helper=0;
    bool secondBreak=false;
    for(int i=0; i<amount; i++){
        for(int lin=0; lin<lines; lin++){
            for(int col=0; col<columns; col++){
                if( search[i] == matrix[lin][col] ){
                    helper++;
                    secondBreak=true;
                    break;
                }
            }
            if( secondBreak ) break;
        }
        secondBreak = false;
    }
    return helper;

}

int main(){

    int amount=0, lines=0, columns=0;

    // Fill the vector of elements to be found
    cout << "Input the amount of element to be found:" << endl;
    cin >> amount;
    int *search=NULL;
    search = new int[amount];
    cout << "Now you need fill the vector:" << endl;
    FillVector(search, amount);
    // PrintVector(search, amount);

    // Fill the matrix
    cout << "Input the lines of the matrix:";
    cin >> lines;
    cout << "Input the columns of the matrix";
    cin >> columns;
    int **matrix = NULL; // nullptr
    matrix = new int * [lines];
    for(int lin=0; lin<lines; lin++)
        matrix[lin] = new int [columns];
    cout << "Now you need fill the matrix:" << endl;
    FillMatrix(matrix, lines, columns);

    // The BINGO!!!
    cout << "\n\n" << Bingo(search, amount, matrix, lines, columns) << "\n\n\n";

    return 0;
}