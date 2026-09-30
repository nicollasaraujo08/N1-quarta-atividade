vetor = []
pares = 0

for i in range(10):
    val = int(input(f"Digite o {i+1}º valor: "))
    vetor.append(val)
    if val % 2 == 0:
        pares += 1

print(f"O vetor possui {pares} valores pares.")