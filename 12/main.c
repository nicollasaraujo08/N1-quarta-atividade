valores = []
for i in range(5):
    val = float(input(f"Digite o {i+1}º valor: "))
    valores.append(val)

maior = max(valores)
menor = min(valores)
media = sum(valores) / len(valores)

print(f"Valores lidos: {valores}")
print(f"Maior valor: {maior}")
print(f"Menor valor: {menor}")
print(f"Média dos valores: {media:.2f}")