#include <iostream>
#include <locale.h>
#define Total 10

using namespace std;

float Num[Total];
int PMaiorNum, PMenorNum, Cont;

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	for(Cont=0; Cont<Total; Cont++){
		cout << " Digite o número da " << Cont+1 << "° posição: ";
		cin >> Num[Total];
		system("cls");
		
		if(Cont==0){
			PMaiorNum = Cont;
			PMenorNum = Cont;
		}
		if(Num[Cont] > Num[PMaiorNum]){
			PMaiorNum = Cont;
		}
		if(Num[Cont] < Num[PMenorNum]){
			PMenorNum = Cont;
		}
	}
	
	for(Cont=0; Cont<Total; Cont++){
		
		if(Num[Cont] == PMaiorNum){
			cout << " O maior número é " << PMaiorNum << " na posição " << Cont+1 << endl;
		}
		else{
			if(Num[Cont] == PMenorNum){
				cout << " O menor número é " << PMenorNum << " na posição " << Cont+1;
			}
		}
	}
	return 0;
}
