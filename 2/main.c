vetor = []

# Leitura dos 6 valores
for i in range(6):
    valor = int(input(f"Digite o {i+1}º valor inteiro: "))
    vetor.append(valor)

# Exibição dos valores lidos
print("\nValores lidos:")
for valor in vetor:
    print(valor)