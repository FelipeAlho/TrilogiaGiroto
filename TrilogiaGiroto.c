#include <stdio.h>
#include <locale.h> // adicionar acentuação
#include <string.h>
#include <stdlib.h>
#include <time.h>
void exibirMenu()
{ // indica que a função nao retorna valor
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
void exibirMenuPR()
{ // menu do perguntas e respostas
    printf("\n");
    printf("      Perguntas e Respostas     \n");
    printf("\n");
}
void exibirMenuCNC()
{
    printf("\n");
    printf("      Cobra na Caixa     \n");
    printf("\n");
}
void exibirMenuGW()
{
    printf("\n");
    printf("      Gousmas War    \n");
    printf("\n");
}
int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int escolha;   // escolher qual o jogo
    int pontos;    // para saber os pontos no final
    pontos = 0;    // começa com 0 pontos
    int continuar; // opição de continuar jogando ou nao
    do             // fara os jogos enquanto a escolha for diferente de 0
    {
        exibirMenu();          // trazendo o void pra ca
        scanf("%d", &escolha); // escolha do jogo por parte do usuario

        switch (escolha)
        {
        case 1: // jogo das perguntas e respostas
            do
            {
                printf("Você escolheu 'Pergunta e Resposta'!\n");
                exibirMenuPR(); // trazendo o menu desse jogo
                int r;          // variavel que responde as perguntas
                printf("\nQual é a soma dos ângulos internos de um triangulo?\n");
                scanf("%d", &r);
                if (r == 180)
                {
                    printf("\nParabéns você acertou\n");
                    pontos++; // para aumentar 1 na pontuação
                }
                else
                {
                    printf("\nVocê errou, a resposta certa era 180!\n");
                }
                r = 0;
                printf("\nEm 2023, a população mundial ultrapassou um marco histórico. Aproximadamente, quantos bilhões de pessoas havia no planeta nesse ano?\n");
                scanf("%d", &r);
                if (r == 8)
                {
                    printf("\nParabéns você acertou\n");
                    pontos++;
                }
                else
                {
                    printf("\nVocê errou, a resposta certa era 8!\n");
                }

                r = 0; // limpando a variavel
                printf("\nA Terra leva um certo número de dias para completar uma órbita ao redor do Sol. Qual é esse número?\n");
                scanf("%d", &r);
                if (r == 365)
                {
                    printf("\nParabéns você acertou\n");
                    pontos++;
                }
                else
                {
                    printf("\nVocê errou, a resposta certa era 365!\n");
                }

                r = 0;
                printf("\nO Império Romano do Ocidente caiu oficialmente com a deposição do último imperador, Rômulo Augusto. Em que ano isso aconteceu?\n");
                scanf("%d", &r);
                if (r == 476)
                {
                    printf("\nParabéns você acertou\n");
                    pontos++;
                }
                else
                {
                    printf("\nVocê errou, a resposta certa era 476!\n");
                }

                r = 0;
                printf("\nA Copa do Mundo de Futebol Masculino da FIFA é realizada a cada quantos anos?\n");
                scanf("%d", &r);
                if (r == 4)
                {
                    printf("\nParabéns você acertou\n");
                    pontos++;
                }
                else
                {
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
            do
            {
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
                while (1)
                {
                    // Sorteia a posição da cobra e do botão
                    do
                    {
                        botao = rand() % NUM_CAIXAS + 1;
                        cobra = rand() % NUM_CAIXAS + 1;
                    } while (botao == cobra); // Garante que não fiquem na mesma caixa

                    printf("\n%s, escolha uma caixa entre 1 a 5: ", turno == 0 ? personagem1 : personagem2);
                    scanf("%d", &escolhaCaixa);

                    if (escolhaCaixa < 1 || escolhaCaixa > NUM_CAIXAS)
                    {
                        printf("Caixa inválida! Escolha entre 1 e 5.\n");
                        continue;
                    }

                    if (escolhaCaixa == cobra)
                    {
                        printf("Você encontrou a cobra! Fim de jogo.\n");
                        break;
                    }
                    else if (escolhaCaixa == botao)
                    {
                        printf("Você encontrou o botão e escapou da tumba! Parabéns!\n");
                        break;
                    }
                    else
                    {
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
            } while (continuar == 1);
            break;
        case 3: // Gousmas War
            do
            {

                int gousmas1 = 1;
                int gousmas2 = 1;
                int gousmas3 = 1;
                int gousmas4 = 1;
                int decisao;
                int furia;
                printf("Você escolheu'Gousmas War'!\n");
                exibirMenuGW(); // trazendo o menu desse jogo
                printf("\nNeste jogo de estratégia, os jogadores controlam criaturas chamadas Gousmas, que podem se dividir e acumular fúria ao serem atacadas.\n");
                printf("Voce comeca com 1 de furia em cada Gousmas, Voce tem duas.\n");
                printf("Voce pode atacar ou se dividir em sua vez.\n");
                while (1)
                {
                    printf("Jogador 1, voce controla a gousmas1 e a gousmas2, ja o jogador 2 controla a gousmas3 e gousmas4\n");
                    printf("Jogador 1 o que voce ira fazer?\n");
                    printf("(1) atacar\n");
                    printf("(2) dividir\n");
                    scanf("%d", &decisao);
                    if (decisao == 1)
                    {
                        decisao = 0;
                        printf("qual gousmas voce deseja atacar?\n");
                        printf("(1) gousmas3\n");
                        printf("(2) gousmas4\n");
                        scanf("%d", &decisao);
                        if (decisao == 1)
                        {
                            decisao = 0;
                        printf("qual gousmas voce deseja usar para atacar?\n");
                        printf("(1) gousmas1\n");
                        printf("(2) gousmas2\n");
                        scanf("%d", &decisao);
                            if(decisao == 1)
                            {
                                gousmas3 = gousmas3 + gousmas1;
                                printf("ataque sucedido! gousmas3 com %d de furia\n", gousmas3);
                            }
                            if(decisao == 2)
                            {
                                gousmas4 = gousmas4 + gousmas2;
                                printf("ataque sucedido! gousmas4 com %d de furia\n", gousmas4);
                            }
                        }
                        else if (decisao == 2)
                        {
                            decisao = 0;
                        printf("qual gousmas voce deseja usar para atacar?\n");
                        printf("(1) gousmas1\n");
                        printf("(2) gousmas2\n");
                        scanf("%d", &decisao);
                            if(decisao == 1)
                            {
                                gousmas4 = gousmas4 + gousmas1;
                                printf("ataque sucedido! gousmas4 com %d de furia\n", gousmas4);
                            }
                            if(decisao ==2 )
                            {
                                gousmas4 = gousmas4 + gousmas2;
                                printf("ataque sucedido! gousmas4 com %d de furia\n", gousmas4);
                            }
                        }
                   
                   
                    }
                    if(gousmas3 > 5){
                        printf("gousmas3 foi destruida\n");
                    } 
                    if(gousmas4 > 5){
                        printf("gousmas4 foi destruida\n");
                    }
                    if(gousmas3 > 5 && gousmas4 > 5){
                        printf("JOGADOR 1 GANHOU O JOGO\n");
                        break;
                    }
                    
                    if(decisao == 2)
                    {
                        decisao = 0;
                        printf("qual gousmas voce deseja dividir?\n");
                        printf("(1) gousmas3\n");
                        printf("(2) gousmas4\n");
                        scanf("%d", &decisao);
                        if(decisao == 1)
                        {
                            if(gousmas3 % 2 == 0)
                            {
                                printf("gousmas3 é par, podemos dividir!\n");
                                gousmas4 = gousmas4 + gousmas3/2;
                                gousmas3 = gousmas3/2;
                                printf("os novos valores são: gousmas3 = %d , gousmas4 = %d\n", gousmas3, gousmas4);
                            }else
                            {
                                printf("gousmas3 não é par, não podemos dividir\n");
                            }
                        }
                        if(decisao == 2)
                        {
                            if(gousmas4 % 2 == 0)
                            {
                                printf("gousmas4 é par, podemos dividir!\n");
                                gousmas3 = gousmas3 + gousmas4/2;
                                gousmas4 = gousmas4/2;
                                printf("os novos valores são: gousmas3 = %d , gousmas4 = %d\n", gousmas3, gousmas4);
                            }else
                            {
                                printf("gousmas4 não é par, não podemos dividir\n");
                            }
                        }
                    }
                    
                    decisao = 0;
                    printf("Jogador 2 o que voce ira fazer?\n");
                    printf("(1) atacar\n");
                    printf("(2) dividir\n");
                    scanf("%d", &decisao);
                    if (decisao == 1)
                    {
                        decisao = 0;
                        printf("qual gousmas voce deseja atacar?\n");
                        printf("(1) gousmas1\n");
                        printf("(2) gousmas2\n");
                        scanf("%d", &decisao);
                        if (decisao == 1)
                        {
                            gousmas1++;
                            printf("ataque sucedido! gousmas1 com %d de furia\n", gousmas1);
                        }
                        else if (decisao == 2)
                        {
                            gousmas2++;
                            printf("ataque sucedido! gousmas2 com %d de furia\n", gousmas2);
                        }
                    }
                    if(gousmas1 > 5){
                        printf("gousmas1 foi destruida\n");
                    } 
                    if(gousmas2 > 5){
                        printf("gousmas2 foi destruida\n");
                    }
                    if(gousmas1 > 5 && gousmas2 > 5){
                        printf("JOGADOR 2 GANHOU O JOGO\n");
                        break;
                    }

                    if(decisao == 2)
                    {
                        decisao = 0;
                        printf("qual gousmas voce deseja dividir?\n");
                        printf("(1) gousmas1\n");
                        printf("(2) gousmas2\n");
                        scanf("%d", &decisao);
                        if(decisao == 1)
                        {
                            if(gousmas1 % 2 == 0)
                            {
                                printf("gousmas1 é par, podemos dividir!\n");
                                gousmas2 = gousmas2 + gousmas1/2;
                                gousmas1 = gousmas1/2;
                                printf("os novos valores são: gousmas1 = %d , gousmas2 = %d\n", gousmas1, gousmas2);
                            }else
                            {
                                printf("gousmas1 não é par, não podemos dividir\n");
                            }
                        }
                        if(decisao == 2)
                        {
                            if(gousmas2 % 2 == 0)
                            {
                                printf("gousmas2 é par, podemos dividir!\n");
                                gousmas1 = gousmas1 + gousmas2/2;
                                gousmas2 = gousmas2/2;
                                printf("os novos valores são: gousmas1 = %d , gousmas2 = %d\n", gousmas1, gousmas2);
                            }else
                            {
                                printf("gousmas2 não é par, não podemos dividir\n");
                            }
                        }
                    }
                }

                // Perguntar se deseja jogar novamente ou voltar ao menu
                printf("\nDeseja jogar novamente?\n");
                printf("(1) - Sim\n");
                printf("(2) - Voltar ao menu principal\n");
                printf("Escolha: ");
                scanf("%d", &continuar);
            } while (continuar == 1);
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