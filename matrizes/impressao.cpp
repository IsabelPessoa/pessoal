#include <iostream>
using namespace std;
int tamanho = 4;

/*

1   2   3   4  
5   6   7   8
9   10  11  12
13  14  15  16

13  9   5   1
14  10  6   2
15  11  7   3
16  12  8   4

*/

int main (){
    int matriz [tamanho][tamanho], cont = 1;
    for (int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            matriz[i][j] = cont;
            cont++;
        }
    }
    
    for(int i = 0; i < tamanho; i++){
        for(int j = tamanho-1; j > 0; j--){
            cout << matriz[j][i] << "\t";
        }
        cout << endl;
    }



    return 0;
}