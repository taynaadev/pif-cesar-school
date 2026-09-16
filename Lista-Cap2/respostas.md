# Lista de Exercícios – Capítulo 2

**Disciplina:** Programação Imperativa e Funcional (PIF)
**Semestre:** 2026.2

---

## Questão 01

**Resposta:**

a) O valor exibido no console será **2**.

b) Isso ocorre porque a variável `valor_inteiro` é do tipo `int`, e ao receber o valor de ponto flutuante `2.97`, o compilador realiza uma **conversão implícita de tipos (coerção)**. Como `int` não armazena casas decimais, a parte fracionária é descartada (não arredondada). Esse fenômeno é chamado de **truncamento**.

c) Para evitar esse comportamento, o programador pode:
- Usar a função `round()` da biblioteca `<math.h>` antes de converter para `int`, para arredondar corretamente;
- Manter a variável como `float` ou `double` para preservar a precisão, caso não seja necessário um valor inteiro;
- Fazer o cast explícito somando `0.5` antes de truncar, quando quiser arredondamento manual: `valor_inteiro = (int)(2.97 + 0.5);`.

---

## Questão 02

**Resposta:**

a) As funções de `<conio.h>` (como `getch()` e `getche()`) fazem parte de uma biblioteca **não padronizada**, criada originalmente para compiladores da Borland (MS-DOS/Windows). Elas não fazem parte do padrão ANSI C e, por isso, **não são reconhecidas por compiladores modernos como GCC em sistemas Linux, macOS ou servidores**, comprometendo a portabilidade do código.

b) As funções equivalentes e portáveis, definidas em `<stdio.h>`, são `getchar()` (leitura de caractere) e `putchar()` (escrita de caractere).

c) Código exemplo:

```c
#include <stdio.h>

int main(void) {
    char c;

    printf("Digite um caractere: ");
    c = getchar();

    // Limpa o buffer, descartando o '\n' residual e demais caracteres
    while (getchar() != '\n');

    printf("Voce digitou: %c\n", c);
    return 0;
}
```

---

## Questão 03

**Resposta:** Código corrigido:

```c
#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);

    return 0;
}
```

---

## Questão 04

**Resposta:** Cálculo passo a passo (valores iniciais: `a=1, b=2, c=3, d=4`):

1. `a += b + c;` → `a = 1 + (2 + 3) = 6` → **a = 6**
2. `b *= c = d + 2;` → primeiro `c = 4 + 2 = 6`; depois `b = 2 * 6 = 12` → **b = 12, c = 6**
3. `d %= a + a + a;` → `a + a + a = 18`; `d = 4 % 18 = 4` → **d = 4**
4. `d -= c -= b -= a;` (associação da direita para a esquerda):
   - `b -= a` → `b = 12 - 6 = 6`
   - `c -= b` → `c = 6 - 6 = 0`
   - `d -= c` → `d = 4 - 0 = 4`
   → **b = 6, c = 0, d = 4**
5. `a += b += c += 7;` (associação da direita para a esquerda):
   - `c += 7` → `c = 0 + 7 = 7`
   - `b += c` → `b = 6 + 7 = 13`
   - `a += b` → `a = 6 + 13 = 19`
   → **a = 19, b = 13, c = 7**

**Valores finais: a = 19, b = 13, c = 7, d = 4**

---

## Questão 05

**Resposta:** Valores iniciais: `i=1, j=2, k=3, n=2, x=3.3, y=4.4`

a) `i < j + 3` → `1 < 5` → **1**
b) `2*i - 7 <= j - 8` → `-5 <= -6` → **0**
c) `-x + y >= 2.0*y` → `1.1 >= 8.8` → **0**
d) `x == y` → `3.3 == 4.4` → **0**
e) `!(n - j)` → `!(0)` → **1**
f) `!n - j` → `!n = 0` (n é diferente de zero); `0 - j = -2` → **-2** (expressão aritmética, não booleana)
g) `i && j && k` → todos diferentes de zero → **1**
h) `i || j - 3 && k` → `&&` tem precedência sobre `||`: `(j-3) && k = (-1) && 3 = 1`; `i || 1 = 1` → **1**
i) `i < j && 2 >= k` → `(1<2)=1`; `(2>=3)=0`; `1 && 0` → **0**
j) `i == 2 || j == 4 || k == 5` → `0 || 0 || 0` → **0**

---

## Questão 06

**Resposta:**

a) O operador **prefixado (`++n`)** incrementa a variável **antes** de seu valor ser utilizado na expressão. O operador **pós-fixado (`m++`)** utiliza o valor **atual** da variável na expressão e só depois realiza o incremento.

- Trecho A: `n = 6, x = 6`
- Trecho B: `m = 6, y = 5`

b) A instrução `printf("%d\t%d\t%d\n", n, n+1, n++);` gera comportamento **indefinido (undefined behavior)** porque a linguagem C não garante a ordem de avaliação dos argumentos de uma função — o compilador pode avaliá-los da esquerda para a direita, da direita para a esquerda, ou em outra ordem. Além disso, a variável `n` está sendo lida e modificada (via `n++`) dentro da mesma expressão sem um ponto de sequência que garanta a ordem dessas operações. Isso faz com que o resultado impresso possa variar de acordo com o compilador utilizado.

---

*As questões práticas (07 a 28) foram implementadas em arquivos `.c` individuais, conforme solicitado no enunciado.*

