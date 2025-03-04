#include <stdio.h>
#include <string.h> //Biblioteca para trabalhar com strings

int main ()
    {
        int idade;
        double salario, altura;
        char genero;
        char nome[50]; // Vetor de 50 caracteres

        idade = 20;
        salario = 5800.5;
        altura = 1.63;
        genero = 'F';
        strcpy (nome, "Ana Maria"); // função da biblioteca string.h

        printf("Idade = %d\n", idade); /* %d é usado para variáveis inteiras (int) */
        printf("Salario = %.2lf\n", salario);
        printf("Altura = %.2lf\n", altura );
        printf("Genero = %c\n", genero);
        printf("Nome = %s\n", nome);

        return 0;

    }