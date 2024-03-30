// Primeiro é necessário instalar o compilador em C usando o minGW.

#include <stdio.h>

/*
Este programa em C calcula a média do aluno seguindo o seguinte algoritmo:
- Obtém a nota de cada uma das 4 provas.
- Calcula a média das notas do aluno.
- Se a média for igual ou maior que 7, o aluno foi aprovado, senão ele foi reprovado.
*/

int main(void)
{
    // Declaração de variáveis.
    float nota1, nota2, nota3, nota4, media;

    // Obtém as notas do usuário.
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Calcula a média de notas.
    media = nota1 + nota2 + nota3 + nota4 / 4;

    // Verifica se o aluno foi aprovado ou não.
    if (media >= 7)
    {
        printf("Você foi aprovado!");
    }
    else
    {
        printf("Infelizmente você foi reprovado");
    }

    return 0;
}