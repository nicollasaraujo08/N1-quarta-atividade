vetor = []

for i in range(6):
    vetor.append(int(input(f"Digite o {i+1}º valor: ")))

print("\nValores na ordem inversa:")
# Percorre o vetor de trás para a frente
for valor in reversed(vetor):
    print(valor)