# Fun��es
def MultiploDe3(num):
    if num % 3 == 0:
        return True


def Fatorial(num):
    fat = 1
    for a in range(1, num+1):
        fat *= a
    return fat


def CalcularS(num):
    S = 0
    for b in range(num+1):
        S += num/Fatorial(b)
    return S


# Corpo
total = 0
for a in range(5):
    num = int(input())
    if MultiploDe3(num):
        total += Fatorial(num)
    else:
        total += CalcularS(num)
print("%.2f" %total)