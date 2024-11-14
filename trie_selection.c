#include <stdio.h>



int main() {
    int n,i, j, min_index, temp;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    int tableau[n];
    printf("Entrez les éléments du tableau :\n");
    for (i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
            for (i = 0; i < n - 1; i++) {
        min_index = i;
        for (j = i + 1; j < n; j++) {
            if (tableau[j] < tableau[min_index]) {
                min_index = j;
            }
        }

        temp = tableau[i];
        tableau[i] = tableau[min_index];
        tableau[min_index] = temp;
    }
        printf("Tableau trié : [ ");
        for (i = 0; i < n; i++)
            printf("%d ", tableau[i]);
            printf("]");

    return 0;
}
