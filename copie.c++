#include <stdio.h>

void copie(char *dest, const char *source) {
    while (*source != '\0') {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0'; // Ajouter le caractère nul
}

int main() {
    char dest[20];
    const char *source = "Bonjour";

    copie(dest, source);
    printf("Chaîne copiée : %s\n", dest);

    return 0;
}
