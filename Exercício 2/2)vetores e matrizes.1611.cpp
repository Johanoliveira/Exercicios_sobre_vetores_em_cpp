#include <iostream>
#include <locale.h>
#include <math.h>
#define total 15
using namespace std;

int Num[total], Cont;

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	for(Cont=0; Cont < total; Cont++){
		cout << " Digite um número: ";
		cin >> Num[Cont];
		system("cls");
	}
	
	cout << "***** POSIÇÕES DOS NÚMEROS DIGITADOS *****" << endl;
	
	for(Cont=0; Cont < total; Cont++){
		cout << "Posição"<< Cont+1 << ": " << Num[Cont] << endl;
	}
	
	cout <<endl <<  "***** POSIÇÕES DE NÚMEROS DIGITADOS IGUAIS A 30 *****" << endl;
	
	for(Cont=0; Cont < total; Cont++){
		if(Num[Cont] == 30){
			cout << "Posição " << Cont+1 << endl;
		}
	}
	
	
	

	return 0;
}

