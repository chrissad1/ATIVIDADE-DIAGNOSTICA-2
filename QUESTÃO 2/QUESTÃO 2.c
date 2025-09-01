#include <stdio.h>
#include <locale.h>

int main ()  {
	double peso, altura, IMC;
	
	printf ("Qual o seu peso: ");
	scanf ("%lf", &peso);
	
	printf ("Qual a sua altura: ");
	scanf ("%lf", &altura);
	
	IMC = peso / (altura * altura);
	
	printf ("Seu IMC = %.2lf\n", IMC);
	
	if (IMC < 18.5) {
    printf("Classificacao: Abaixo do peso\n");
} else if (IMC < 25.0) {
    printf("Classificacao: Peso normal\n");
} else if (IMC < 30.0) {
    printf("Classificacao: Sobrepeso\n");
} else if (IMC < 35.0) {
    printf("Classificacao: Obesidade grau I\n");
} else if (IMC < 40.0) {
    printf("Classificacao: Obesidade grau II\n");
} else {
    printf("Classificacao: Obesidade grau III\n");
}

return 0;

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}	
