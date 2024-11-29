#include <iostream>
using namespace std;

int main() {
  do {
    
    std::cout << "Menu véhicule\n";
    cout << endl; 
    std::cout << "1 - Multimédia\n";
    cout << endl;
    
    std::cout << "2 - Téléphone\n";
    cout << endl;
    std::cout << "3 - Connexions\n";
    cout << endl;
    std::cout << "4 - Personalisation - Configuaration\n";

    int choix;

    std::cout << "Votre choix ? \n";
    std::cin >> choix;

    switch (choix) {
    case 1: cout << "1 - Cartes \n";
      break;
      
      
    case 2: cout << "2 - Musique\n";
      break;
      
    case 3:
      cout << "3 - Connexion disponible\n ";
      break;
      
    case 4:
      cout << "1 - Définir les paramètres\n ";
      cout << endl;
      cout <<  "2 - Choix de la langue \n ";
      cout << endl;
      cout <<  "3 - Configuration afficheur\n ";
      
      

       std::cout << "Votre choix ? \n";
      std::cin >> choix;
      switch (choix)
        
        {case 1: cout << "1 - Réglages \n";
          break;
         case 2: cout << " 1 - Francais 2 - Anglais \n"; 
         break;
         case 3: cout << "1 - Couleur \n";
         break;
        
        
        
        
        
        
        
        
        }
      break;

    default:
      cout
          << "Traitement du cas de l’option invalide par un message d’erreur\n";
    }
  } while (1);
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
