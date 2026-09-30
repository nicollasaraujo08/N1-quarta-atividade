vetor = []

# Leitura do vetor de 8 posições (índices 0 a 7)
for i in range(8):
    vetor.append(int(input(f"Digite o valor para a posição {i}: ")))

# Leitura das posições X e Y
x = int(input("Digite a posição X (entre 0 e 7): "))
y = int(input("Digite a posição Y (entre 0 e 7): "))

if 0 <= x < 8 and 0 <= y < 8:
    soma = vetor[x] + vetor[y]
    print(f"O valor na posição {x} é {vetor[x]} e na posição {y} é {vetor[y]}.")
    print(f"A soma dos valores encontrados é: {soma}")
else:
    print("Posições inválidas! Devem estar entre 0 e 7.")