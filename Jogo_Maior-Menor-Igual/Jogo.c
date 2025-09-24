
#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){


     int num_jogador;
     int num_computador;
     int opcao_menu;
     int aposta_usuario;
    
        printf("◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈\n");
        printf("🔰🔰 Bem Vindo ao Jogo Maior ▲ Menor ▼ ou Igual ⇌ 🔰🔰\n");
        printf("◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈\n\n");
        printf("MENU PRINCIPAL:\n");
        printf("[1] Iniciar Jogo\n");
        printf("[2] Ver as Regras\n");
        printf("[3] Sair \n");
        printf("Por favor, digite sua escolha: ");

        scanf("%d", &opcao_menu);


   switch (opcao_menu)
   {
   case 1:
              
              printf("[1] Maior ▲\n");
              printf("[2] Menor ▼\n");
              printf("[3] Igual ⇌\n");
              printf("Sua aposta:\n ");
              scanf("%d", &aposta_usuario);
              
              printf("Digite um numero de 1 a 100:\n");
              scanf("%d",&num_jogador);
              int num_computador = (rand() % 100) + 1;

               if (num_jogador > num_computador  ){
                    
                   if (aposta_usuario == 1){

                         printf("VOCÊ GANHOU! Apostou em MAIOR e seu número foi o maior!\n");
               }else{
                         printf("VOCÊ PERDEU!\n");

                  }if(num_jogador < num_computador){

                      }if (aposta_usuario == 2){

                         printf("VOCÊ GANHOU! Apostou em MENOR e seu número foi o menor!\n");

                 }else{
                        printf("VOCÊ PERDEU!");
                        
                    }if (num_jogador == num_computador){
                         
                      }if (aposta_usuario == 3)
                    {
                         printf("");
                    }
                    
                      
               
              
               

               }
              
                
                
        break;
   case 2:
               
                
                



        break;
   case 3:
        break;   
        
        
   default:
        break;
   }































}