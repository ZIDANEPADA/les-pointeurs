#include <stdio.h>

char *cherche_char(const char *chaine, char caractere) {
    while (*chaine) {
        if (*chaine == caractere) {
            return (char *) chaine;
        }
        chaine++;
    }
    return NULL;
}

int main() {
    const char *chaine = "Bonjour";
    char caractere = 'j';

    char *resultat = cherche_char(chaine, caractere);

    if (resultat) {
        printf("Caractère '%c' trouvé à l'adresse %p\n", caractere, resultat);
    } else {
        printf("Caractère '%c' non trouvé\n", caractere);
    }

    return 0;
}
