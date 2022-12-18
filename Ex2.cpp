#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string date = "010920091123";
  
    string Jour = date.substr(0, 2);
    string mois = date.substr(2, 2);
    string annee = date.substr(4, 4);
    string heure = date.substr(8, 2);
    string minute = date.substr(10, 2);

    cout << "Jour: " << Jour << endl;
    cout << "Mois: " << mois << endl;
    cout << "Annee: " << annee << endl;
    cout << "Heure: " << heure << endl;
    cout << "Minute: " << minute << endl;

    return 0;
}
