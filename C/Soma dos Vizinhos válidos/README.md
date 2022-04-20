> **Descrição**

Durante a pandemia, você e os seus amigos de um curso da área de TI resolveram marcar um encontro virtual para revisar o conteúdo de programação. Durante a conversa diversos desafios foram sugeridos e nesse momento Severino sugeriu um desafiou que ninguém conseguiu resolver, nem mesmo o próprio Severino. No entanto, como bom aluno você decidiu continuar sozinho tentando resolver o problema. O desafio se chama a soma de todos os vizinhos positivos de uma matriz quadrada. Considera-se como vizinhos neste programa as posições que ficam nos vizinhos adjacentes (superior, inferior, à esquerda e à direita) de uma posição da matriz. Por exemplo, veja a matriz 3x3 abaixo:

![image](https://user-images.githubusercontent.com/97174573/164340204-f64bbaac-6edf-42c2-be80-96ea4230ab67.png)

●  A posição(0,0) possui dois vizinhos válidas, são elas: (0,1) e (1,0). Por sua vez a posição (0,1), possui três vizinhos sendo dois deles vizinhos válidos: (0,2) e(1,1). Neste caso a posição (0,0) não foi considerado um vizinho válido porque nesta posição possui um valor negativo. A posição (1,1), possui quatro vizinhos válidos, são eles: (1,0), (0,1), (1,2) e (2,1).

Seu objetivo neste programa é percorrer toda a matriz, contar e somar os valores de todos os vizinhos válidos.

> **Formato de entrada**

A primeira linha da entrada contém um inteiro N, representando o número de linhas e colunas da matriz.

As N linhas seguintes contêm, cada uma, N inteiros definindo o tabuleiro inicial.

> **Formato de saída**

A saída consiste em dois números inteiros, o primeiro é a quantidade de vizinhos válidos da matriz, nesse caso, um vizinho é válido quando o valor dele é maior ou igual a zero (>=0) e a posição da matriz existe. O segundo número é a soma dos valores de todos os vizinhos adjacentes (superior, inferior, à esquerda e à direita) que são válidos, ou seja, você deve somar os valores dos vizinhos adjacentes e válidos de todas as posições da matriz. Veja a descrição da questão para saber mais sobre os vizinhos adjacentes de um posição da matriz. Além disso, consulte os exemplos abaixo para te ajudar a resolver esse desafio.

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
        -1 4 7<br>
        2 5 8<br>
        8 7 -3<br>
      </div>
    </td>
    <td>
      <div>
        20<br>
        113<br>
      </div>
    </td>
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
        5<br>
        1 2 3 4 5<br>
        1 2 3 4 5<br>
        1 2 3 4 5<br>
        1 2 3 4 5<br>
        1 2 3 4 5<br>
      </div>
    </td>
    <td>
      <div>
        80<br>
        240<br>
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
        1 3 1 2<br>
        1 -5 2 4<br>
        3 2 -1 1<br>
        -4 1 2 3<br>
      </div>
    </td>
    <td>
      <div>
        38<br>
        76<br>
      </div>
    </td>
</table>
