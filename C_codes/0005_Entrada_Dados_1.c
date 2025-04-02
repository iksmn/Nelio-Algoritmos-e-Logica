#include <stdio.h>
#include <conio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while((c = getchar()) != '\n' && c != EOF) {} //função para limpar a entrada do fgets
}

void ler_texto(char *buffer, int lenght)
{
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

int main ()
{
    int idade1, idade2;
    double salario1, salario2, altura1, altura2;
    char genero1, genero2;
    char nome1 [50], nome2[50];

    printf("Digite o valor da idade: ");
    scanf("%d", &idade1);
    printf("Digite o valor do salario: ");
    scanf("%lf", &salario1);
    printf("Digite o valor da altura: ");
    scanf("%lf", &altura1);
    printf("Digite o nome da pessoa: ");

    limpar_entrada();
    //fgets(nome1, 50, stdin); //stdin - standard input - entrada padrão: terminal
    //strtok(nome1, "\n");
    ler_texto(nome1, 50);

    printf("Idade - %d\n", idade1);
    printf("Salario - %.2lf\n", salario1);
    printf("Altura - %.2lf\n", altura1);
    printf("Nome - %s\n", nome1);


    printf("Digite o valor da idade: ");
    scanf("%d", &idade2);
    printf("Digite o valor do salario: ");
    scanf("%lf", &salario2);
    printf("Digite o valor da altura: ");
    scanf("%lf", &altura2);
    printf("Digite o nome da pessoa: ");

    limpar_entrada();
    //fgets(nome2, 50, stdin); //stdin - standard input - entrada padrão: terminal
    //strtok(nome2, "\n");
    ler_texto(nome2, 50);
    printf("Idade - %d\n", idade2);
    printf("Salario - %.2lf\n", salario2);
    printf("Altura - %.2lf\n", altura2);
    printf("Nome - %s\n", nome2);

    return 0;

}
