#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a;
    char b[50];
    char c[50];
    printf("Bem vindo ao jogo de Leo Salgado\n\n");
    printf("Insira o seu nome\n");
    scanf("%s",& b);
    printf("Insira sua idade\n");
    scanf("%d",& a);
    setbuf(stdin,NULL);
    printf("Insira o nome do seu amor\n");
    scanf("%s",& c);
    setbuf(stdin,NULL);
    printf("Insira a idade do seu amor\n");
    scanf("%d",& a);
    setbuf(stdin,NULL);
    printf("Calculando...\n");
    system("Cls");
    system("color 47");
    printf("%s\t e %s\t tem grandes chances de ficarem juntos\n", b, c);
}
