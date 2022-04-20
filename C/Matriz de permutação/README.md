> **Descrição**

Dizemos que uma matriz inteira Anxn  é uma matriz de permutação se em cada linha e em cada coluna houver n-1 elementos nulos e um único elemento igual a 1.
Exemplo:

A matriz abaixo é de permutação:

![image](https://user-images.githubusercontent.com/97174573/164340815-50f94a34-2ca9-4181-a323-2a776b19dbbe.png)

Observe que

![image](https://user-images.githubusercontent.com/97174573/164340826-b4903a0e-c41e-4bb6-87d1-9abd111c4b7e.png)

não é de permutação.

Dada uma matriz inteira Anxn, verificar se A é de permutação.

> **Formato de entrada**

* Um número inteiro que indica a ordem da matriz
* Os valores (inteiros) das entradas matriz em uma única linha, separados por um espaço

> **Formato de saída**

A própria matriz em formato tabular

Um valor booleano (True ou False) que indica se a matriz é de permutação ou não.

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
        4<br>
        0 1 0 0 0 0 1 0 1 0 0 0 0 0 0 1<br>
      </div>
    </td>
    <td>
      <div>
        0 1 0 0 <br>
        0 0 1 0 <br>
        1 0 0 0 <br>
        0 0 0 1 <br>
        True <br>
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
        2 1 0 1 2 0 0 0 1<br>
      </div>
    </td>
    <td>
      <div>
        2 1 0<br>
        1 2 0<br>
        0 0 1<br> 
        False<br>
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
        5<br>
        1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1 0 0 0 0<br>
      </div>
    </td>
    <td>
      <div>
        1 0 0 0 0<br>
        1 0 0 0 0 <br>
        1 0 0 0 0 <br>
        1 0 0 0 0 <br>
        1 0 0 0 0 <br>
        False <br>
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
        5<br>
        1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1 0 0 1 0 1 0 0 0 0<br>
      </div>
    </td>
    <td>
      <div>
        1 0 0 0 0 <br>
        1 0 0 0 0 <br>
        1 0 0 0 0 <br>
        1 0 0 1 0 <br>
        1 0 0 0 0 <br>
        False <br>
      </div>
    </td>

  </tr>
</table>
