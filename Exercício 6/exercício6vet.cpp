#include <iostream>
#include <locale.h>


using namespace std;
float Y[10], X[10];
int main () {
	setlocale (LC_ALL,"Portuguese");
	for(int Cont=0; Cont <= 9; Cont++) {
		cout<<"Insira o "<<Cont+1<<"º valor de X: \n";
		cin>>X[Cont];
		Y[9-Cont] = X[Cont];
		system("cls");

	}
	for(int Cont=0; Cont <= 9; Cont++){
		cout<<Y[Cont]<<"; ";
	}

	return 0;
}
