# Lista de Exercícios – Capítulo 1

**Disciplina:** Programação Imperativa e Funcional (PIF)  
**Semestre:** 2026.2

---

## Questão 04

**Resposta:** #include <stdlib.h>;⁠ — Ponto e vírgula ⁠;⁠ incorreto na diretiva.
 ⁠int Main()⁠ — A função ⁠main⁠ deve ser em minúsculo.
 Parênteses ⁠(⁠ e ⁠)⁠ em vez de chaves ⁠{⁠ e ⁠}⁠ no bloco da função.
 ⁠cout << endl;⁠ — Comando do C++, inválido em C.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);

    system("PAUSE");

    return 0;
}

---

## Questão 05

**Resposta:** Não. O programa não compila/executa corretamente no padrão ANSI C.
 Faltam bibliotecas: ⁠#include <stdio.h>⁠ (para ⁠printf⁠) e ⁠#include <stdlib.h>⁠ (para ⁠system⁠).
 Falta o tipo de retorno: ⁠int main()⁠ em vez de apenas ⁠main()⁠.
 Falta o retorno: ⁠return 0;⁠ no final do programa.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Linguagem C");
    system("pause");

    return 0;
}

---

## Questão 06

**Resposta:** Erros de Sintaxe:
 Ausência das bibliotecas ⁠<stdio.h>⁠ e ⁠<stdlib.h>⁠.
 ⁠int main()⁠ sem o tipo de retorno ⁠int⁠.
 ⁠int a=1; b=2; c=3;⁠ — Erro na declaração. O correto seria ⁠int a=1, b=2, c=3;⁠.
 Erro de Lógica:
 O ⁠printf⁠ solicita quatro inteiros (⁠%d%d%d%d⁠), mas a variável ⁠d⁠ não foi declarada nem inicializada.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = 3;

    printf("Os números são: %d %d %d\n", a, b, c);

    system("pause");

    return 0;
}

---

## Questão 07

**Resposta: a)**

Código:

`printf("\n\tBom dia! Shirley.");`

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

**Resposta:** O primeiro `printf` produz:

    "Primeiro programa

O segundo `printf` possui um erro: `%c` espera um caractere, mas `"\""` é uma string.

Forma correta:

`printf("%c", '\"');`

Saída correta:

    "Primeiro programa"

    ---

## Questão 10

**Resposta: b) Verdadeiro.**

C diferencia letras maiúsculas e minúsculas. Portanto, `peso`, `Peso` e `PESO` são identificadores diferentes.

---

## Questão 11

**Resposta:**
| Constante | Tipo |
|---|---|
| `\r` | char |
| `2130` | int |
| `-123` | int |
| `33.28` | double |
| `0XFA` | int |
| `0101` | int (octal) |
| `2.0e30` | double |
| `\xDC` | char |
| `'\"'` | char |
| `'\\'` | char |
| `'F'` | char |
| `0` | int |
| `'\0'` | char |
| `"F"` | char[] |
| `-4567.89` | double |

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
