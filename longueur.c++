#include <stdio.h>

int longueur(const char *chaine) {
    int taille = 0;
    while (*chaine != '\0') {
        taille++;
        chaine++;
    }
    return taille;
}

int main() {
    const char *chaine1 = "Bonjour";
    const char *chaine2 = "Hello World!";
    const char *chaine3 = "";

    printf("Longueur de '%s' : %d\n", chaine1, longueur(chaine1));
    printf("Longueur de '%s' : %d\n", chaine2, longueur(chaine2));
    printf("Longueur de '%s' : %d\n", chaine3, longueur(chaine3));

    return 0;
}
