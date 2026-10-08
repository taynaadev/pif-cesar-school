# Lista de Exercícios – Capítulo 3

**Disciplina:** Programação Imperativa e Funcional (PIF) **Semestre:** 2026.2

---

## Questão 01

**Resposta:**

a) A diferença está no **momento em que a condição é avaliada**:

- No **while**, a condição é testada **antes** de executar o bloco. Se ela já for falsa na primeira vez, o bloco **nunca executa** (mínimo de **0 execuções**).
- No **do-while**, o bloco é executado **primeiro** e a condição só é testada **depois**. Por isso o bloco executa **pelo menos 1 vez** (mínimo de **1 execução**), mesmo que a condição seja falsa desde o início.

b) Cada estrutura se encaixa melhor em uma situação:

- **for:** quando o número de repetições é **conhecido ou calculável** antes do laço começar (contar de 1 a 100, percorrer um intervalo). Inicialização, teste e incremento ficam juntos na mesma linha, o que deixa o código curto e legível.
- **while:** quando **não se sabe quantas vezes** o laço vai repetir e ele pode nem precisar executar (ler valores até aparecer um sentinela, repetir enquanto uma condição for verdadeira).
- **do-while:** quando o bloco **precisa executar ao menos uma vez**, como em **menus** e na **validação de entrada** (pedir o dado, e só depois verificar se é válido).

c) É um **erro de lógica**, e não de compilação. O código compila normalmente, porque o `;` logo após o `while (condicao)` é interpretado como um **comando vazio** (o corpo do laço é "nada").

Se `condicao` for verdadeira, o programa testa a condição, executa o comando vazio, testa de novo, e assim por diante. Como **nada dentro do laço altera a condição**, ela continua verdadeira para sempre: o programa entra em **laço infinito** e fica "travado", sem nunca executar as linhas seguintes.

---

## Questão 02

**Resposta:**

a) A variável `soma` foi declarada **dentro do bloco** do `for` (entre as chaves `{ }`). Ela só existe dentro desse bloco. Quando o `printf` final tenta usá-la, já estamos **fora do bloco**, então o compilador não a conhece e emite o erro de que `soma` **não foi declarada** (*undeclared*).

b) Porque `int soma = 0;` fica **dentro do laço**: a cada iteração a variável é **criada novamente e zerada**, e é destruída no fim da iteração. Assim, `soma += i * i` nunca acumula nada. O valor impresso seria sempre apenas `i * i` da iteração atual (1, 4, 9, 16...) e não a soma acumulada.

c) Código corrigido (a variável é declarada **antes** do laço):

```c
#include <stdio.h>

int main(void) {
    int i;
    int soma = 0;   // declarada fora do laço: existe durante todo o programa

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);   // 285
    return 0;
}
```

**Conceitos:**

- **Escopo de bloco:** uma variável declarada dentro de `{ }` só pode ser usada dentro daquele bloco.
- **Visibilidade:** é "onde" a variável pode ser vista e usada no código. Uma variável de bloco é visível apenas dentro do seu bloco.
- **Tempo de vida:** é "quando" a variável existe na memória. Uma variável de bloco é criada quando o programa entra no bloco e destruída quando sai dele (a cada iteração, no caso de um laço).

---

## Questão 03

**Resposta:**

a) Trecho A: `a` começa em 36 e é dividido por 2 a cada volta (divisão inteira), enquanto `a > 0`. A saída é:

```
36	18	9	4	2	1
```

(Depois do 1, `a /= 2` resulta em 0, e o teste `a > 0` falha.)

b) O Trecho B lê um caractere do teclado com `getch()` (sem mostrar na tela) e repete o laço **até que o caractere digitado seja `X`**. A operação `ch + 1` soma 1 ao código ASCII do caractere, então o programa imprime **o caractere seguinte** (digitando `A` imprime `B`, digitando `a` imprime `b`).

Os parênteses em `(ch = getch())` são necessários por causa da **precedência dos operadores**: `!=` tem precedência **maior** que `=`. Sem os parênteses, o C faria `ch = (getch() != 'X')`, ou seja, guardaria em `ch` o resultado da comparação (0 ou 1) e não o caractere digitado.

c) É possível sair do laço infinito de forma programática usando um **`break`** dentro de um `if` (por exemplo, `if (condicao_de_saida) break;`). Também funcionaria um `return` (sai da função) ou `exit(0)` (encerra o programa), ambos controlados pelo código.

---

## Questão 04

**Resposta:**

a) O `break` **encerra imediatamente o laço** em que ele está. O programa não executa o restante do bloco nem testa a condição de novo: ele pula para a **primeira instrução depois do laço**.

b) O `continue` **pula o restante do corpo** da iteração atual e passa para a próxima iteração. No `for`, a expressão executada imediatamente após o `continue` é a de **incremento** (a terceira, por exemplo o `i++`); depois dela vem o **teste** da condição.

c) Apenas o **laço interno** é interrompido. O `break` afeta somente o laço mais próximo (o mais interno) em que está escrito; o laço externo continua normalmente com a próxima iteração.

---

## Questão 05

**Resposta:**

a) O laço executa **5 iterações**.

Começa com `i = 0` e `j = 10`. A cada volta, `i` aumenta 1 e `j` diminui 1, até `i` e `j` ficarem iguais (`5` e `5`), quando `i < j` deixa de ser verdadeira.

b) Saída de cada iteração:

```
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

c) Versão com `while`:

```c
int i = 0, j = 10;

while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

---

## Questão 06

**Resposta:**

a) O valor impresso será **6**.

b) No `x++ < 5`, o operador pós-fixado usa o valor **atual** de `x` na comparação e **só depois** incrementa. Passo a passo:

| Teste | Compara | Resultado | `x` depois do incremento |
|-------|---------|-----------|--------------------------|
| 1º    | 0 < 5   | verdadeiro | 1 |
| 2º    | 1 < 5   | verdadeiro | 2 |
| 3º    | 2 < 5   | verdadeiro | 3 |
| 4º    | 3 < 5   | verdadeiro | 4 |
| 5º    | 4 < 5   | verdadeiro | 5 |
| 6º    | 5 < 5   | **falso**  | 6 |

Na 6ª vez a comparação é falsa e o laço termina, mas o `x++` **ainda incrementa** `x` antes de sair. Por isso o valor final é 6 e não 5.

c) Versão explícita, sem corpo vazio, com o mesmo resultado:

```c
int x = 0;

while (x < 5) {
    x++;
}
x++;   // o incremento extra que o teste x++ < 5 faz na comparação que falha

printf("Valor final de x = %d\n", x);   // 6
```
