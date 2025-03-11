#include <stdio.h>
#include <locale.h> // adicionar acentuação
void exibirMenu() { // indica que a função nao retorna valor 
    printf("\n");
    printf("Trilogia de Girotto\n");
    printf("\n");
    printf("1 - Perguntas e Respostas\n");
    printf("2 - Cobra na Caixa!\n");
    printf("3 - Gousmas War\n");
    printf("0 - Sair\n");
    printf("\n");
    printf("Escolha uma opcao: ");
}
void exibirMenuPR(){ // menu do perguntas e respostas 
    printf("\n");
    printf("      Perguntas e Respostas     \n");
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
                    printf("1 - Sim\n");
                    printf("2 - Voltar ao menu principal\n");
                    printf("Escolha: ");
                    scanf("%d", &continuar);

                } while (continuar == 1);
                break;
            case 2:
                printf("Você escolheu 'Cobra na Caixa'!\n");
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