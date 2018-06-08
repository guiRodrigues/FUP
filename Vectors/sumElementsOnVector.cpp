//
// Created by guilherme on 08/06/18.
//

#include <iostream>

using namespace std;

void FillVector( int *vector, int size ){
    for(int i=0; i<size; i++) cin >> vector[i];
}

int sumElements( int *vector, int size ){
    int sum=0;
    for(int i=0; i<size; i++) sum+=vector[i];
    return sum;
}

int main(){

    int size=0;
    cout << "Insira o tamanho do vetor";
    cin >> size;

    int *vector = nullptr;
    vector = new int [size];
    FillVector(vector, size);
    cout << endl << sumElements(vector, size);

    return 0;
}