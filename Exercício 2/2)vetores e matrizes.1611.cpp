#include <iostream>
#include <locale.h>
#include <math.h>
#define total 15
using namespace std;

int Num[total], Cont;

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	for(Cont=0; Cont < total; Cont++){
		cout << " Digite um n�mero: ";
		cin >> Num[Cont];
		system("cls");
	}
	
	cout << "***** POSI��ES DOS N�MEROS DIGITADOS *****" << endl;
	
	for(Cont=0; Cont < total; Cont++){
		cout << "Posi��o"<< Cont+1 << ": " << Num[Cont] << endl;
	}
	
	cout <<endl <<  "***** POSI��ES DE N�MEROS DIGITADOS IGUAIS A 30 *****" << endl;
	
	for(Cont=0; Cont < total; Cont++){
		if(Num[Cont] == 30){
			cout << "Posi��o " << Cont+1 << endl;
		}
	}
	
	
	

	return 0;
}

