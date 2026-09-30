notas = []
for i in range(15):
    nota = float(input(f"Digite a nota do {i+1}º aluno: "))
    notas.append(nota)

media_geral = sum(notas) / len(notas)
print(f"A média geral da turma é: {media_geral:.2f}")