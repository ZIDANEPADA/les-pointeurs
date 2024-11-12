#include <iostream>
#include <cstring>

void supprimeCaractere(char *chaine, char caractere) {
    int longueur = strlen(chaine);
    int debut = 0;

    for (int i = 0; i < longueur; i++) {
        if (chaine[i] != caractere) {
            chaine[debut] = chaine[i];
            debut++;
        }
    }

    chaine[debut] = '\0'; // Terminaison de la chaîne
}

int main() {
    char chaine[] = "Bonjour, comment vas-tu ?";
    char caractere = 'o';

    std::cout << "Chaîne originale : " << chaine << std::endl;
    supprimeCaractere(chaine, caractere);
    std::cout << "Chaîne après suppression : " << chaine << std::endl;

    return 0;
}
