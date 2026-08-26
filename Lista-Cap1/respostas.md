# Lista de Exercícios – Capítulo 1

**Disciplina:** Programação Imperativa e Funcional (PIF)  
**Semestre:** 2026.2

---

## Questão 04

**Resposta:** Erros encontrados:
1. `#include <stdlib.h>;` — Ponto e vírgula `;` incorreto na diretiva.
2. `int Main` — A função `main` deve ser escrita em letras minúsculas.
3. Uso de parênteses `(` e `)` em vez de chaves `{` e `}` para delimitar o corpo da função.
4. `printf( Existem %d semanas no ano., 52);` — Faltam as aspas duplas delimitando a string de controle do `printf`.
5. `cout << endl;` — Comando próprio da linguagem C++, inválido na linguagem C.

Código corrigido:
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");
    return 0;
}

---

## Questão 05

**Respostas:** Não. O programa não compila nem executa no padrão ANSI C.

Erros encontrados:
1. A instrução `system("pause");` foi inserida FORA do bloco da função `main()` (após o fechamento da chave `}`).
2. Ausência das bibliotecas padrão `#include <stdio.h>` e `#include <stdlib.h>`.
3. Ausência do tipo de retorno `int` na declaração da função `main()`.
4. Ausência da instrução de retorno `return 0;`.

Código corrigido:
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Linguagem C");
    system("pause");
    return 0;
}

---

## Questão 06

**Resposta:** Erros de Sintaxe:
1. Ausência das bibliotecas `<stdio.h>` e `<stdlib.h>`.
2. Declaração da função `main()` sem o tipo de retorno `int`.
3. Caractere inválido `$` na declaração de variáveis (`$a=1`) e falta de vírgulas separando as variáveis. O correto é `int a = 1, b = 2, c = 3;`.
4. Falta da aspa dupla de fechamento da string no `printf`.

Erros de Lógica:
1. O `printf` passa 4 variáveis como argumento (`a, b, c, d`), mas contém apenas 3 especificadores `%d` na string. Além disso, a variável `d` não foi declarada nem inicializada.

Código corrigido:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 1, b = 2, c = 3;

    printf("Os números são: %d %d %d\n", a, b, c);
    system("pause");

    return 0;
}

---

## Questão 07

**Resposta: a)**

Código:
printf("\n\tBom dia! Shirley.");

Saída: uma quebra de linha, seguida de uma tabulação e do texto:

	Bom dia! Shirley.

---

### b)

Código:

`printf("Você já tomou café? \n");`

Saída:

    Você já tomou café?

---

### c)

Código:

`printf("\n\nA solução não existe!\nNão insista.");`

Saída:

    A solução não existe!
    Não insista.

---

### d)

Código:

`printf("Duas\tlinhas\tde\tsaída\nou\tuma?");`

Saída:

    Duas    linhas    de    saída
    ou      uma?

---

### e)

Código:

`printf("%s\n%s\n%s\n", "um", "dois", "três");`

Saída:

    um
    dois
    três

    ---

## Questão 08

**Resposta:** `\n` = quebra de linha.  
`\t` = tabulação.  
`\"` = aspas duplas.

Saída:
    "Primeiro programa"

    ---

## Questão 09

**Resposta:** O compilador interpreta sequências de escape (`\n`, `\t`, `\"`) convertendo-as para seus respectivos caracteres ASCII.

No primeiro `printf`, são passados os caracteres de nova linha (`\n`), tabulação (`\t`) e aspas (`\"`). 

No segundo `printf`, o código original contém um erro de sintaxe (`"\""`), pois passa três aspas duplas seguidas. Para passar o caractere de aspas para o especificador `%c`, deve-se utilizar aspas simples: `'\"'`.

Forma correta do segundo printf:
printf("%c", '\"');

Saída correta do programa:

	"Primeiro programa"

    ---

## Questão 10

**Resposta: b) Verdadeiro.**

C diferencia letras maiúsculas e minúsculas. Portanto, `peso`, `Peso` e `PESO` são identificadores diferentes.

---

## Questão 11

**Resposta:**
Constante | Classificação | Tipo Base
--- | --- | ---
\r | Sequência de escape / Caractere | char
2130 | Constante inteira decimal | int
-123 | Constante inteira decimal | int
33.28 | Constante de ponto flutuante | double
0XFA | Constante inteira hexadecimal | int
0101 | Constante inteira octal | int
2.0e30 | Constante de ponto flutuante | double
\xDC | Sequência de escape / Caractere | char
\" | Sequência de escape / Caractere | char
\\ | Sequência de escape / Caractere | char
'F' | Constante de caractere | char
0 | Constante inteira decimal | int
'\0' | Constante de caractere (nulo) | char
"F" | Constante String | char[]
-4567.89 | Constante de ponto flutuante | double

---

## Questão 12

**Resposta:** 
| Instrução | Resposta |
|---|---|
| `int a;` | Correto |
| `float b;` | Correto |
| `double float c;` | Incorreto |
| `unsigned char d;` | Correto |
| `unsigned e;` | Correto |
| `long float f;` | Incorreto |
| `long g;` | Correto |
| `long double h;` | Correto |

---

## Questão 13

**Resposta: c)**

São arquivos de texto contendo protótipos de funções, definições de constantes, macros e tipos.

---

## Questão 14

**Resposta: a)**

O `#include` permite incluir as declarações das funções de uma biblioteca no programa.

---

## Questão 15

**Resposta: c)**

`#include` é uma diretiva do pré-processador C.

---

## Questão 16

**Resposta: c)**

As diretivas iniciadas por `#` são processadas pelo pré-processador antes da compilação.

---

## Questão 17

**Resposta:  a), b) e c).**

A alternativa **d)** está incorreta porque `printf` deve receber seus argumentos entre parênteses.
