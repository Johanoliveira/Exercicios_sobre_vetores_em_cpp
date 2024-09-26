#include <iostream>
#include <locale.h>
#define Total 10

using namespace std;

float Altura[Total], Peso[Total], Alturas;
int Idade[Total], Idade60[Total], Cont;

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	for(Cont=0; Cont<Total; Cont++){
		cout << " ***** PRÁTICA DE ACOMPANHAMENTO ***** " << endl;
		cout << " Digite a idade da " << Cont+1 << "° pessoa: ";
		cin >> Idade[Cont];
		cout << endl << " Digite a altura da " << Cont+1 << "° pessoa: ";
		cin >> Altura[Cont];
		cout << endl << " Digite a peso da " << Cont+1 << "° pessoa: ";
		cin >> Peso[Cont];
		system("cls");
		
		if(Altura[Cont] >= 1.65 && Altura[Cont] <= 1.75){
			Alturas++;
		}
	}
	
	cout << " ***** ALTURAS DAS PESSOAS COM IDADE INFERIOR A 60 ANOS ***** " << endl << endl;
		
	for(Cont=0; Cont<Total; Cont++){
		if(Idade[Cont]< 60){
			cout << " Altura da pessoa " << Cont+1 << ": " << Altura[Cont] << endl;
			Idade60[Cont] = 0;
		}
		else{
			Idade60[Cont] = Idade[Cont];
		}
	}
	
	cout << endl << endl<< " ***** PESSOAS COM ALTURA ENTRE 1.65 e 1.75m ***** " << endl << endl << Alturas;
	
	cout << endl << endl << " ***** PESOS DA PESSOAS COM PESO SUPERIOR A 60Kg ***** " << endl << endl;
	
	for(Cont=0; Cont<Total; Cont++){
		if(Peso[Cont] > 60){
			cout << " Peso da pessoa " << Cont+1 << ": " << Peso[Cont] << endl;
		}
	}
	
	cout << endl << endl << " ***** PESSOAS COM MAIS DE 60 ANOS ***** " << endl << endl;
	
	for(Cont=0; Cont<Total; Cont++){
		if(Idade60[Cont] != 0){
			cout << " Idade pessoa " << Cont+1 << ": " << Idade60[Cont];
		}
	}
	
	return 0;
}
