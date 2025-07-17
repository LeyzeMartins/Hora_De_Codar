#include <stdio.h>  // Inclusão da biblioteca padrão para entrada e saída

int main() {

    // Declaração das variáveis para armazenar as três notas e a média
    float nota1, nota2, nota3;
    float media;

    // Exibe o título do programa
     printf("==============================\n");
     printf(" PROGRAMA CALCULAR MÉDIA FINAL\n");
     printf("==============================\n");
     printf("Critérios:\n");
     printf("- Média >= 9 ........ Aprovado com excelência\n");
     printf("- Média >= 6 e < 9 .. Recuperação\n");
     printf("- Média < 6 ......... Reprovado\n\n");


    // Solicita e lê a primeira nota do aluno
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    // Solicita e lê a segunda nota do aluno
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2); 

    // Solicita e lê a terceira nota do aluno
    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);

    // Calcula a média das três notas
    media = (nota1 + nota2 + nota3) / 3;
     
    if (media > 9)
    {
        printf("Aprovado com Excelência: \n");
    } 
     else if (media >= 6 && media <=9)
     {
        printf("Esta em Recuperação: \n");
     }
     else
     {
        printf("Reprovado: \n");
     }
     
    // Exibe a média formatada com duas casas decimais
    printf("A média das notas é: %.2f\n", media);

    return 0; // Encerra o programa com sucesso
}