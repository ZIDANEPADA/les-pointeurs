#include <iostream>
#include <string.h>

char* cherche_char(const char *chaine, char caractere) {
    return strchr(chaine, caractere);
}

int main() {
    const char *chaine = "Bonjour";
    char caractere = 'j';

    char *resultat = cherche_char(chaine, caractere);

    if (resultat != NULL) {
        std::cout << "Caractère trouvé : " << resultat << std::endl;
    } else {
        std::cout << "Caractère non trouvé." << std::endl;
    }

    return 0;
}

