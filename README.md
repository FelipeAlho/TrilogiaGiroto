# Trilogia de Girotto

Trilogia de Girotto é um conjunto de três minijogos desenvolvidos em C, onde os jogadores podem desafiar a sorte e enfrentar batalhas estratégicas.

## Jogos Disponíveis

1. **Perguntas e Respostas**
   - Teste seus conhecimentos gerais respondendo perguntas.
   - Cada resposta correta soma pontos.
   - O jogador pode tentar novamente para melhorar sua pontuação.

2. **Cobra na Caixa!**
   - Dois jogadores escolhem personagens e tentam abrir a porta da sala.
   - Uma das caixas contém um botão de saída, enquanto outra esconde uma cobra.
   - O primeiro jogador a encontrar o botão vence.
   - se encontrar a cobre perde.

3. **Gousmas War**
   - Um jogo de estratégia em que jogadores controlam criaturas chamadas Gousmas.
   - As criaturas podem atacar ou dividir-se para ganhar vantagem.
   - O objetivo é destruir as Gousmas do adversário.

## Como Jogar

1. Compile o código com:
   ```sh
   gcc trilogia_girotto.c -o trilogia -lm
   ```
2. Execute o programa:
   ```sh
   ./trilogia
   ```
3. Escolha um dos jogos pelo menu principal.
4. Siga as instruções na tela para jogar.

## Requisitos
- Compilador **GCC**
- Sistema compatível com **C99** ou superior

## Autor
Criado por Felipe Alho e Bruno das Dores, inspirado jogos jogados na infância.

## Licença
Este projeto é de código aberto.


## Referências
**chatgpt:** para aprendizados sobre torca de turno entre os jogadores, como criar e sair de um loop infinito no while e o uso de "? :", um if else siplificado. 

**StackOverflow:**
https://pt.stackoverflow.com/questions/97138/qual-%C3%A9-a-finalidade-do-void-em-c

**LingugemMC:**
https://linguagemc.com.br/valores-aleatorios-em-c-com-a-funcao-rand/