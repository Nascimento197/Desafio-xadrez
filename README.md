 Desafio Nível Novato - Movimentando as Peças do Xadrez (em C)

Este projeto simula os movimentos de **três peças de xadrez** — Torre, Bispo e Rainha — utilizando diferentes estruturas de repetição em **C** (`for`, `while`, `do-while`).

---

##  Objetivo
Demonstrar o uso das estruturas de repetição em C por meio de movimentos simples de peças do xadrez.

---

##  Peças e Movimentos

| Peça  | Estrutura de Repetição | Direção do Movimento | Casas | Descrição |
|-------|------------------------|-----------------------|--------|------------|
| Torre | `for` | Direita | 5 | Move-se em linha reta horizontalmente |
| Bispo | `while` | Diagonal superior direita | 5 | Move-se na diagonal (Cima, Direita) |
| Rainha | `do-while` | Esquerda | 8 | Move-se em qualquer direção (simulado para a esquerda) |

---

##  Saída Esperada

Movimento da TORRE:
Direita (1 casa)
Direita (2 casa)
Direita (3 casa)
Direita (4 casa)
Direita (5 casa)

Movimento do BISPO:
Cima, Direita (1 casa)
Cima, Direita (2 casa)
Cima, Direita (3 casa)
Cima, Direita (4 casa)
Cima, Direita (5 casa)

Movimento da RAINHA:
Esquerda (1 casa)
Esquerda (2 casa)
Esquerda (3 casa)
Esquerda (4 casa)
Esquerda (5 casa)
Esquerda (6 casa)
Esquerda (7 casa)
Esquerda (8 casa)

Simulação concluída!

# Nivel aventureiro

## Descrição
Simula o movimento das principais peças de xadrez utilizando **estruturas de repetição em C**.  
Foi desenvolvido em três níveis de dificuldade, começando com movimentos básicos e evoluindo até o uso de **loops aninhados**.

## Peças implementadas:
- Torre → 5 casas para a direita (usando `for`)
- Bispo → 5 casas na diagonal (usando `while`)
- Rainha → 8 casas para a esquerda (usando `do-while`)
- Cavalo → Movimento em "L" (2 para baixo, 1 para a esquerda, usando loops aninhados)

## Como compilar
```bash
gcc xadrez.c -o xadrez
./xadrez

##  Saída Esperada

Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo:
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Movimento da Rainha:
Esquerda
(8 vezes)

Movimento do Cavalo:
Baixo
Baixo
Esquerda

---


##  Desafio Nível Mestre
### Movimentos complexos com recursão e loops aninhados

Torre (Recursão simples)

A cada chamada, imprime "Direita" e chama novamente com casas - 1.

Quando casas chega a 0, a função para.

Bispo (Recursão + Loops aninhados)

O loop externo simula o movimento vertical.

O loop interno simula o movimento horizontal.

A recursão faz com que o Bispo repita o padrão, diminuindo a distância a cada passo.

Rainha (Recursão simples)

Move-se 8 vezes para a esquerda, sem loops.

Cavalo (Loops complexos)

Usa duas variáveis no for e um loop interno para o movimento lateral.

Inclui continue e break para controlar a execução, simulando o movimento em “L”.

- Torre, Bispo e Rainha foram reescritos usando **funções recursivas**.
- Cavalo agora utiliza **loops aninhados** e **controle de fluxo** (`break`, `continue`).

### Como executar
```bash
gcc xadrez.c -o xadrez
./xadrez

##  Saída Esperada

===== Movimento da Torre =====
Direita
Direita
Direita
Direita
Direita

===== Movimento do Bispo =====
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

===== Movimento da Rainha =====
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

===== Movimento do Cavalo =====
Cima
Cima
Direita


##  Como Compilar e Executar (Windows)

1. Instale o compilador [MinGW](http://mingw-w64.org).
2. Salve o arquivo como `xadrez.c`.
3. Abra o **PowerShell** ou **CMD** na pasta onde o arquivo está.
4. Compile o programa:
   ```bash
   gcc xadrez.c -o xadrez.exe


5. Execute
   xadrez.exe
