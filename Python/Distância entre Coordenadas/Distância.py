# Fun��es

def dab(xa, ya, xb, yb):
    import math
    distancia = math.sqrt(((xb-xa)**2)+((yb-ya)**2))
    print("%.2f" %distancia)


# Corpo

num = int(input())
for repeticoes in range(num):
    entrada = input().split()
    entradas = [float(i) for i in entrada]
    xa = entradas[0]
    ya = entradas[1]
    xb = entradas[2]
    yb = entradas[3]
    dab(xa, ya, xb, yb)