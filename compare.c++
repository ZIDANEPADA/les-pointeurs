#include <stdio.h>

int compare(const char *chaine1, const char *chaine2) {
    while (*chaine1 && (*chaine1 == *chaine2)) {
        chaine1++;
        chaine2++;
    }
    return (*chaine1 - *chaine2);
}

int main() {
    const char *chaine1 = "Bonjour";
    const char *chaine2 = "Bonsoir";

    int resultat = compare(chaine1, chaine2);
    printf("Résultat : %d\n", resultat);

    if (resultat < 0) {
        printf("%s est plus petit que %s\n", chaine1, chaine2);
    } else if (resultat > 0) {
        printf("%s est plus grand que %s\n", chaine1, chaine2);
    } else {
        printf("%s est égal à %s\n", chaine1, chaine2);
    }

    return 0;
}
