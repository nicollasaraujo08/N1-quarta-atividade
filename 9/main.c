vetor = []
count = 0

print("Digite 6 números inteiros PARES:")
while count < 6:
    val = int(input(f"Digite o {count+1}º valor par: "))
    if val % 2 == 0:
        vetor.append(val)
        count += 1
    else:
        print("Número inválido! Tem de ser um número par. Tente novamente.")

print("\nValores pares na ordem inversa:")
for valor in reversed(vetor):
    print(valor)