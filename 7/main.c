vetor = []

for i in range(10):
    vetor.append(int(input(f"Digite o {i+1}º número: ")))

maior = vetor[0]
posicao = 0

for i in range(1, 10):
    if vetor[i] > maior:
        maior = vetor[i]
        posicao = i

print(f"\nVetor: {vetor}")
print(f"O maior elemento é {maior} e encontra-se na posição {posicao} (índice).")