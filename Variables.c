#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeroUno = 7;
	int numeroDos = 4;
	int numeroTres = 6;
	int resultadoSuma = 0;
	int resultadoMultiplicacion = 0;
	int numeroCuatro = 6;
	int numeroCinco = 2;
	float resultadoDivision;
	
	char caracterM = 'M';
	char caracterA = 'A';
	char caracterR = 'R';
	char caracterC = 'C';
	char caracterO = 'O';
	
	resultadoSuma = numeroUno + numeroDos;
	
	printf("El resultado de sumar %i + %i es: %i",numeroUno, numeroDos, resultadoSuma);
	
	resultadoMultiplicacion = numeroUno * numeroDos * numeroTres;
	
	printf("\nEl resultado de multiplicar %i * %i * %i = %i", numeroUno, numeroDos, numeroTres, resultadoMultiplicacion);
	
	resultadoDivision = numeroCuatro / numeroCinco;
	
	printf("\nEl resultado de dividir %i / %i = %.3f", numeroCuatro, numeroCinco, resultadoDivision);
	
	
	printf("\n%c%c%c%c%c", caracterM, caracterA, caracterR, caracterC, caracterO);
	
	return 0;
}
