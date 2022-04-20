> **Descrição**

Como sempre temos aqui uma história sem sentido, então:

Arthur estava entediado quando a Entidade sussurrou no seu ouvido, que tal uma aposta? Arthur como um bom apostador aceitou e ainda sugeriu a aposta: Dada uma matriz quadrada, cada um escolheria um conjunto da matriz para somar e obter um resultado. Porém, Rodrigo que estava passando na rua ao lado ouviu a voz da Entidade e já ficou animado. Entrou no quarto de Arthur pela janela e perguntou o que estava acontecendo e logo resolveu entrar na aposta também.
  
Os conjuntos escolhidos por eles foram:
* Arthur: Linhas pares
* Entidade: Colunas ímpares
* Rodrigo: Diagonal principal

Faça um programa que receba uma matriz quadrada, some os valores das linhas pares, os valores das colunas ímpares, os valores da diagonal principal e com isso imprima o vencedor da aposta e a soma dos valores que corresponde ao seu conjunto. Lembre-se que pode ocorrer um empate duplo ou triplo.

> **Formato de entrada**

Você receberá um número "X", que corresponde ao número de linhas e colunas da matriz. Após isso receberá a matriz formatada.

Exemplo:

3

1 2 3

4 5 6

7 8 9



A soma dos valores de Arthur seriam (Linhas pares): 1 + 2 + 3 + 7 + 8 + 9 = 30 (Linha 0 e Linha 2)

A soma dos valores da Entidade seriam (Colunas ímpares): 2 + 5 + 8 = 15 (Coluna 1)

A soma dos valores de Rodrigo seriam (Diagonal principal): 1 + 5 + 9 = 15 (Diagonal)

Nesse caso o vencedor seria Arthur. O modo que as mensagens devem ser impressas serão mostradas na saída. Lembrem-se também que a linha e a coluna começam com índice 0.

> **Formato de saída**

Todas as saídas terão duas linhas, o resultado da aposta e o valor da soma que o ganhador obteve.

Caso Arthur vença imprima:

"Arthur venceu!"

"Resultado: Valor da soma das linhas pares"



Caso a Entidade vença imprima:

"A entidade venceu!"

"Resultado: Valor da soma das colunas ímpares"



Caso Rodrigo vença imprima:

"O intrometido venceu!"

"Resultado: Valor da soma da diagonal principal"



Em caso de empate:

"Empate!"

"Resultado: O valor de qualquer apostador em caso de empate triplo, e o valor de apenas um dos dois maiores, em caso de empate duplo"

> **Exemplos de:**
<table>
  <tr>
    <td width="420">
      Entrada
    </td>
    <td width="420">
      Saída
    </td>
  </tr>
  <tr>
    <td>
      <div>
        2<br>
        5 5<br>
        5 5<br>
      </div>
    </td>
    <td>
      <div>
        Empate!<br>
        Resultado: 10 <br>
      </div>
    </td>
  </tr>
  <tr>
    <td width="420">
      Entrada
    </td>
    <td width="420">
      Saída
    </td>
  </tr>
  <tr>
    <td>
      <div>
        4<br>
        1 0 0 0<br>
        0 2 0 0<br>
        0 0 3 0<br>
        0 0 0 4<br>
      </div>
    </td>
    <td>
      <div>
        O intrometido venceu!<br>
        Resultado: 10<br>
      </div>
    </td>
  </tr>
  <tr>
    <td width="420">
      Entrada
    </td>
    <td width="420">
      Saída
    </td>
  </tr>
  <tr>
    <td>
      <div>
        3<br>
        1 2 3<br>
        4 5 6<br>
        7 8 9<br>
      </div>
    </td>
    <td>
      <div>
        Arthur venceu!<br>
        Resultado: 30<br>
      </div>
    </td>
  </tr>
  <tr>
    <td width="420">
      Entrada
    </td>
    <td width="420">
      Saída
    </td>
  </tr>
  <tr>
    <td>
      <div>
        2<br>
        1 2<br>
        3 4<br>
      </div>
    </td>
    <td>
      <div>
        A entidade venceu!<br>
        Resultado: 6<br>
      </div>
    </td>
  </tr>
</table>
