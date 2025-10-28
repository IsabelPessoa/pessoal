#include <iostream>
using namespace std;
const int tamanho = 4;

int main (){
    int matriz[tamanho][tamanho];
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if(i == j){
                matriz[i][j] = 1;
            }
            else
                matriz[i][j] = 0;
        }
    }
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < tamanho; i++){
        for(int j = tamanho-1; j >= 0; j--){
            cout << matriz[j][i] << " ";
        }
        cout << endl;
    }



    return 0;
}