> **Descrição**

Escreva um programa que recebe informações de várias figuras geométricas  e, em seguida, imprime um resumo das características (área e comprimento) dessas figuras. O programa pode receber até 3 tipos de figuras: quadrado, retângulo e círculo, identificados pela primeira letra da figura. Caso as dimensões da figura forem negativas, o resultado do cálculo das características será -1. O programa encerrará quando o usuário digitar sair no tipo da figura.

Use funções para modularizar seu programa. Faça uma função para cada cálculo de característica de uma figura. Faça também uma função para imprimir o resumo final.

Obs.: Use pi = 3.14 e o resultado com 2 casas decimais de aproximação.

> **Formato de entrada**

Várias informações de figuras geométricas em sequência:

- Tipo da figura: (q)uadrado, (r)etângulo, (c)írculo
- Em seguida:

    - Se a figura for um quadrado, receba o lado do quadrado
    - Se a figura for um retângulo, receba a medida da base e da altura
    - Se a figura for um círculo, receba o valor do raio

> **Formato de saída**

Seu programa deve imprimir no final as seguintes informações:

- Os valores das maiores figuras de cada tipo
- O número total de figuras
- O percentual de figuras que são círculos

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
        q<br>
        2<br>
        r<br>
        1<br>
        3<br>
        c<br>
        5<br>
        q<br>
        6<br>
        c<br>
        3<br>
        r<br>
        4<br>
        7<br>
        sair<br>
      </div>
    </td>
    <td>
      <div>
        Maior circulo: 78.50<br>
        Maior retangulo: 28.00<br>
        Maior quadrado: 36.00<br>
        Quantidade de figuras 6<br>
        Percentual de circulos: 33.33<br>
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
        q<br>
        2<br>
        c<br>
        2<br>
        r<br>
        2<br>
        2<br>
        q<br>
        3<br>
        c<br>
        3<br>
        r<br>
        3<br>
        3<br>
        q<br>
        -1<br>
        r<br>
        -1<br>
        -1<br>
        c<br>
        -1<br>
        c<br>
        4<br>
        q<br>
        4<br>
        r<br>
        4<br>
        4<br>
        c<br>
        5<br>
        q<br>
        5<br>
        r<br>
        5<br>
        5<br>
        c<br>
        6<br>
        sair<br>
      </div>
    </td>
    <td>
      <div>
        Maior circulo: 113.04<br>
        Maior retangulo: 25.00<br>
        Maior quadrado: 25.00<br>
        Quantidade de figuras 16<br>
        Percentual de circulos: 37.50<br>
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
        c<br>
        -1<br>
        q<br>
        -1<br>
        r<br>
        -1<br>
        -1<br>
        sair<br>
      </div>
    </td>
    <td>
      <div>
        Maior circulo: -1.00<br>
        Maior retangulo: -1.00<br>
        Maior quadrado: -1.00<br>
        Quantidade de figuras 3<br>
        Percentual de circulos: 33.33<br>
      </div>
    </td>
  </tr>
</table>
