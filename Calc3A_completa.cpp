/* El siguiente código hace uso del condicional If-else para llevar a cabo las operaciones basicas
de acuerdo a un numero que introduzcamos.
1 la operacion sera suma.
2 la operación sera resta.
3 la operación sera multiplicación.
4 la operación sera división. */
#include <iostream>
using namespace std;

int main(){
    int Op; // variable que guarda la eleccion de operacion que haremos.
    double N1, N2; // las variables N1 y N2 son los 2 numeros que seran ingresados via tecleado.
    double Sum, Rest, Mult, Div;  // Estas variables guardaran la operación correspondiente.
    cout << "ingrese su primer numero: " << endl;
    cin >> N1;
    cout << "ingrese su segundo numero: " << endl;
    cin >> N2;
    cout << "Seleccione la operacion a realizar, introduzca el numero correspondiente a la operacion." << endl;
    cout << "1.- Sumar." << endl;
    cout << "2.- Restar." << endl;
    cout << "3.- Multiplicar." << endl;
    cout << "4.- Dividir." << endl;
    cin >> Op;
    if (Op == 1){
        Sum = N1 + N2;
        cout << "La suma es igual a :" << Sum << endl;
    } 
    else if (Op == 2){
        Rest = N1 - N2;
        cout << "La Resta es igual a :" << Rest << endl;
    }
    else if (Op == 3){
        Mult = N1 * N2;
        cout << "La Multiplicacion es igual a :" << Mult << endl;
    }
    else if(Op == 4){
        Div = N1 / N2;
        cout << "La Division es igual a :" << Div << endl;
    } else {
        cout << "No existe ninguna operacion relacionada a ese numero" <<endl;
    }
    //system("pause"); // borrar estos dos simbolos (//) antes de system si van a ejecutar el codigo en Visual Studio Code.
    return 0;
}
