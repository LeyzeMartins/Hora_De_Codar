#include <stdio.h>
#include <stdlib.h> // Biblioteca para srand() e rand()
#include <time.h>   // Biblioteca para time()

int main() {
    // --- PREPARAÇÃO ---
    // Variáveis que guardam as informações do jogo
    int num_jogador;
    int num_computador;
    int opcao_menu;
    int aposta_usuario;

    // Inicializa o gerador de números aleatórios (essencial!)
    srand(time(NULL));

    // --- MENU PRINCIPAL ---
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
    printf("🔰🔰 Bem Vindo ao Jogo: Maior ▲ Menor ▼ ou Igual ⇌ 🔰🔰\n");
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
    printf("MENU PRINCIPAL:\n");
    printf("[1] Iniciar Jogo\n");
    printf("[2] Ver as Regras\n");
    printf("[3] Sair \n\n");
    printf("Por favor, digite sua escolha: ");

    scanf("%d", &opcao_menu);

    // --- DECISÃO DO MENU ---
    switch (opcao_menu) {
        // Se o usuário digitou 1, o jogo começa
        case 1:
            // -- PARTE 1: COLETA DE DADOS DO JOGADOR --
            printf("\n--- FAÇA SUA APOSTA ---\n");
            printf("[1] Meu número será MAIOR que o do computador\n");
            printf("[2] Meu número será MENOR que o do computador\n");
            printf("[3] Meu número será IGUAL ao do computador\n");
            printf("Sua aposta: ");
            scanf("%d", &aposta_usuario);
            
            printf("\n--- ESCOLHA SEU NÚMERO ---\n");
            printf("Digite um numero de 1 a 100: ");
            scanf("%d", &num_jogador);

            // -- PARTE 2: A JOGADA DO COMPUTADOR --
            num_computador = (rand() % 100) + 1;

            printf("\n------------------ RESULTADO ------------------\n");

            // -- PARTE 3: O CÉREBRO DO JOGO (COM OPERADOR TERNÁRIO) --
            
            // 1. Checa se o número do jogador foi MAIOR
            if (num_jogador > num_computador) {
                // O ternário decide a mensagem de vitória/derrota
                printf("%s\n", (aposta_usuario == 1 ? "VOCÊ GANHOU! Você apostou em MAIOR." : "VOCÊ PERDEU! O resultado foi MAIOR, mas você não apostou nisso."));
                // Revela o resultado detalhado
               printf("--> Detalhes: Seu número (%d) foi MAIOR que o do computador (%d).\n", num_jogador, num_computador);
               printf("Parabéns! O número da rodada foi o seu: %d\n", num_jogador);   
            // 2. SENÃO, SE foi MENOR
            } else if (num_jogador < num_computador) {
                printf("%s\n", (aposta_usuario == 2 ? "VOCÊ GANHOU! Você apostou em MENOR." : "VOCÊ PERDEU! O resultado foi MENOR, mas você não apostou nisso."));
                printf("--> Detalhes: Seu número (%d) foi MENOR que o do computador (%d).\n", num_jogador, num_computador);
            
            // 3. SENÃO, só pode ser IGUAL
            } else { 
                printf("%s\n", (aposta_usuario == 3 ? "EMPATE! Você apostou em IGUAL." : "VOCÊ PERDEU! O resultado foi IGUAL, mas sua aposta foi 'Maior' ou 'Menor'."));
                printf("--> Detalhes: Seu número (%d) foi IGUAL ao do computador (%d).\n", num_jogador, num_computador);
            }
            printf("---------------------------------------------\n");
            break; // Fim do case 1

        // Se o usuário digitou 2, mostra as regras
        case 2:
            printf("\n■■■■■**REGRAS DO JOGO**■■■■■\n");
            printf("1. Aposte se seu número será MAIOR ▲, MENOR ▼ ou IGUAL ⇌ ao do computador.\n");
            printf("2. Escolha um número de 1 a 100.\n");
            printf("3. O computador sorteará o número dele.\n");
            printf("4. Para ganhar, sua aposta tem que corresponder ao resultado real!\n");
            break;

        // Se o usuário digitou 3, encerra o jogo
        case 3:
            printf("\nObrigado por jogar! Até a próxima!\n");
            break;

        // Se digitou qualquer outra coisa, avisa que é inválido
        default:
            printf("\nOpção inválida! Por favor, escolha uma opção de 1 a 3.\n");
            break;
    }

    printf("\n■■■■Fim do programa■■■■\n");

    return 0;
}