#include <iostream>

void toUpper(char *chaine) {
    while (*chaine) {
        if (*chaine >= 'a' && *chaine <= 'z') {
            *chaine -= 32; // Différence ASCII entre minuscule et majuscule
        }
        chaine++;
    }
}

void toLower(char *chaine) {
    while (*chaine) {
        if (*chaine >= 'A' && *chaine <= 'Z') {
            *chaine += 32; // Différence ASCII entre majuscule et minuscule
        }
        chaine++;
    }
}

int main() {
    char chaine[] = "Bonjour, Comment Vas-Tu ?";

    std::cout << "Chaîne originale : " << chaine << std::endl;

    toUpper(chaine);
    std::cout << "Chaîne en majuscules : " << chaine << std::endl;

    toLower(chaine);
    std::cout << "Chaîne en minuscules : " << chaine << std::endl;

    return 0;
}

