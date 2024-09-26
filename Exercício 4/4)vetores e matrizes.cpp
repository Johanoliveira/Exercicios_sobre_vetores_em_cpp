#include <iostream>
#include <locale.h>
#define Total 6

using namespace std;

float Num1[Total], Num2[Total], Mult[Total];
int Cont;

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	cout << " ***** MULTIPLICADOR DE NÚMEROS *****" << endl;
	
	for(Cont=0; Cont<Total; Cont++){
		cout << " Digite um número: ";
		cin >> Num1[Cont];
		cout << endl << " Digite um número a ser multiplicado por " << Num1[Cont] << " : ";
		cin >> Num2[Cont];
		
		Mult[Cont] = Num1[Cont] * Num2[Cont];
		
		system("cls");
	}
	
	cout << " ***** RESULTADOS ***** " << endl;
	
	for(Cont=0; Cont<Total; Cont++){
		cout << Num1[Cont] << " x " << Num2[Cont] << " = " << Mult[Cont] << endl;
	}
	
	return 0;
}
