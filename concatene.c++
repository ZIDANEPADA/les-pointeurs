#include <stdio.h>

void concatene(char *dest, const char *source) {
    // Trouver la fin de dest
    char *fin_dest = dest;
    while (*fin_dest != '\0') {
        fin_dest++;
    }

    // Copier source après la fin de dest
    while (*source != '\0') {
        *fin_dest = *source;
        fin_dest++;
        source++;
    }
    *fin_dest = '\0'; // Ajouter le caractère nul
}

int main() {
    char dest[20] = "Bonjour, ";
    const char *source = "comment vas-tu?";

    concatene(dest, source);
    printf("%s\n", dest);

    return 0;
}
