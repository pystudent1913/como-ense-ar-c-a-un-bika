#include <iostream>
using namespace std;


// no retorna nada ni recibe nada
void imprimir_problema () {
	cout << "Bienvenido aqui haremos el siguiente problema" << endl;

	cout << " (a)! / ( (a+1)! + (a+2)! ) " << endl;

	cout << "a continuacion introduzca un valor " <<endl;

	cout << "-> ";
}

// no retorna nada pero si recibe
void imprimir_factorial (int a) {
	cout<<"============ El resultado es =============" <<endl;
	cout << "\t\t" << a << endl;
	cout<<"=========================================="<< endl;
}


// retorna un numero y recibe un numero
int hallar_factorial (int a){
	int acum =1;
	for (int i=1; i <= a; i++) {
		acum *= i;
	}
	return acum;
}

int main() {
	int base = 0, resultado;
	imprimir_problema();
	cin >> base;
	resultado = hallar_factorial(base);
	imprimir_factorial(resultado);
}