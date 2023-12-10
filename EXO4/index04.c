#include <stdio.h>

int main() {
    FILE *fichier;
    char ligne[1000];
    int compteur = 0;

    fichier = fopen(".\\EXO4\\nom_du_fichier.txt", "r");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1;
    }

    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        compteur++;
    }

    printf("Le fichier contient %d lignes.\n", compteur);

    fclose(fichier);
    return 0;
}
