#include <iostream>
#include <locale.h>
#define Total 10

using namespace std;

int A[Total], M[Total], X, Cont;

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	for(Cont=0; Cont < Total; Cont++){
		cout << "Digite o " << Cont+1 << "� n�mero a ser processado: ";
		cin >> A[Cont];
		cout << endl;
			system("cls");
	}
	
	cout << " Digite um n�mero para ser multiplicado pelos n�meros anteriores: ";
	cin >> X;
	
	system("cls");
	
	for(Cont=0; Cont < Total; Cont++){
		M[Cont] = A[Cont] * X;
		
		cout << A[Cont] << " x " << X << " = " << M[Cont] << endl;
	}
	
	return 0;
}
