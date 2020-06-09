#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main ()
{
int num1, num2;
char oper;
cout<<"Digite o primeiro numero:";
cin >> num1;
cout<<"Digite o segundo numero:";	
cin>> num2;
cout<<"Digite a operacao desejada: s-soma, m-subtracao, d-divisao, n-multiplicacao, p-exponencial do primeiro numero, e-exponencial do segundo numero";
cin>> oper;
switch (oper)
{
case 's': cout<<"Soma:"<<num1+num2<<endl;
break;
case 'm': cout<<"Subtracao"<<num1-num2<<endl;
break;
case'd': if(num2==0);
cout<<"Erro";
	break;
	else(num2!=0);
	cout<<"Divisao"<<num1/num2<<endl;
	break;
case 'n': cout<<"Multiplicacao"<<num1*num2<<endl;
break;
case 'p':cout<<"Exponencial do primeiro numero"<<exp(num1)<<endl;
break;
case 'e':cout<<"Exponencial do segundo numero"<<exp(num2)<<endl;
default: cout<<"Operacao invalida";
}
}
