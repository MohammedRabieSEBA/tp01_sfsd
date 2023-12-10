
#include <stdio.h>

int main() {
    FILE *fichier;
    char caractere;

    fichier = fopen(".\\EXO2\\nom_du_fichier.txt", "r");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1;
    }

    while ((caractere = fgetc(fichier)) != EOF) {
        printf("%c", caractere);
    }

    fclose(fichier);
    return 0;
}
