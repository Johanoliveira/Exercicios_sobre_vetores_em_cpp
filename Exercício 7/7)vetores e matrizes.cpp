#include <iostream>
#include <locale.h>
#define Total 5

using namespace std;

int A[Total], B[Total], X[Total*2], Cont;

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	for(Cont=0; Cont<Total; Cont++){
		cout << " Digite o " << Cont+1 << "° número de A: ";
		cin >> A[Cont];
		cout << endl << " Digite o " << Cont+1 << "° número de B: ";
		cin >> B[Cont];
		
		X[Cont] = A[Cont];
		//se mudar o valor de Total mudar este valor tambem
		X[Cont+5] = B[Cont];
		
		system("cls");
	}
	
	cout << " ***** UNIÃO DE A E B ***** " << endl;
	
	for(Cont=0; Cont<Total*2; Cont++){
		cout << " Posição " << Cont+1 << " ---> " << X[Cont] << endl;
	}
	return 0;
}
