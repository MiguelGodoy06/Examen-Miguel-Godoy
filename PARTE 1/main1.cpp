#include <iostream>
#include "main1.h"
using namespace std;

int main() {
int numero;
    cout<<"Ingrese un número: ";
    cin>>numero;

    if (numero!=0) {
        if(numero>0) {
            cout<<"El número ingresado "<<numero<<" es positivo."<<endl;
        }
        if(numero<0) {
            cout<<"El número ingresado "<<numero<<" es negativo."<<endl;
        }
    }
else {
    cout<<"El número ingresado "<<numero<<endl;
}



    return 0;
}