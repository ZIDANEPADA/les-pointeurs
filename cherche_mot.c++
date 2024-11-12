#include <stdio.h>
#include <string.h>

char *cherche_mot(const char *phrase, const char *mot) {
    char *position = strstr(phrase, mot);
    return position;
}

int main() {
    const char *phrase = "Bonjour, comment vas-tu ?";
    const char *mot1 = "comment";
    const char *mot2 = "aujourd'hui";

    char *resultat1 = cherche_mot(phrase, mot1);
    char *resultat2 = cherche_mot(phrase, mot2);

    if (resultat1) {
        printf("Mot '%s' trouvé à l'adresse %p\n", mot1, resultat1);
    } else {
        printf("Mot '%s' non trouvé\n", mot1);
    }

    if (resultat2) {
        printf("Mot '%s' trouvé à l'adresse %p\n", mot2, resultat2);
    } else {
        printf("Mot '%s' non trouvé\n", mot2);
    }

    return 0;
}