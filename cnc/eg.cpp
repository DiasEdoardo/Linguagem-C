#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n = 3;

    std::vector<std::vector<double>> A(n, std::vector<double>(n));
    std::vector<double> B(n);
    std::vector<double> X(n);

    A[0][0] = 3.0;
    A[0][1] = 2.0;
    A[0][2] = 4.0;
    B[0] = 1.0;
    A[1][0] = 1.0;
    A[1][1] = 1.0;
    A[1][2] = 2.0;
    B[1] = 2.0;
    A[2][0] = 4.0;
    A[2][1] = 3.0;
    A[2][2] = 2.0;
    B[2] = 3.0;

    // aqui é o pivoteamento
    for (int k = 0; k < n - 1; k++) {
        double maxVal = std::abs(A[k][k]);
        int maxRow = k;
        for (int i = k + 1; i < n; i++) {
            if (std::abs(A[i][k]) > maxVal) {
                maxVal = std::abs(A[i][k]);
                maxRow = i;
            }
        }

        if (maxRow != k) {
            std::swap(A[k], A[maxRow]);
            std::swap(B[k], B[maxRow]);
        }

        for (int i = k + 1; i < n; i++) {
            double m = A[i][k] / A[k][k];
            for (int j = k; j < n; j++) {
                A[i][j] -= m * A[k][j];
            }
            B[i] -= m * B[k];
        }
    }

    // resolve-se o sistema triangular resultante
    for (int i = n - 1; i >= 0; i--) {
        X[i] = B[i];
        for (int j = i + 1; j < n; j++) {
            X[i] -= A[i][j] * X[j];
        }
        X[i] /= A[i][i];
    }

    std::cout << "solucao encontrada:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "X" << i << " = " << X[i] << "\t";
    }

    return 0;
}
