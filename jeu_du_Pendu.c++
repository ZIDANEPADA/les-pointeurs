#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_TENTATIVES 8
#define LONGUEUR_MOT 12

void affiche_pendu(int erreurs) {
    switch (erreurs) {
        case 1:
            printf(" +---+\n");
            printf(" |   |\n");
            printf("     |\n");
            printf("     |\n");
            printf("     |\n");
            printf("     |\n");
            break;
        case 2:
            printf(" +---+\n");
            printf(" |   |\n");
            printf(" O   |\n");
            printf("     |\n");
            printf("     |\n");
            printf("     |\n");
            break;
        case 3:
            printf(" +---+\n");
            printf(" |   |\n");
            printf(" O   |\n");
            printf(" |   |\n");
            printf("     |\n");
            printf("     |\n");
            break;
        case 4:
            printf(" +---+\n");
            printf(" |   |\n");
            printf(" O   |\n");
            printf(" /|   |\n");
            printf("     |\n");
            printf("     |\n");
            break;
        case 5:
            printf(" +---+\n");
            printf(" |   |\n");
            printf(" O   |\n");
            printf(" /|\\  |\n");
            printf("     |\n");
            printf("     |\n");
            break;
        case 6:
            printf(" +---+\n");
            printf(" |   |\n");
            printf(" O   |\n");
            printf(" /|\\  |\n");
            printf(" /    |\n");
            printf("     |\n");
            break;
        case 7:
            printf(" +---+\n");
            printf(" |   |\n");
            printf(" O   |\n");
            printf(" /|\\  |\n");
            printf(" / \\  |\n");
            printf("     |\n");
            break;
        case 8:
            printf(" +---+\n");
            printf(" |   |\n");
            printf(" X   |\n");
            printf(" /|\\  |\n");
            printf(" / \\  |\n");
            printf(" GAME OVER!\n");
            break;
        default:
            break;
    }
}

int main() {
    char mot[LONGUEUR_MOT] = "PROGRAMMATION";
    char mot_cache[LONGUEUR_MOT];
    char lettre;
    int tentatives = 0;
    int victoire = 0;

    // Initialisation du mot caché
    for (int i = 0; i < LONGUEUR_MOT; i++) {
        mot_cache[i] = '_';
    }
    mot_cache[LONGUEUR_MOT] = '\0';

    printf("Bienvenue au jeu du Pendu!\n");
    printf("Mot à deviner : %s\n", mot_cache);

    while (tentatives < MAX_TENTATIVES && !victoire) {
        printf("Entrez une lettre : ");
        scanf(" %c", &lettre);

        // Vérification de la lettre
        int bonne_lettre = 0;
        for (int i = 0; i < LONGUEUR_MOT; i++) {
            if (mot[i] == lettre) {
                mot_cache[i] = lettre;
                bonne_lettre = 1;
            }
        }

        // Mise à jour de l'affichage
        printf("Mot à deviner : %s\n", mot_cache);

        // Vérification de la victoire
        victoire = 1;
        for (int i = 0; i < LONGUEUR_MOT; i++) {
            if (mot_cache[i] == '_') {
                victoire = 0;
                break;
            }
        }

        // Erreur
        if (!bonne_lettre) {
            tentatives++;
            affiche_pendu(tentatives);
            printf("Tentatives restantes : %d\n", MAX_TENTATIVES - tentatives);
        }
    }

    // Fin de partie
    if (victoire) {
        printf("Félicitations, vous avez gagné!\n");
    } else {
        printf("Game Over! Le mot était : %s\n", mot);
    }

    return 0;
}