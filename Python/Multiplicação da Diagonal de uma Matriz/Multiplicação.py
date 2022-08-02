while True:
    k = int(input())
    if k == 0:
        break
    lista = []
    col1 = []
    col2 = []
    col3 = []
    col4 = []
    for y in range(4):
        entrada1 = int(input())
        col1.append(entrada1)
        entrada2 = int(input())
        col2.append(entrada2)
        entrada3 = int(input())
        col3.append(entrada3)
        entrada4 = int(input())
        col4.append(entrada4)
    col1[0] *= k
    col2[1] *= k
    col3[2] *= k
    col4[3] *= k
    lista.append(col1)
    lista.append(col2)
    lista.append(col3)
    lista.append(col4)
    for a in range(4):
        print(*lista[a], end=" ")
        print()
