#include <iostream>
using namespace std;

int main() {
    int m, n, n2, p;
    cin >> m >> n >> n2 >> p;

    if (n != n2) {
        return 0;
    }

    int A[m][n];
    int B[n][p];
    int C[m][p];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
        

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
