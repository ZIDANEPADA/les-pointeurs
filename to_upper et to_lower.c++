#
include <stdio.h>
#include <ctype.h>

void to_upper(char *chaine) {
    while (*chaine) {
        if (islower(*chaine)) {
            *chaine = toupper(*chaine);
        }
        chaine++;
    }
}

void to_lower(char *chaine) {
    while (*chaine) {
        if (isupper(*chaine)) {
            *chaine = tolower(*chaine);
        }
        chaine++;
    }
}

int main() {
    char chaine1[] = "Bonjour";
    char chaine2[] = "BONJOUR";

    printf("Avant transformation : %s\n", chaine1);
    to_upper(chaine1);
    printf("Après transformation en majuscules : %s\n\n", chaine1);

    printf("Avant transformation : %s\n", chaine2);
    to_lower(chaine2);
    printf("Après transformation en minuscules : %s\n", chaine2);
    return 0;
}