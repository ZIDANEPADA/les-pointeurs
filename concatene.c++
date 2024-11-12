#include <iostream>
#include <string.h>

void concatene(char *dest, const char *source) {
    strcat(dest, source);
}

int main() {
    char dest[20] = "Bonjour, ";
    const char *source = "comment vas-tu?";

    std::cout << "Chaîne avant concaténation : " << dest << std::endl;
    concatene(dest, source);
    std::cout << "Chaîne après concaténation : " << dest << std::endl;

    return 0;
}

