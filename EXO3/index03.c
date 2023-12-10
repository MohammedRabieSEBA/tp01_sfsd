#include <stdio.h>

int main() {
    FILE *fichier1, *fichier2;
    char caractere;

    fichier1 = fopen(".\\EXO3\\fichier1.txt", "r");
    fichier2 = fopen(".\\EXO3\\fichier2.txt", "a");

    if (fichier1 == NULL || fichier2 == NULL) {
        printf("Erreur lors de l'ouverture des fichiers.\n");
        return 1;
    }

    while ((caractere = fgetc(fichier1)) != EOF) {
        fputc(caractere, fichier2);
    }

    fclose(fichier1);
    fclose(fichier2);

    return 0;
}
