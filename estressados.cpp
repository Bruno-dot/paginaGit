#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <iterator>

//Sinto muito não lembrava de como organizar o codigo

using namespace std; 

bool existe(vector<int> fila, int x){
    int buscar = x;
    int Y = fila.size();

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


int contador(vector<int> fila, int x){
    int contar = x;
    int Y = fila.size();
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


int localizador(vector<int> fila, int x){
    int ref = x;
    int Y = fila.size();

    for (int i = -1; i <= Y; i++)
    {
        if (fila[i] == ref)
        {
             cout << "O numero ocupa a posicao " << i << "\n";
             return 1;  
        }
    }
    
    cout << "O numero nao ocupa nenhuma posicao\n";
    return 0;
}


int procura_apartir(vector<int> fila, int x,int inicial){
    int buscar = x;
    int Y = fila.size();
    int Z = inicial;

    for (int i = Z; i <= Y; i++)
    {
        if (fila[i] == buscar)
        {
             cout << "O numero ocupa a posicao " << i << "\n";
             return 1;  
        }
    }
    
    cout << "O numero nao ocupa nenhuma posicao\n";
    return 0;
} 


int menor(vector<int> fila){

int X;
int Y = fila.size();
int Z = fila[0];
for (int i = 0; i <= Y; i++)
{
    X = fila[i];
    if (X < Z)
    { Z = X; }
}

cout << "O menor numero é o: " << Z << "\n";
}


int menorPos(vector<int> fila){
int W = 0;
int X;
int Y = fila.size();
int Z = fila[0];

for (int i = -1; i <= Y; i++)
{
    X = fila[i];
    if (X < Z)
    { 
        Z = X; 
        W = i;  
    }
}

cout << "A posicao do  menor numero e : " << W << "\n";
}


int menorApart(vector<int> fila, int inicial) {
    int X;
    int Y = fila.size();
    int Z = inicial;
    int W = fila[Z];
    int V;

    for (int i = Z; i <= Y; i++)
    {
        X = fila[i];
        if (X <= W)
        {   
            W = X;
            V = i;
        }
    }
    
    cout << "A posicao do menor numero e: " << V << "\n";
    return 0;
}


int homemCalm(vector<int> fila){
    int x;
    int y = fila.size();
    int w = fila[0];
    int v;
    for (int i = -1; i <= y; i++)
    {
        x = fila[i]; 
        if (x <= w && x > 0)
        {
            w = x;
            v = i;
        }
        
    }
    
    if (v == -1)
    {
        cout << "Nao a homens na lista";
        return -1;
    } else 
    {
        cout << "A posicao do homem mais calmo e: " << v << "\n";
        return 0;
    }
    
}
 

int stressMed(vector<int> fila){
    int x;
    int y = fila.size();
    int z = 0;


    for (int i = 0; i < y; i++)
    {   
        x = fila[i];
        if (x > 0){
            z = z + x;
        } else if (x < 0)
        {
            z = z + (x*-1);
        }
    }   

    cout << "A media de stress e: " << z/fila.size() << "\n";
    
return 0;
}


int HomenOuMulhe(vector<int> fila){
    
    
    int v;
    int M = 0;
    int F = 0;
    int z = fila.size();

    for (int i = 0; i < z ; i++)
    {
        v = fila[i];
        if (v < 0)
        { F++; }

        if (v > 0)
        { M++; }

    }
        if (M > F)
        {
            cout << "Existe mais homens do que mulheres" << "\n";
        } else if (F > M) 
        {
            cout << "Existe mais mulheres do que homens" << "\n";
        }
        

        return 0;   

}


int metadeMais(vector<int> fila){

    int x;
    int y = 0;
    int z = 0;
    int part2 = fila.size()/2;

    for (int i = 0; i < fila.size()/2; i++)
    {
       x = fila[i];
       if (x > 0)
       {
           y = y + x;
       } else if (x < 0)
       {    
           y = y + (x*-1);
       }
    }

    for (int i = part2; i < fila.size(); i++)
    {
       x = fila[i];
       if (x > 0)
       {
           z = z + x;
       } else if (x < 0)
       {    
           z = z + (x*-1);
       }
    }
    
    if (y > z)
    {
        cout << "A primeira metade e mais estressada" << "\n";
    } else 
    {
        cout << "A segunda metade e a mais estressada" << '\n';
    }

   return 0;

}



 
int main(int argc, char const *argv[])
{



int A,B,C;


A = -1;
B = 3;
C = -99;
vector<int> fila = {5,-3,-1,-50,-1,-10,1, -5};


// escolha aqui a função que deseja;
contador(fila, A);
system("Pause");



(void)argc;
(void)argv;
return 0;
}

