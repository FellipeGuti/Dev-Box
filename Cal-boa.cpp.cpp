#include <iostream>
using namespace std;

int main()
{
 float num1, num2, result;
 int ope;
 char nome[20];
 
	
	cout<<" Escreva seu nome: \n";
	cin>>nome;
	
	cout<<"\n Escreva o numero que se deseja calcular: \n";
	cin>>num1;
		
		cout<<"\n Proximo numero = \n";
	cin>>num2;
		
	cout<<"\n informe a operacao:\n 1 + \n 2 - \n 3 *\n 4 / \n = ";
	cin>>ope;
	
	 if(ope==1){
	result= num1 + num2;}
	
	else if(ope==2){
	result= num1 - num2;}
	
	else if(ope==3){
	result= num1 * num2;}
		
	else if(ope==4){
	result= num1/num2;} 
	
	
	cout<<"\n Entao "<<nome <<" seu resultado foi = "<< result <<"\n";
		
	system("pause");
	
	return 0;
}

