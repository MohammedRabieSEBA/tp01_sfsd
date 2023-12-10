#include <stdio.h>

typedef struct {
    char ville[50];
    char date[20];
    float temperature;
} Enregistrement;

int main() {
    int n; // Nombre d'enregistrements à créer ou à lire
    printf("Entrez le nombre d'enregistrements : ");
    scanf("%d", &n);

    // Création du fichier binaire
    FILE *fichier = fopen(".\\EXO6\\mesures.bin", "wb");
    if (fichier == NULL) {
        printf("Erreur lors de la création du fichier.\n");
        return 1;
    }

    // Saisie des enregistrements et écriture dans le fichier
    for (int i = 0; i < n; i++) {
        Enregistrement record;
        printf("Enregistrement %d\n", i+1);
        printf("Ville : ");
        scanf("%s", record.ville);
        printf("Date : ");
        scanf("%s", record.date);
        printf("Température : ");
        scanf("%f", &record.temperature);
        fwrite(&record, sizeof(Enregistrement), 1, fichier);
    }

    fclose(fichier);
    
    return 0;
}