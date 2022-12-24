veiculos = int(input())
total = 0
casas = 0

while veiculos != 999:
    if veiculos > 2:
        multa = (veiculos-2)*12.89
        total += multa
        casas += 1
        veiculos = int(input())
    else:
        veiculos = int(input())

print("%.2f" %total)
print(casas)