#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

//Sinto muito não lembrava de como organizar o codigo

using namespace std; 

bool existe(int fila[], int x){
    int buscar = x;
    int Y = sizeof(fila);

    for (size_t i = 0; i < Y; i++)
    {
        if (fila[i] == x)
        {
                cout << "O numero existe\n";
                return true;
        }
    }
    cout << "O numero nao existe\n";
    return false;
}


int contador(int fila[], int x){
    int contar = x;
    int Y = sizeof(fila);
    int vezesContadas = 0;

    for (size_t i = 0; i < Y; i++)
    {
        if (fila[i] == x)
        {
            vezesContadas++;
        }
    }
    if (vezesContadas > 0)
        {
            cout << "O numero apareceu " << vezesContadas << " vezes\n";
            return 0;
        }
    

    cout << "O numero nao apareceu nenhuma vez\n";
    return 0;
}


int localizador(int fila[], int x){
    int ref = x;
    int Y = sizeof(fila);

    for (size_t i = 0; i < Y; i++)
    {
        if (fila[i] == x)
        {
             cout << "O numero ocupa a posicao " << i << "\n";
             return 1;  
        }
    }
    
    cout << "O numero nao ocupa nenhuma posicao\n";
    return 0;
}



int main(int argc, char const *argv[]){
int A,B,C;

//======== Pode mudar o valor das variaveis a vontade ======
A = -1;
B = -1;
C = -99;
int fila[] = {-1,-50,-1,-99};


existe(fila, A);
system("Pause");

contador(fila, B);
system("Pause");

localizador(fila, C);
system("Pause");




    return 0;
}

