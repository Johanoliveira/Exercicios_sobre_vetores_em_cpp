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
		
		cout << " Digite um n�mero: ";
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
		
		cout << " Quer ler mais um n�mero?(1 para sim e qualquer outra tecla para n�o): ";
		cin >> Resp;
		system("cls");
	}while(Resp == 1);
	
	cout << " ***** N�MEROS PARES *****" << endl;
	cout << "Quantidade: " << ContPares << endl;
	
	for(Cont = 0; Cont <= Tam; Cont++){
		if(NumPI[Cont] == 'P'){
			cout << Num[Cont] << endl;
		}
	}
	
	cout << " ***** N�MEROS �MPARES ***** ";
	cout << " Quantidade: " << ContImpares << endl;
	
	for(Cont = 0; Cont <= Tam; Cont++){
		if(NumPI[Cont] == 'I'){
			cout << Num[Cont] << endl;
		}
	}
	
	return 0;
}

