#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define SIZE 40
void executer_programme(int n) {
    char chemin[50];
    sprintf(chemin, ".\\EXO%d\\index0%d.c", n, n);
    if (access(chemin, F_OK) != -1 ) {
        char commande[100];
        sprintf(commande, "gcc %s -o .\\EXO%d\\programme%d", chemin, n);
        system(commande);
        sprintf(commande, ".\\EXO%d\\programme1987855904.exe", n);
        system(commande);
    } else {
        printf("Le programme %d n'existe pas.\n", n);
    }
}

void afficher_menu() {
    printf("Menu :\n");
    for (int i = 1; i <= 6; i++) {
        printf("%d. Programme %d\n", i, i);
    }
    printf("0. Quitter\n");
}

int main() {
    while (1) {
        afficher_menu();
        int choix;
        printf("Choisissez le programme a executer (1-6) ou 0 pour quitter : ");
        scanf("%d", &choix);
        if (choix == 0) {
            printf("Au revoir !\n");
            break;
        }
        executer_programme(choix);
    }
    return 0;
}
