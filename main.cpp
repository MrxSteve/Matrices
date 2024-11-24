#include <iostream>
using namespace std;

int main()
{

    //int matriz[fila][columna];
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matriz2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Lo mismo que lo de arriba
    // int matriz3[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Imprimir matriz
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << matriz[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Lectura y escritura de una matriz

    int filas = 0;
    int columnas = 0;

    // cout << "Ingrese el numero de filas: " << endl;
    // cin >> filas;
    // cout << "Ingrese el numero de columnas: " << endl;
    // cin >> columnas;

    int matriz4[filas][columnas];

    // Entrada de datos

    // for (int i=0; i<filas; i++) {
    //     for (int j=0; j<columnas; j++) {
    //         cout << "Elemento [" << i << "][" << j << "]: ";
    //         cin >> matriz4[i][j];
    //     }
    // }

    // Salida de datos

    // cout << "Matriz: " << endl;
    //
    // for (int i=0; i<filas; i++) {
    //     for (int j=0; j<columnas; j++) {
    //         cout << matriz4[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Suma de dos matrices

    int matrizA[2][2] = {
        {1, 2},
        {3, 4}
    };

    int matrizB[2][2] = {
        {5, 6},
        {7, 8}
    };

    // Suma de matrices
    int matrizC[2][2];

    // cout << "Suma de dos matrices: " << endl;
    //
    // for (int i=0; i<2; i++) {
    //     for (int j=0; j<2; j++) {
    //         matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
    //     }
    // }

    // cout << "El resultado de la suma es: " << endl;
    //
    // for (int i=0; i<2; i++) {
    //     for (int j=0; j<2; j++) {
    //         cout << matrizC[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Multiplicacion de matrices

    int matrizD[2][2] = {
        {1, 2},
        {3, 4}
    };

    int matrizE[2][2] = {
        {5, 6},
        {7, 8}
    };

    // producto
    int matrizF[2][2] = {0};

    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            for (int k=0; k<2; k++) {
                matrizF[i][j] += matrizD[i][k] * matrizE[k][j];
            }
        }
    }

    // Salida de datos
    // for (int i=0; i<2; i++) {
    //     for (int j=0; j<2; j++) {
    //         cout << matrizF[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Determinante de una matriz

    int matrizDeterminante[2][2] = {
        {1, 2},
        {3, 4}
    };

    int determinante = 0;

    determinante = (matrizDeterminante[0][0] * matrizDeterminante[1][1])
    - (matrizDeterminante[0][1] * matrizDeterminante[1][0]);

    cout << "Determinante: " << determinante << endl;

    return 0;
}
