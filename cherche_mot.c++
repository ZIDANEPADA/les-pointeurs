#include <iostream>
#include <string.h>

char* cherche_mot(const char *phrase, const char *mot) {
    return strstr(phrase, mot);
}

int main() {
    const char *phrase = "Bonjour, comment vas-tu ?";
    const char *mot = "comment";

    char *resultat = cherche_mot(phrase, mot);

    if (resultat != NULL) {
        std::cout << "Mot trouvé : " << resultat << std::endl;
    } else {
        std::cout << "Mot non trouvé." << std::endl;
    }

    return 0;
}
