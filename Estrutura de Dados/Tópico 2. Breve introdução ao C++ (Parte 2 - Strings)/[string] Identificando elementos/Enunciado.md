Ação
Dada uma frase (máximo 100 char) com palavras (letras minúsculas), números, espaço e ponto, identifique os elementos como str, int ou float.

Analise cada palavra (máximo 10 char na palavra).

Regras:

Float tem o ponto.
Int não tem ponto.
Int e float podem ser negativos.
Se existir pelo menos um alfabético então é string.

Entrada
* Uma frase(max 100 char) com palavras (letras minúsculas), números, espaço e ponto

Saída
* o tipo de cada palavra (str, float ou int) separado por espaço.

Exemplos

>>>>>>>> 01
tenho 15 4nos 1.75 altur4 -15 conto p0rr4 -4.04
========
str int str float str int str str float
<<<<<<<<


>>>>>>>> 02
a proxima eleição presidencial no Brasil ocorrerá em 2 de outubro de 2018
========
str str str str str str str str int str str str int
<<<<<<<<
