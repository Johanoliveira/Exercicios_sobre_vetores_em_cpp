#include <iostream>
#include <locale.h>
#define Total 10

using namespace std;

float Num[Total];
int PMaiorNum, PMenorNum, Cont;

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	for(Cont=0; Cont<Total; Cont++){
		cout << " Digite o n�mero da " << Cont << "� posi��o: ";
		cin >> Num[Total];
		system("cls");
		
		switch(1){
			case (Cont==0){
				PMaiorNum = Cont;
				PMenorNum = Cont;
				break;
			}
			case Num[Cont] > Num[PMaiorNum]{
				PMaiorNum = Cont;
				break;
			}
			case Num[Cont] < Num[PMenorNum]{
				PMenorNum = Cont;
				break;
			}
		}
	}
	
	for(Cont=0; Cont<Total; Cont++){
		switch{
			case 1(Num[Cont] == MaiorNum){
				cout << " O maior n�mero � " << MaiorNum << " na posi��o " << Cont+1 << endl;
				break;
			}
			case 2(Num[Cont] == MenorNum){
				cout << " O menor n�mero � " << MenorNum << " na posi��o " << Cont+1;
				break;
			}
		}
	}
	
	return 0;
}
