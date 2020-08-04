#include <iostream>

using namespace std;

int main()
{
    int numero=0;                       //Aqui le damos un valor inicial a la variable "numero"
    cout<<"$:";                         //Imprime "numero" para pedir un valor
    cin>>numero;                        //Asigna una variable a "numero"
    for (int i = 2; numero >= i; i++)   //el valor inicial de "1" es 2; y se rompe hasta "1" llega a pasarse del valor de "numero"
    {

        while(numero % i == 0)          //Aqui si no da cero, sigue el ciclo hasta que el resultado sea 0
        {

            cout<<i<<" x ";             //Se muestra el resultado en pantalla seguido del "x"
            numero /= i;                //Aqui se divide el "numero" sobre "1"
        }

    }
}