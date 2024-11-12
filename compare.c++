#include <iostream>
#include <string.h>

void compare(char *chaine1, const char *chaine2) {
    int resultat = strcmp(chaine1, chaine2);

    if (resultat == 0) {
        std::cout << "Les chaînes sont égales." << std::endl;
    } else if (resultat > 0) {
        std::cout << chaine1 << " est lexicographiquement supérieure à " << chaine2 << std::endl;
    } else {
        std::cout << chaine1 << " est lexicographiquement inférieure à " << chaine2 << std::endl;
    }
}

int main() {
    char chaine1[] = "Bonjour";
    const char *chaine2 = "Bonsoir";

    compare(chaine1, chaine2);

    return 0;
}
