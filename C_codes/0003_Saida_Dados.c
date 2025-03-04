#include <stdio.h>
int main ()
{
    printf("Bonjour!\n");
    printf("Bonne nuit!\n");

    int x, y;
    x = 10;
    y = 20;
    printf("%d\n", x); // %d é usada para exibir variáveis inteiras (int).
    printf("%d\n", y);

    double z;
    z = 2.3456;
    printf("%.2lf\n", z); // %lf é usada para exibir variáveis com decimal (float ou double).

    int idade = 32;
    double salario = 4560.9;
    char nome [50];
    strcpy (nome, "Maria Silva");
    char sexo = 'F';

    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos.", nome, sexo, salario, idade);

    return 0;
}