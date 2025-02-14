
#include<iostream>
using namespace std;

int main() {
    // Variables
    int a, b; // Declaración de variables
    int c = 10; // Asignación de valor a una variable
    string nombre;
    string saludo = "Hola mundo";

    // Salida por pantalla
    cout << saludo << endl;
    cout << "Ingrese su nombre: ";

    // Entrada por teclado
    cin >> nombre;
    cout << "Hola " << nombre << endl;

    // Estructuras de control
    if (c > 15){
        cout<< "Aprobado" << endl;
    }else {
        cout << "Estructura de control While"<<endl;
        while(c<15){
            cout << "Reprobado";
            c++;
        }
        cout << "Reprobado" << endl;
        c++;
    }

    cout <<"Estructura de control FOR" <<endl;
    for (int i=0; i<10; i++) {
        cout << "hola - ciclo # "<<i<<endl;
    }
    int numero;
    cout << " Ingrese su numero menor que 10 ";
    cin >>numero;

    if (numero<5) {
        for (int i=0; i <=numero; i++) {
            cout << " Ciclo # "<< i <<endl;
        }
        cout << "Reprobado";
    }else {
        cout << "Aprobado";
    }
    cout << endl;
    cout <<"Tablas de multiplicar del 4 y del 6" <<endl;
    //Tabla de multiplicar del 4
    cout << "Tabla de multiplicar del 4" << endl;
    for (int i=1; i<11; i++) {
        cout << "4 * " << i << " = " <<4*i << endl;

    }
    cout << endl;
    //Tabla de multiplicar del 6
    cout << "Tabla de multiplicar del 6" << endl;
    for (int i=1; i<11; i++) {
        cout << "6 * " << i << " = " <<6*i << endl;
    }
    int n;
    long long factorial = 1;

    cout << "Ingrese un numero para calcular su factorial";
    cin >> n;

    if (n < 0)
        cout << "Error, El numero factorial de un numero negativo no existe";
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial de " << n << " = " << factorial;
    return 0;
    }

}