#include <stdio.h>
#include <stdlib.h>

void tri_fusion(int *A, int deb, int fin);

void fusion(int *A, int deb, int mil, int fin) {
    int n1, n2, i, j, k;
    int L[50];
    int R[50];
    n1 = mil - deb + 1;
    n2 = fin - mil;
    for (i = 0; i < n1; i++) {
        L[i] = A[deb + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = A[mil + 1 + j];
    }
    L[n1] = 9999;
    R[n2] = 9999;
    i = j = 0;
    for (k = deb; k <= fin; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

void tri_fusion(int *A, int deb, int fin) {
    int mil;
    if (deb < fin) {
        mil = (deb + fin) / 2;
        tri_fusion(A, deb, mil);
        tri_fusion(A, mil + 1, fin);
        fusion(A, deb, mil, fin);
    }
}

void affiche(int tab[], int taille) {
    int i;
    for (i = 0; i < taille; i++) {
        printf("[%d]", tab[i]);
    }
}

int main() {
    int taille = 10;
    int tab[] = {0, 2, 9, 1, 3, 4, 8, 0, 6, 7};
    affiche(tab, taille);
    tri_fusion(tab, 0, taille - 1);
    printf("\n");
    affiche(tab, taille);
    return 0;
}
