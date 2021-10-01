//primeiro teste em C++
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


int iniciador (){

    cout << "O programa deu certo, parabens eu sei funcao \n";
    return 0;
} 


int main(int argc, char const *argv[])
{

    string texto = "Estou escrevendo uma string que legal \n";


//novidade de c++

        cout <<"Iniciando programa \n";
        cout << texto;
        system("pause");
        iniciador();



//funçoes do C
    printf("teste do printf \n");


    return 0;
}
