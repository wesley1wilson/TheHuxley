> **Descrição**

Escreva um programa que receba como entrada 5 números inteiros positivos. Cada número lido da entrada vai gerar um novo valor que depende do seguinte:

1. Se o número lido da entrada for múltiplo de 3, o novo valor será o fatorial do número lido;
2. Se o número lido da entrada NÃO for múltiplo de 3, o novo valor será dado por S em que S é o resultado da série:
  * S = num/fat(0) + num/fat(1) + num/fat(2) + ... + num/fat(num)
  * Em que, fat(x) corresponde ao fatorial do número x.
O resultado deve ser a soma dos valores gerados a partir de cada número lido.


Para isso, é obrigatório a criação de três funções: uma para calcular o fatorial de um número, uma para calcular o valor de S e uma para verificar se um número é ou não múltiplo de 3.

> **Formato de entrada**

Cinco números inteiros. (Considere que todas os valores da entrada são maiores ou iguais a zero.)

> **Formato de saída**

Um número real com duas casas decimais.

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
        5<br>
        1<br>
        2<br>
        0<br>
      </div>
    </td>
    <td>
      <div>
        27.58<br>
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
        0<br>
        1<br>
        0<br>
        1<br>
        0<br>
      </div>
    </td>
    <td>
      <div>
        7.00<br>
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
        7<br>
        1<br>
        9<br>
        2<br>
      </div>
    </td>
    <td>
      <div>
        362912.03<br>
      </div>
    </td>
</table>
