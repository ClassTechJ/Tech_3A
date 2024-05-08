/* Código de una calculadora usando condicionales
   Solo implementando suma y resta. */
#include <iostream>
using namespace std;
int main(){
  Int op, // variable (cajas) que almacena la eleccion de operacion 1 = sumar, 2 = restar.
  double N1, N2; // Variables (cajas) donde se guardaran los numeros que el usuario ingrese por teclado.   
  double Suma, Resta; // variables (cajas) donde se guardaran los resultados de las operaciones.
  cout << "Bienvenido a tu calculadora" << endl;
  cout << "Que opreacion quieres hacer?" << endl;
  cout << "1.- Sumar." << endl;
  cout << "2.- Restar." << endl;
  cout << "Selecciona el numero de la operacion que quieres hacer: ";
  cin >> op;
  cout << "Por favor, ingresa el primer numero de la operacion: ";
  cin >> N1;
  cout << "Por favor, ingresa el segundo numero de la operacion: ";
  cin >> N1;
  if (op==1){
    Suma = N1 + N2;
    cout << "La sumatoria es igual a: " << Suma << endl;
  } else if (op==2) {
    Rsta = N1 - N2;
    cout << "La resta es igual a: " << Resta << endl;
  }
  return 0;
}

