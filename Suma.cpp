#include <iostream>
using namespace std;
//Cambio de nombre y correo
    int arreglo[]={1,2,3,4,5,6,7,8,9,10};
    int *Puntero;
    int suma, promedio;
int main(){
    Puntero = &arreglo[0];
    for(int i=0; i<10; i++){
        cout << "Valor " << arreglo[i] << endl;
        suma=suma+*Puntero++;
    }
    promedio = suma/10;
    cout << "La suma es: " << suma <<endl;
    cout << "El promedio es: " << promedio;

    return 0;
}
