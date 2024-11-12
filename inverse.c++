#include <stdio.h>
#include <string.h>

void inverse(char *chaine) {
    int longueur = strlen(chaine);
    char *debut = chaine;
    char *fin = chaine + longueur - 1;
    char temporaire;

    while (debut < fin) {
        temporaire = *debut;
        *debut = *fin;
        *fin = temporaire;
        debut++;
        fin--;
    }
}

int main() {
    char chaine1[] = "Bonjour";
    char chaine2[] = "ABCDEF";
    char chaine3[] = "Palindrome";

    printf("Avant inversion : %s\n", chaine1);
    inverse(chaine1);
    printf("Après inversion : %s\n\n", chaine1);

    printf("Avant inversion : %s\n", chaine2);
    inverse(chaine2);
    printf("Après inversion : %s\n\n", chaine2);

    printf("Avant inversion : %s\n", chaine3);
    inverse(chaine3);
    printf("Après inversion : %s\n", chaine3);

    return 0;
}