#ifndef SCULPTOR_H
#define SCULPTOR_H

#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * @brief Estrutura para os blocos
 */
struct Voxel{
    float red,green,blue; //Cores.
    float alpha;    //Transparência.
    bool isOn; //incluir ou não.
};

/**
 * @brief Classe para moldar
 */
class Sculptor{
private:
    Voxel ***v;//Matriz 3D.
    int nl,nc,np;//Dimensões.
    float r,g,b,a;//Cores.
public:
    /**
     * @brief Alocação da Matriz 3D
     */
    Sculptor(int _nx=0, int _ny=0, int _nz=0);
    //Liberar a memória utilizada.
    ~Sculptor();
    /**
     * @brief Atribuir as cores
     */
    void setColor(float _r, float _g, float _b, float alpha);
    /**
     * @brief Criar o Voxel
     */
    void putVoxel(int x, int y, int z);
    /**
     * @brief Cortar o Voxel
     */
    void cutVoxel(int x, int y, int z);
    /**
     * @brief Cria uma sequência de Voxels em forma de caixa
     */
    void putBox(int x0, int y0, int z0, int x1, int y1, int z1);
    /**
     * @brief Corta uma sequência de Voxels em forma de caixa
     */
    void cutBox(int x0, int y0, int z0, int x1, int y1, int z1);
    /**
     * @brief Cria uma sequência de Voxels em forma de esfera
     */
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief Corta uma sequência de Voxels em forma de esfera
     */
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief Cria uma sequência de Voxels em forma de elipsoide
     */
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief Corta uma sequência de Voxels em forma de elipsoide
     */
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief Cria arquivo para leitura do desenho, contendo as dimensões e as cores
     */
    void writeOFF(string filename);
    /**
     * @brief Cria um arquivo para armazenar quantidades de poligonos,vertices e posições
     */
    void writeVECT(string filename);
};
#endif // SCULPTOR_H
