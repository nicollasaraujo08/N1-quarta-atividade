valores = []
for i in range(5):
    val = float(input(f"Digite o {i+1}º valor: "))
    valores.append(val)

maior = max(valores)
menor = min(valores)
pos_maior = valores.index(maior)
pos_menor = valores.index(menor)

print(f"Valores lidos: {valores}")
print(f"O maior valor é {maior} e encontra-se na posição {pos_maior}.")
print(f"O menor valor é {menor} e encontra-se na posição {pos_menor}.")