#include <iostream>
using namespace std;

int main(){
    int** ptr_int = new int*[5];

    for(int i = 0; i < 5; i++){
        ptr_int[i] = new int[5];
        for(int j = 0; j < 5; j++)
            ptr_int[i][j] = i+j;
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            cout << ptr_int[i][j] << " ";
        cout << endl;
    }

    delete[] ptr_int;

    return 0;
}