#include <stdio.h>

int compte_mots(const char *phrase) {
    int mots = 0;
    int dans_mot = 0;

    while (*phrase) {
        if (*phrase == ' '  *phrase == '\t'  *phrase == '\n') {
            dans_mot = 0;
        } else if (!dans_mot) {
            mots++;
            dans_mot = 1;
        }
        phrase++;
    }

    return mots;
}

int main() {
    const char *phrase = "Bonjour, comment vas-tu ?";
    int nb_mots = compte_mots(phrase);

    printf("Nombre de mots : %d\n", nb_mots);

    return 0;
}