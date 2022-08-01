> **Descrição**

A distância entre os pontos A e B é a medida do segmento que tem os dois pontos como extremidade. Por se tratar de dois pontos quaisquer, representaremos as coordenadas desses pontos de maneira genérica.

![image](https://user-images.githubusercontent.com/97174573/182248608-df24cea6-185d-4f07-80d0-4e6379dffc92.png)

Fonte: Brasil Escola

Dessa forma para calcular a distância entre dois pontos faz-se necessário utilizar a seguinte fórmula (distância euclidiana):

![image](https://user-images.githubusercontent.com/97174573/182248644-51e9c340-df89-4073-9c93-5c707b7c5b3c.png)

Escreva um programa que leia um conjunto de N pares de pontos representados por suas coordenadas  X e Y, mostrando como resultado a distância euclidiana entre cada um destes pontos.

A distância euclidiana tem que ser calculada por uma função chamada distancia, a qual recebe como parâmetros as coordenadas Xa, Ya, Xb e Yb, retornando como resultado a distância entre os pontos A e B

> **Formato de entrada**

Na primeira linha deve ser lido o valor de N, que representa quantos pares de pontos serão lidos nas linhas seguintes.

As N linhas seguintes terão 4 inteiros separados entre si por um espaço em branco dispostos na mesma linha. Os dois primeiros representam na sequência as coordenados x e y do ponto A e os dois últimos as coordenadas x e y do ponto B

> **Formato de saída**

Para cada par de pontos, deve ser impresso um número real (ponto flutuante) com 2 casas decimais representando a distância euclidiana entre os pontos A e B.

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
        -1 -2 0 -1<br>
        100 210 40 1<br>
        1 1 5 8<br>
      </div>
    </td>
    <td>
      <div>
        1.41<br>
        217.44<br>
        8.06<br>
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
        1<br>
        0 0 0 0<br>
      </div>
    </td>
    <td>
      <div>
        0.00<br>
      </div>
    </td>
  </tr>
</table>
