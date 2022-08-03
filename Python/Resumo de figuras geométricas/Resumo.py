figuras = 0
MaiorQuadrado = -2
MaiorRetangulo = -2
MaiorCirculo = -2
circulos = 0
while True:
    figura = str(input())
    figuras += 1
    if figura == "q":
        lado = float(input())
        def AreaQuadrado(lado):
            if lado < 0:
                areaq = -1
            else:
                areaq = lado ** 2
            return areaq


        if AreaQuadrado(lado) > MaiorQuadrado:
            MaiorQuadrado = AreaQuadrado(lado)
        continue
    elif figura == "r":
        base = float(input())
        altura = float(input())
        def AreaRetangulo(base, altura):
            if base < 0 or altura < 0:
                arear = -1
            else:
                arear = base * altura
            return arear


        if AreaRetangulo(base, altura) > MaiorRetangulo:
            MaiorRetangulo = AreaRetangulo(base, altura)
        continue
    elif figura == "c":
        circulos += 1
        raio = float(input())
        def AreaCirculo(raio):
            if raio < 0:
                areac = -1
            else:
                areac = 3.14 * (raio ** 2)
            return areac


        if AreaCirculo(raio) > MaiorCirculo:
            MaiorCirculo = AreaCirculo(raio)
        continue
    else:
        print("Maior circulo:", "%.2f" %MaiorCirculo)
        print("Maior retangulo:", "%.2f" %MaiorRetangulo)
        print("Maior quadrado:", "%.2f" %MaiorQuadrado)
        print("Quantidade de figuras", figuras-1)
        print("Percentual de circulos:", "%.2f" %(circulos/(figuras-1)*100))
        break