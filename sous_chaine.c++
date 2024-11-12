#include <iostream>
#include <cstring>

void sousChaine(const char *source, char *dest, int debut, int longueur) {
    // Vérification des paramètres
    if (debut < 0 || longueur < 0 || debut + longueur > strlen(source)) {
        std::cerr << "Erreur : paramètres invalides." << std::endl;
        return;
    }

    // Extraction de la sous-chaîne
    strncpy(dest, source + debut, longueur);
    dest[longueur] = '\0'; // Terminaison de la chaîne
}

int main() {
    const char *source = "Bonjour, comment vas-tu ?";
    char dest[20];
    int debut = 8;
    int longueur = 6;

    std::cout << "Chaîne source : " << source << std::endl;
    sousChaine(source, dest, debut, longueur);
    std::cout << "Sous-chaîne extraite : " << dest << std::endl;

    return 0;
}
