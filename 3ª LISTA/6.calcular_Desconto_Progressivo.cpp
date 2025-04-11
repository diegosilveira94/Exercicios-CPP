/* Escreva um programa que receba o valor de uma compra 
e aplique um desconto de acordo com o seguinte critério:
a. Se o valor for menor que 100, o desconto é de 5%.
b. Se o valor for entre 100 e 500, o desconto é de 10%.
c. Se o valor for maior que 500, o desconto é de 15%. 
*/
#include <iostream>
#include <iomanip>
using namespace std;
float valor, resultado;
main()
{
	system("chcp 65001"); //Para acentuar as palavras
	system("cls"); // Limpar a tela
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t Programa Desconto Progressivo";
	cout<<"\n\t ==========================\n\n\n";
	cout << "\n\nValor: ";
	cin>>valor;
		if (valor < 100) {
			resultado = valor * 0.95;
			cout << "\nO valor com desconto de 5% ficou: " << resultado;
		}
		else if (valor >= 100 && valor <= 500) {
			resultado = valor * 0.90;
			cout << "\nO valor com desconto de 10% ficou: " << resultado;
		}
		else {
			resultado = valor * 0.85;
			cout << "\nO valor com desconto de 15% ficou: " << resultado;
		}
		

	cout<<"\n\n\n";
}