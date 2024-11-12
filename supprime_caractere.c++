#include <stdio.h>
#include <string.h>

void supprime_caractere(char *chaine, char caractere) {
    int i, j = 0;

    for (i = 0; chaine[i]; i++) {
        if (chaine[i] != caractere) {
            chaine[j++] = chaine[i];
        }
    }

    chaine[j] = '\0'; // Marquer la fin de la chaîne
}

int main() {
    char chaine[] = "Bonjour, comment vas-tu ?";
    char caractere = 'o';

    printf("Chaîne originale : %s\n", chaine);
    supprime_caractere(chaine, caractere);
    printf("Chaîne après suppression : %s\n", chaine);

    return 0;
}