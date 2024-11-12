#include <string>
using namespace std;

const int MAX_TENTATIVES = 8;
const int LONGUEUR_MOT = 12;

string motADeviner = "PROGRAMMATION";
string motCache(LONGUEUR_MOT, '_');
int tentatives = 0;


Étape 2 : Fonction d'affichage du pendu


void affichePendu(int erreurs) {
 switch (erreurs) {
  case 1:
   cout << " +---+" << endl;
   cout << " |   |" << endl;
   cout << "     |" << endl;
   cout << "     |" << endl;
   cout << "     |" << endl;
   break;
  // ...
 }
}


Étape 3 : Boucle principale


int main() {
 cout << "Bienvenue au jeu du Pendu !" << endl;

while (tentatives < MAX_TENTATIVES) {
#include <string>
using namespace std;

const int MAX_TENTATIVES = 8;
const int LONGUEUR_MOT = 12;

string motADeviner = "PROGRAMMATION";
string motCache(LONGUEUR_MOT, '_');
int tentatives = 0;


Étape 2 : Fonction d'affichage du pendu


void affichePendu(int erreurs) {
 switch (erreurs) {
  case 1:
   cout << " +---+" << endl;
   cout << " |   |" << endl;
   cout << "     |" << endl;
   cout << "     |" << endl;
   cout << "     |" << endl;
   break;
  // ...
 }
}


Étape 3 : Boucle principale


int main() {
 cout << "Bienvenue au jeu du Pendu !" << endl;

while (tentatives < MAX_TENTATIVES) {
 }

 cout << "Game Over ! Le mot était : " << motADeviner << endl;
 return 0;
}
