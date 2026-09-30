vetor = []
negativos = 0
soma_positivos = 0

for i in range(10):
    num = float(input(f"Digite o {i+1}º número real: "))
    vetor.append(num)
    if num < 0:
        negativos += 1
    elif num > 0:
        soma_positivos += num

print(f"Quantidade de números negativos: {negativos}")
print(f"Soma dos números positivos: {soma_positivos}")