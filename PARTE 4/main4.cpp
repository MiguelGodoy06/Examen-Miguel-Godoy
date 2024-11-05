#include "main4.h"
#include <iostream>
using namespace std;

int main () {
    //Primero pido los precios de los tres artículos y marco las variables de los precios de dichos productos:

    float precio1; //Tomo variables tipo float por si el número no es entero
    float precio2;
    float precio3;
float preciofinal;
    cout<<"Ingrese el primer precio: ";
    cin>>precio1;
    cout<<"\nIngrese el segundo precio: ";
    cin>>precio2;
    cout<<"\nIngrese el tercer precio: ";
    cin>>precio3;
//Con el siguiente código buscaremos el precio más barato, para así sumar directamente los demás, más sencillo que buscar los dos más caros.
        if (precio3<precio2&&precio1) {  //Buscamos si el precio 3 es más barato que el 2 y el 1, y si es así sumamos el precio final que será el precio1 + el precio 2.
            preciofinal = (precio1 + precio2);
        }
    else {
        if(precio2<precio1&&precio3) { //Hago lo mismo que en el anterior if
            preciofinal= precio1+precio3;
        }
        else { //En este caso como solo queda el caso en el que el precio 1 es el más barato, pongo directamente la suma entre los precios 2 y 3.
            preciofinal= precio2+precio3;
        }

    }

cout<<"El precio final con la promoción será de "<<preciofinal<<"$"<<endl;  //Una vez comprobado cual es el más barato y así poder sumas los dos artículos más caros, ponemos el precio final (no tengo el símbolo de euros en este portatil solo el de dolares).






    return 0;
}