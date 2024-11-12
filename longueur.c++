#include <iostream>

int longueur(const char *chaine) {
    int longueur = 0;
    while (*chaine != '\0') {
        longueur++;
        chaine++;
    }
    return longueur;
}

int main() {
    const char *chaine1 = "Bonjour";
    const char *chaine2 = "ABCDEF";
    const char *chaine3 = "";

    std::cout << "Longueur de \"" << chaine1 << "\" : " << longueur(chaine1) << std::endl;
    std::cout << "Longueur de \"" << chaine2 << "\" : " << longueur(chaine2) << std::endl;
    std::cout << "Longueur de \"" << chaine3 << "\" : " << longueur(chaine3) << std::endl;

   return 0;
}
