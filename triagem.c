#include<stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(65001);
	char pedido, tipo;
	int senha = 0;
	do{
	printf("Possui pedido de exame (s/n)\n");
	scanf(" %c", &pedido);
	if(pedido == 's'){
		senha++;
		printf("Sua senha é %d\n", senha);
		printf("a = admissional\n");
		printf("d = demicional\n");
		printf("p = periódico\n");
		printf("o = outro\n");
		scanf(" %c", &tipo);
		if(tipo == 'a') printf("Encaminhe-se à sala 1\n");
		else if (tipo == 'd') printf("Encaminhe-se à sala 2\n");
		else if (tipo == 'p') printf("Encaminhe-se à sala 3\n");
		else printf("Encaminhe-se à sala 4\n");
	}
	}while (pedido == 's');
	printf("Volte para a sua empresa.\n");
	getch();
	return 0;
	
}