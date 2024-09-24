#include <iostream>
#include <locale.h>
#define total 100

using namespace std;

int Tam, ContPares, ContImpares, Resp, Num[total], Cont;
char NumPI[total];

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	Tam = -1;
	ContPares = 0;
	ContImpares = 0;
	
	do{
		Tam++;
		
		cout << " Digite um número: ";
		cin >> Num[Tam];
		cout << endl;
		
		if(Num[Tam] % 2 == 0){
			ContPares++;
			NumPI[Tam] = 'P';
		}
		else{
			ContImpares++;
			NumPI[Tam] = 'I';
		}
		
		cout << " Quer ler mais um número?(1 para sim e qualquer outra tecla para não): ";
		cin >> Resp;
		system("cls");
	}while(Resp == 1);
	
	cout << " ***** NÚMEROS PARES *****" << endl;
	cout << "Quantidade: " << ContPares << endl;
	
	for(Cont = 0; Cont <= Tam; Cont++){
		if(NumPI[Cont] == 'P'){
			cout << Num[Cont] << endl;
		}
	}
	
	cout << " ***** NÚMEROS ÍMPARES ***** ";
	cout << " Quantidade: " << ContImpares << endl;
	
	for(Cont = 0; Cont <= Tam; Cont++){
		if(NumPI[Cont] == 'I'){
			cout << Num[Cont] << endl;
		}
	}
	
	return 0;
}

