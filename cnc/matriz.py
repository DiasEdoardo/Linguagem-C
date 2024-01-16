import numpy as np

NUM_LINHAS = 2
NUM_COLUNAS = 3

def imprimir_matriz(matriz):
    for i in range(NUM_LINHAS):
        for j in range(NUM_COLUNAS):
            print(f"{matriz[i][j]:.2f}", end=" ")
        print()

def eliminacao_de_gauss(matriz):
    for i in range(NUM_LINHAS - 1):
        linha_pivo = i
        for j in range(i + 1, NUM_LINHAS):
            if abs(matriz[j][i]) > abs(matriz[linha_pivo][i]):
                linha_pivo = j

        if i != linha_pivo:
            matriz[[i, linha_pivo], :] = matriz[[linha_pivo, i], :]

        for j in range(i + 1, NUM_LINHAS):
            fator = matriz[j][i] / matriz[i][i]
            matriz[j, i:] -= fator * matriz[i, i:]

def solucao_linear(matriz):
    solucao = np.zeros(NUM_LINHAS)
    for i in range(NUM_LINHAS - 1, -1, -1):
        solucao[i] = matriz[i, NUM_COLUNAS - 1]

        for j in range(i + 1, NUM_COLUNAS - 1):
            solucao[i] -= matriz[i, j] * solucao[j]

        solucao[i] /= matriz[i, i]

    return solucao

def main():
    valores_x = np.array([-1, -0.7, -0.4, -0.1, 0.2, 0.5, 0.8, 1])
    valores_fx = np.array([3.599, 2.849, 2.099, 1.349, 0.599, -0.151, -0.901, -1.402])
    matriz_entrada = np.zeros((NUM_LINHAS, NUM_COLUNAS))
    soma_x = 0
    soma_fx = 0
    soma_xfx = 0

    for i in range(NUM_LINHAS):
        for j in range(2):
            soma_xfx = 0
            for l in range(8):
                if i == 0:
                    soma_x = valores_x[l]
                elif i == 1:
                    soma_x = 1

                if j == 0:
                    soma_fx = valores_x[l]
                elif j == 1:
                    soma_fx = 1

                soma_xfx += soma_x * soma_fx

            matriz_entrada[i, j] = soma_xfx
            print(f"{matriz_entrada[i, j]:.2f}", end=" ")
        print()

    vetor_saida = np.zeros(2)

    for i in range(2):
        soma_fx = 0
        for j in range(8):
            if i == 0:
                soma_fx += valores_fx[j] * valores_x[j]
            elif i == 1:
                soma_fx += valores_fx[j]

        vetor_saida[i] = soma_fx
        print(f"{vetor_saida[i]:.2f}")

    matriz_entrada[0, 2] = vetor_saida[0]
    matriz_entrada[1, 2] = vetor_saida[1]

    print("Matriz Original:")
    imprimir_matriz(matriz_entrada)

    eliminacao_de_gauss(matriz_entrada)

    print("\nMatriz apos Eliminacao de Gauss com Pivoteamento:")
    imprimir_matriz(matriz_entrada)

    solucao_vetor = solucao_linear(matriz_entrada)

    print("\nSolucao do Sistema Linear:")
    for i in range(NUM_LINHAS):
        print(f"x{i + 1} = {solucao_vetor[i]:.2f}")

if __name__ == "__main__":
    main()
