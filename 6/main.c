vetor = []

for i in range(10):
    vetor.append(float(input(f"Digite o {i+1}º elemento: ")))

maior = max(vetor)
menor = min(vetor)

print(f"O maior elemento é: {maior}")
print(f"O menor elemento é: {menor}")