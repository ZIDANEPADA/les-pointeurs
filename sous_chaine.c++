#include <stdio.h>
#include <string.h>

void sous_chaine(const char *source, char *dest, int debut, int longueur) {
    // Vérification des paramètres
    if (debut < 0  longueur < 0  debut + longueur > strlen(source)) {
        printf("Erreur : paramètres invalides.\n");
        return;
    }

    // Extraction de la sous-chaîne
    strncpy(dest, source + debut, longueur);
    dest[longueur] = '\0'; // Ajout du caractère nul
}

int main() {
    const char *source = "Bonjour, comment vas-tu ?";
    char dest[20];
    int debut = 8;
    int longueur = 10;

    sous_chaine(source, dest, debut, longueur);
    printf("Sous-chaîne extraite : %s\n", dest);

    return 0;
}