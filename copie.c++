#include <iostream>
#include <string.h>

void copie(char *dest, const char *source) {
    strcpy(dest, source);
}

int main() {
    char dest[20];
    const char *source = "Bonjour";

    std::cout << "Chaîne avant copie : " << dest << std::endl;
    copie(dest, source);
    std::cout << "Chaîne après copie : " << dest << std::endl;

    return 0;
}


Implémentation manuelle


void copie(char *dest, const char *source) {
    while ((*dest++ = *source++) != '\0') {}
}

int main() {
    char dest[20];
    const char *source = "Bonjour";

    std::cout << "Chaîne avant copie : " << dest << std::endl;
    copie(dest, source);
    std::cout << "Chaîne après copie : " << dest << std::endl;

    return 0;
}

