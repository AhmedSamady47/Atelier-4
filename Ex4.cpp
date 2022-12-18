#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

class Personnes {
public:
string nom;
string prenom;
int age;
};

bool Comp(const Personnes& p1, const Personnes& p2) {
  if (p1.nom < p2.nom) {
    return true;
  } else if (p1.nom == p2.nom) {
    return p1.prenom < p2.prenom;
  }
  return false;
}

int main() {

    list<Personnes> liste;

    while (true) {
    cout << "Entez un Personnesne (Entrez un nom vide pour arretez):" << endl;
    cout << "Nom: ";
    string nom;
    getline(cin, nom);
    if (nom.empty()) {
        break;
    }
    cout << "Prenom: ";
    string prenom;
    getline(cin, prenom);
    cout << "Age: ";
    int age;
    cin >> age;
    cin.ignore();
    liste.push_back({nom, prenom, age});
    }

    liste.sort(Comp);

    cout << "Liste Triee des Personnes: " << endl;
    for (const Personnes& Personnes : liste) {
        cout << Personnes.nom << " " << Personnes.prenom << " " << Personnes.age<<endl;
}
}