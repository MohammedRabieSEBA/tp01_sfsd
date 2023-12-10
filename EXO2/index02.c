#include <stdio.h>
#include <string.h>

int main() {
    FILE *fichier;
    char mot[100], ligne[1000];
    int compteur = 0;

    printf("Entrez le mot à rechercher : ");
    scanf("%s", mot);

    fichier = fopen(".\\EXO2\\nom_du_fichier.txt", "r");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1;
    }

    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        if (strstr(ligne, mot) != NULL) {
            compteur++;
        }
    }

    printf("Le mot '%s' apparaît %d fois dans le fichier.\n", mot, compteur);

    fclose(fichier);
    return 0;
}
