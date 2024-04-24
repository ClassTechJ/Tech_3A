#include <iostream>
using namespace std;

int main(){
    int Op;
    double N1, N2, Sum, Rest, Mult, Div;
    cout << "ingrese su primer numero: " << endl;
    cin >> N1;
    cout << "ingrese su segundo numero: " << endl;
    cin >> N2;
    cout << "Seleccione la operacion a realizar, mediante el numero." << endl;
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
    }
    system("pause");
    return 0;
}
