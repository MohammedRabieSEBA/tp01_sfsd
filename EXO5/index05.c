#include <stdio.h>
#include <string.h>

int main() {
    FILE *fichier1, *fichier2;
    char ligne1[1000], ligne2[1000];
    int numLigne = 1;

    fichier1 = fopen("fichier1.txt", "r");
    fichier2 = fopen("fichier2.txt", "r");

    if (fichier1 == NULL || fichier2 == NULL) {
        printf("Erreur lors de l'ouverture des fichiers.\n");
        return 1;
    }

    while (fgets(ligne1, sizeof(ligne1), fichier1) != NULL && fgets(ligne2, sizeof(ligne2), fichier2) != NULL) {
        if (strcmp(ligne1, ligne2) != 0) {
            printf("Différence à la ligne %d :\n", numLigne);
            printf("Fichier 1 : %s", ligne1);
            printf("Fichier 2 : %s", ligne2);
        }
        numLigne++;
    }

    fclose(fichier1);
    fclose(fichier2);

    return 0;
}
