#include <cmath>
#include <iostream>
#include <cstdlib>
#include <string>
#include <sculptor.h>

using namespace std;

int main()
{
    //Exemplo que contém todos as funções
    //OBS: nas funções writeVect() e writeOFF() modificar o endereço do arquivo criado
    //OBS2: ao executar o programa esperar a mensagem "arquivo OFF salvo" para entao abrir o mesmo
    string arqOFF="arqOFF";
    string arqVECT = "arqVECT";
    Sculptor a(100,100,100);
    a.setColor(150,0,0,1);
    a.putSphere(49,49,49,50);
    a.cutEllipsoid(0,0,0,50,40,30);
    a.setColor(0.5,0.5,0.8,1);
    a.putEllipsoid(30,30,30,50,40,30);
    a.setColor(0,0.8,1,1);
    a.putBox(40,40,40,71,71,71);
    a.setColor(0,0,0,1);
    a.putVoxel(0,0,0);
    a.writeVECT(arqVECT);
    a.writeOFF(arqOFF);
    return 0;
}
