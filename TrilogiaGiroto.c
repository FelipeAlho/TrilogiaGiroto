#include <stdio.h>
#include <locale.h> // adicionar acentuação
#include <string.h>
#include <stdlib.h>
#include <time.h>
void exibirMenu() { // indica que a função nao retorna valor 
    printf("\n");
    printf("Trilogia de Girotto\n");
    printf("\n");
    printf("(1) - Perguntas e Respostas\n");
    printf("(2) - Cobra na Caixa!\n");
    printf("(3) - Gousmas War\n");
    printf("(0) - Sair\n");
    printf("\n");
    printf("Escolha uma opcao: ");
}
void exibirMenuPR(){ // menu do perguntas e respostas 
    printf("\n");
    printf("      Perguntas e Respostas     \n");
    printf("\n");
}
void exibirMenuCNC(){
    printf("\n");
    printf("      Cobra na Caixa     \n");
    printf("\n");
}
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int escolha; // escolher qual o jogo
    int pontos; // para saber os pontos no final 
    pontos = 0; // começa com 0 pontos
    int continuar; // opição de continuar jogando ou nao 
    do // fara os jogos enquanto a escolha for diferente de 0
    {
        exibirMenu(); // trazendo o void pra ca 
        scanf("%d", &escolha); // escolha do jogo por parte do usuario

        switch(escolha){
            case 1: // jogo das perguntas e respostas 
                do{
            printf("Você escolheu 'Pergunta e Resposta'!\n");
                exibirMenuPR(); // trazendo o menu desse jogo
                int r; // variavel que responde as perguntas 
                    printf("\nQual é a soma dos ângulos internos de um triangulo?\n");
                    scanf("%d", &r);
                        if(r == 180){
                            printf("\nParabéns você acertou\n");
                            pontos++; // para aumentar 1 na pontuação
                        }else{
                            printf("\nVocê errou, a resposta certa era 180!\n"); 
                        }
                    r = 0;
                    printf("\nEm 2023, a população mundial ultrapassou um marco histórico. Aproximadamente, quantos bilhões de pessoas havia no planeta nesse ano?\n");
                    scanf("%d", &r);
                        if(r == 8){
                            printf("\nParabéns você acertou\n");
                            pontos++;
                        }else{
                            printf("\nVocê errou, a resposta certa era 8!\n");
                        }
                   
                    r = 0; // limpando a variavel 
                    printf("\nA Terra leva um certo número de dias para completar uma órbita ao redor do Sol. Qual é esse número?\n");
                    scanf("%d", &r );
                        if(r == 365){
                            printf("\nParabéns você acertou\n");
                            pontos++;
                        }else{
                            printf("\nVocê errou, a resposta certa era 365!\n");
                        }
                  
                    r = 0;
                    printf("\nO Império Romano do Ocidente caiu oficialmente com a deposição do último imperador, Rômulo Augusto. Em que ano isso aconteceu?\n");
                    scanf("%d", &r);
                        if(r == 476){
                            printf("\nParabéns você acertou\n");
                            pontos++;
                        }else{
                            printf("\nVocê errou, a resposta certa era 476!\n");
                        }
                   
                    r = 0;
                    printf("\nA Copa do Mundo de Futebol Masculino da FIFA é realizada a cada quantos anos?\n");
                    scanf("%d", &r);
                        if(r == 4){
                            printf("\nParabéns você acertou\n");
                            pontos++;
                        }else{
                            printf("\nVocê errou, a resposta certa era 4!\n");
                        }
                        
                        printf("\nvocê ficou com %d pontos\n", pontos); // mostrar os pontos no final 

                         // Perguntar se deseja jogar novamente ou voltar ao menu
                    printf("\nDeseja jogar novamente?\n");
                    printf("(1) - Sim\n");
                    printf("(2) - Voltar ao menu principal\n");
                    printf("Escolha: ");
                    scanf("%d", &continuar);

                } while (continuar == 1);
                break;
            case 2: // Cobra na caixa
            #define NUM_CAIXAS 5
            #define NUM_JOGADORES 2
            do{
                srand(time(NULL));
                int botao, cobra, escolhaCaixa, turno;
                turno = rand() % NUM_JOGADORES;
                printf("Você escolheu 'Cobra na Caixa'!\n");
                exibirMenuCNC(); // trazendo o menu desse jogo
                printf("dois exploradores ficaram presos. No centro da sala, há cinco caixas: uma delas contém o botão para abrir a porta, enquanto uma outra esconde uma cobra mortal.\n");
                char personagem1[9];
                char personagem2[9];
                printf("Esoclha 2 personagens:\n");
                printf("(1) Felipe\n");
                printf("(2) Kadu\n");
                printf("(3) Henrique\n");
                printf("(4) Vitor\n");
                printf("(5) Heloisa\n");
                printf("(6) Laura\n");
                printf("(7) Bruno\n");                
                printf("jogador 1:");
                scanf("%s", &personagem1);
                printf("jogador 2:");
                scanf("%s", &personagem2);
                printf("os personagens escolidos foram %s e %s", personagem1, personagem2);
                while (1) {
                    // Sorteia a posição da cobra e do botão
                    do {
                        botao = rand() % NUM_CAIXAS + 1;
                        cobra = rand() % NUM_CAIXAS + 1;
                    } while (botao == cobra); // Garante que não fiquem na mesma caixa

                    printf("\n%s, escolha uma caixa (1 a 5): ", turno == 0 ? personagem1 : personagem2);
                    scanf("%d", &escolhaCaixa);

                    if (escolhaCaixa < 1 || escolhaCaixa > NUM_CAIXAS) {
                        printf("⚠️ Caixa inválida! Escolha entre 1 e 5.\n");
                        continue;
                    }

                    if (escolhaCaixa == cobra) {
                        printf("Você encontrou a cobra! Fim de jogo.\n");
                        break;
                    } else if (escolhaCaixa == botao) {
                        printf("Você encontrou o botão e escapou da tumba! Parabéns!\n");
                        break;
                    } else {
                        printf("A caixa estava vazia, As posições mudaram!\n");
                    }

                    turno = 1 - turno; // Alterna jogador
                }
                
                // Perguntar se deseja jogar novamente ou voltar ao menu
                  printf("\nDeseja jogar novamente?\n");
                  printf("(1) - Sim\n");
                  printf("(2) - Voltar ao menu principal\n");
                  printf("Escolha: ");
                  scanf("%d", &continuar);
            }while(continuar == 1);
                break;
            case 3:
                printf("Você escolheu'Gousmas War'!\n");
                break;
            case 0:
                printf("Saindo do jogo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }



    } while (escolha != 0);
    

    return 0;
}