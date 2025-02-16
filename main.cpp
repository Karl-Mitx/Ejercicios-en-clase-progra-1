
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

        }

        cout << endl;
        cout << "Ingresar el numero para la serie de Fibonacci";
        int m, t1 = 0, t2 = 1, nextTerm = 0;
        cin >> m;

        cout << "Serie de Fibonacci: ";
        for (int i = 1; i <= m; i++) {
            // Imprime los primeros dos terminos
            if (i == 1) {
                cout << t1;
                continue;
            }
            if (i == 2) {
                cout << ", " << t2;
                continue;
            }
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            cout << ", " << nextTerm;
        }
        cout << endl;
        cout << "Ingrese un numero para saber si es numero primo";
        int num;
        cin >> num;
        bool primo = true;
        for (int i = 2 ;i < num ; i++) {
            if (num % i == 0) primo = false;
        }
        if (primo ==true) cout<<"Es un numero primo";
        else cout<<"No es un numero primo";

        cout << endl;
        cout << "Ingrese un numero para saber si es par o impar";
        cout << endl;
        cout << "Ingresa un numero: ";
        cin >> a;
        if (a % 2 ==0) cout<<"El numero es par";
        else
            cout<<"Es un numero impar";
        cout << endl;
        cout << "Con un numero ingresado por el usuario mostrar la tabla de multiplicar";
        cout << endl;
        do {
          cout<<"Ingrese un numero: ";
            cin>>a;
        }while ( (a<1) || (a>10) );
        for (int x=1; x<=10;x++) {
            cout<<a<< "  *  "<<x<<" = "<<a * x<<endl;
        }
        cout << endl;
        return 0;
    }