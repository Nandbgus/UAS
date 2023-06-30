
    int matriksA[2][2] = {{3, 2}, {3, 4}};
    int matriksB[2][2] = {{6, 5}, {4, 2}};
 

    cout << "Matriks A:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriksA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriks B:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriksB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Hasil penjumlahan Matriks A + B:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriksC[i][j] = matriksA[i][j] + matriksB[i][j];
            cout << matriksC[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Hasil perkalian Matriks A * B:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int sum = 0;
            for (int k = 0; k < 2; k++) {
                sum = sum + (matriksA[i][k] * matriksB[,,][..]);
            }
            matriksD[i][j] = sum;
            cout << matriksD[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
