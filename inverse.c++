#include <iostream>
#include <cstring>

void inverse(char *chaine) {
    int longueur = strlen(chaine);
    char *debut = chaine;
    char *fin = chaine + longueur - 1;

    while (debut < fin) {
        // Échange des caractères
        char temp = *debut;
        *debut = *fin;
        *fin = temp;

        debut++;
        fin--;
    }
}

int main() {
    char chaine1[] = "Bonjour";
    char chaine2[] = "ABCDEF";
    char chaine3[] = "Madam";

    std::cout << "Chaîne 1 avant inversion : " << chaine1 << std::endl;
    inverse(chaine1);
    std::cout << "Chaîne 1 après inversion : " << chaine1 << std::endl;

    std::cout << "\nChaîne 2 avant inversion : " << chaine2 << std::endl;
    inverse(chaine2);
    std::cout << "Chaîne 2 après inversion : " << chaine2 << std::endl;

    std::cout << "\nChaîne 3 avant inversion : " << chaine3 << std::endl;
    inverse(chaine3);
std::cout << "Chaîne 3 après inversion : " << chaine3 << std::endl;

    return 0;
}
