//exercicio 3.4

#include <stdio.h>
//Não há necissidade de usar essa biblioteca
// #include <stdlib.h>

//Declaração dos métodos
float conversor(float pol, float indice);
void visualizar(float pol, float indice);

//Variável contante
float const CENT = 2.54;

//Método principal
void main()
{
	//Todas essas variáveis, podiam ser declaradas na mesma linha, por serem do mesmo tipo de dado
	//A variável "cent", devia ser "CENT" por ser uma constante
	/* float cent=2.54;
	float pol;
	float indice=0.5;*/
	float pol, indice = 0.5;

	for (int i = 1; i <= 20; i++)
	{
		indice = conversor(pol, indice);
	}
}

//Método que faz a conversão
float conversor(float pol, float indice)
{
	//O valor 2.54, já havia sido atribuido a variavel constante "cent", que não foi usada
	// pol=2.54*indice;
	pol = CENT * indice;
	visualizar(pol, indice);
	indice += 0.5;

	return indice;
}

//Método para visualizar
void visualizar(float pol, float indice)
{
	printf("%.2f polegadas =  %.2f centimetros\n", indice, pol);
}