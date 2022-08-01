> **Descrição**

Você e seu amigo adoram jogos!

Vocês usam uma matriz para armazenar a situação atual do jogo. 

Você tem percebido que está ficando para trás em relação ao seu amigo e resolveu alterar (nada ético, por sinal) a matriz para dificultar a vida do seu amigo.

Para isso, você precisa de um programa para executar sua ideia que é trocar as linhas pelas colunas da matriz, e toda vez que encontrar um número negativo, multiplicar por dois. Como entrada, deve ser lido um número inteiro para representar a ordem da matriz e depois os valores contidos em cada linha da matriz.

> **Formato de entrada**

* a ordem da matriz (inteiro n)
* matriz quadrada de inteiros de ordem n

> **Formato de saída**

A matriz resultante das alterações realizadas onde cada elemento de uma linha deve estar separado por um espaço em branco.

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
        3<br>
        1 2 3<br>
        -4 -5 -6<br>
        7 8 9<br>
      </div>
    </td>
    <td>
      <div>
        1 -8 7<br>
        2 -10 8<br>
        3 -12 9<br>
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
        2 3 4<br>
        5 6 7<br>
        8 9 0<br>
      </div>
    </td>
    <td>
      <div>
        2 5 8<br>
        3 6 9<br>
        4 7 0<br>
      </div>
    </td>
  </tr>
</table>
