#include <iostream>
#include <fstream>
using namespace std;

struct Jogos{
    string nome;
    int ano_lancamento;
    string tipo;
    string classificacao;
};

int main(){
    Jogos game[4];
    char lixo;
    int Indie = 0;
    ifstream entrada("jogos.txt");
    
    for(int i = 0; i < 4; i++){
        entrada >> lixo;
        getline(entrada, game[i].nome, '\"');
        entrada >> game[i].ano_lancamento;
        entrada >> lixo;
        getline(entrada, game[i].tipo, '\"');
        entrada >> lixo;
        entrada >> game[i].classificacao;
        cout << game[i].ano_lancamento << endl;
    }
    

    for(int i = 0; i < 4; i++){
        if(game[i].tipo == "Indie"){ 
            Indie++;
        }
    }
    cout << "Contagem de Indies: " << Indie << endl;

    for(int i = 0; i < 4; i++){
        if(game[i].tipo == "Indie"){ 
            cout << game[i].nome << endl;
        }
    }

    entrada.close();
    return 0;
}