#include <iostream>
using namespace std;

int main(){
	int I, Num[5];
	
	for(I=0; I<5; I++){
		cout<<"Digite o numero "<< I <<": \n";
		cin>> Num[I];
		}
	
	for(I=0; I<5; I++){
		cout<<"Os numeros digitados na posicao "<< I<< " foi o :"<< Num[I] << endl;
		}
	
	return 0;
}
