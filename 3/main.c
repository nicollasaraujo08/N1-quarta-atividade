vetor_original = []
vetor_quadrado = []

# Leitura de 10 números reais
for i in range(10):
    num = float(input(f"Digite o {i+1}º número real: "))
    vetor_original.append(num)
    vetor_quadrado.append(num ** 2)

# Imprimir todos os conjuntos
print("\nVetor original:", vetor_original)
print("Vetor com os quadrados:", vetor_quadrado)