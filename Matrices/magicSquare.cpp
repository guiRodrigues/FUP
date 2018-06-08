//
// Created by guilherme on 08/06/18.
//



/*


	{?????????} how does it work?


*/





#include <iostream>

using namespace std;

void FillMatrix( int **matrix, int lines, int columns ){
    for(int lin=0; lin<lines; lin++)
        for(int col=0; col<columns; col++)
            cin >> matrix[lin][col];
}

bool MagicSquare( int **matrix, int lines, int columns ){
    int lineSum=0, columnSum=0, diagonalSum=0, helper=0;
    if( lines==columns ){

        /*
        for(int lin=0; lin<lines; lin++){
            for(int col=0; col<columns; col++){

            }
        }
        */

        // Sum of lines
        for(int col=0; col<columns; col++){
            for(int lin=0; lin<lines; lin++){
                if( col == 0 ){
                    lineSum+=matrix[lin][col];
                    cout << "lineSum: " << lineSum << endl;
                }

                else{
                    helper+=matrix[lin][col];
                    cout << "helper lineSum: " << helper << endl;
                }
            }
        }

        // Sum of columns
        for(int lin=0; lin<lines; lin++){
            for(int col=0; col<columns; col++){
                if( lin == 0 ){
                    columnSum+=matrix[lin][col];
                    cout << "columnSum: " << columnSum << endl;
                }
                else{
                    helper+=matrix[lin][col];
                    cout << "helper columnSum: " << helper << endl;
                }
            }
        }

        // Sum of main diagonal
        for(int i=0; i<lines; i++){
            diagonalSum+=matrix[i][i];
        }

        cout << "Diagonal Sum: " << diagonalSum << endl;

        cout << "\n\n\n\n" << lineSum << " ~ " << columnSum << " ~ " << diagonalSum << endl;

        if( (lineSum == columnSum) && (columnSum == diagonalSum)  ) return true;
        else return false;

    }
    else return false;
}

int main(){

    int lines=0; int columns=0;
    cout << "Input the lines of the matrix:";
    cin >> lines;
    cout << "Input the columns of the matrix:";
    cin >> columns;
    int **matrix = nullptr;
    matrix = new int * [lines];
    for(int lin=0; lin<lines; lin++)
        matrix[lin] = new int [columns];
    FillMatrix(matrix, lines, columns);


    // Is a magic square???
    if( MagicSquare( matrix, lines, columns ) ) cout << "Is a magic square!";
    else cout << "Is not a magic square";

    return 0;
}