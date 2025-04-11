/* Peça ao usuário para escolher entre várias formas geométricas (quadrado, retângulo, círculo) e calcule a área e o perímetro da forma escolhida.
Para um quadrado: área = lado², perímetro = 4 × lado
Para um retângulo: área = comprimento × largura, perímetro = 2 × (comprimento + largura)
Para um círculo: área = π × raio², perímetro = 2 × π × raio
*/
#include <iostream> //biblioteca C++
using namespace std;
float area,comprimento,perimetro,lado,largura, n_pi, raio;
int forma;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	n_pi = 3.14159265358979323846;
	cout<<"\n\n\n\t Programa Área e Perímetro da Forma ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\n[1]-Quadrado\n[2]-Retângulo\n[3]-Círculo\n\nEscolha uma opção --> ";
	cin>>forma;
		switch(forma)
		{
			case 1: {// Caso escolha o quadrado
				cout<<"\nLado: ";
				cin>>lado;
				area = lado * lado;
				perimetro = 4 * lado;
				cout<<"Área: "<<area; 
				cout<<"\nPerímetro: " <<perimetro;
				break;}
			case 2: {// Caso escolha o retangulo
				cout<<"\nComprimento: ";
				cin>>comprimento;
				cout<<"\nLargura: ";
				cin>>largura;
				area = comprimento * largura;
				perimetro = 2 * (comprimento + largura);
				cout<<"\nÁrea: "<<area; 
				cout<<"\nPerímetro: " <<perimetro;
				break;}
			case 3: {// Caso escolha o circulo
				cout<<"\nRaio: ";
				cin>>raio;
				area = comprimento * largura;
				perimetro = 2 * (comprimento + largura);
				cout<<"\nÁrea: "<<area; 
				cout<<"\nPerímetro: " <<perimetro;
				break;}
			default: // Caso digite outra coisa
				cout<<"Você não escolheu a opção correta\n\n\n\n";
	}
		cout<<"\n\n\n\n";			
}