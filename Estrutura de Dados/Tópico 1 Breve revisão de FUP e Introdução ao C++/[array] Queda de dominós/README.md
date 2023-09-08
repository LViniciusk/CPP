Motivação:
Deoclécio tem o passatempo de montar filas de dominós para derruba-las depois. Para fazer um efeito mais interessante, ele usa peças de dominó com tamanhos variados, sempre colocando as menores peças no começo da fila. Para ajudar nessa importante tarefa, Deo pediu sua ajuda para verificar se uma fila de dominós está dentro do padrão, ou seja, se os tamanhos dos dominós estão ordenados de forma crescente.

Ação
Leia um vetor de tamanho n (quantidade de dominós) , e diga se ele está ordenado de forma crescente.

Entrada e Saída
Entrada:

O número n ( 0 < n <= 50 ) de dominós.
A altura (inteira) de cada dominó.
Saída:

"ok" caso o vetor esteja ordenado.
"precisa de ajuste" caso vetor esteja desordenado.
Exemplos
>>
5
1 2 3 4 4
<<
ok
>>
6
2 4 2 6 8 10
<<
precisa de ajuste
>>
1
2
<<
ok
Dica
Um vetor {\displaystyle <a_{1},a_{2},...,a_{n}>} está ordenado de forma crescente se {\displaystyle a_{1}^{\prime }\leq a_{2}^{\prime }\leq ...\leq a_{n}^{\prime }}.
Para todo elemento na posição [ i ] temos que ele é menor que o elemento na posição posterior [i +1]

Ou seja, caso um elemento na posição [ i ] seja maior que seu vizinho da frente (posição [i +1]) o vetor não é ordenado.