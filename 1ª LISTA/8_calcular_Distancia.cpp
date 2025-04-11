/* Crie um programa que leia a velocidade média de um carro 
e o tempo de viagem, e calcule a distância percorrida 
utilizando a fórmula: Distância = Velocidade * Tempo
*/
#include <iostream>
#include <iomanip>
using namespace std;
// Quais entradas de valores?
float distancia,velocidade,tempo;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	cout<<fixed<<setprecision(1);
	cout<<"\n\n\n\t Programa Distância Percorrida ";
	cout<<"\n\t ==========================";
	cout<<"\n\n\n Velocidade: ";
	cin>>velocidade;
	cout<<"\n Tempo: ";
	cin>>tempo;
	distancia = velocidade * tempo;
	cout<<"\n Distância percorrida: "<<distancia;
	cout<<" km";
}