#include "pch.h"
#include <iostream>
#include <stdlib.h>

using namespace System;
using namespace std;

void Ejercicio1(int num1, int num2) {
    int num1;
    int num2;
    int resultado;
    cout << "INGRESE EL PRIMER NUMERO" << endl;
    cin >> num1;
    cout << "INGRESE EL SEGUNDO NUMERO" << endl;
    cin >> num2;
    resultado = num1 + num2;
    printf( resultado + "es el res");

}

int main()
{
    int menu = 0;
    //Variables para ejercicios
    int b1=0, b2=0;//Ejercicio1
    cout << "hola mundo!" << endl;
    cout << "A donde quiere ir? \n 1.Ejercicio 1 \n 2.Ejercicio 2 \n 3.Ejercicio 3 \n 4.Salir " << endl;
    try
    {
        cin >> menu;
    }
    catch (const std::exception&)
    {
        cout << "No se puede evaluar su opcion" << endl;
    }
    if (menu==1)//Ejercicio1
    {
        Ejercicio1(b1, b2);
    }
    /*
    else if (menu == 2)//Ejercicio2
    {
        Ejercicio2();
    }
    else if (menu == 3)//Ejercicio3
    {
        Ejercicio3();
    }
    else if (menu == 4)//Salir
    {
        exit;
    }*/
    return 0;
}
/*
void Ejercicio2() {


}
void Ejercicio3() {


}
*/




