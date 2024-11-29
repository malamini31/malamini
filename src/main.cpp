#include <iostream>
using namespace std;

int main() {
  std::cout << "Menu véhicule \n";
  std::cout << "1 - Multimédia \n";
  std::cout << "2 - Téléphone \n";
  std::cout << "3 - Connexions \n";
  std::cout << "4 - Personalisation - Configuaration \n";

int choix;
  
  std::cout << "Votre choix ? \n";
  std::cin >> choix;

  switch (choix)
    { 
    case 1:
    cout << "1 - Cartes \n";
     break;
    case 2:
    cout << "2 - Musique\n";
      break;
    case 3:
    cout << "3 - Connexion disponible\n ";
      break; 
    case 4:
    cout << "4 - couleur\n ";
      break;
      
    default: 
    cout << "Traitement du cas de l’option invalide par un message d’erreur\n";
      }
  /* 


  
  if (choix == 1) {
    std::cout << "1 - Cartes \n";
    std::cout << "2 - Musique\n";
  }
  if (choix ==2) {
    std::cout << " numéro \n";
  }
  if (choix ==3) {
    std::cout << "connexion disponible \n";
}
  if (choix ==4) {
  std::cout << "1 - Couleur \n";  
  std:: cout <<"2 - Police/Taille \n";
  std::cout<<"3- Son \n";
}
  if (choix > 4) {
    std::cout
        << "Traitement du cas de l’option invalide par un message d’erreur \n ";
  }
*/
}
