#include <iostream>
#include <stdexcept>
using namespace std;

class Test{
public:
static int tableau[10] ;
public :
static int division(int indice, int diviseur){
if (indice < 0 || indice >= sizeof(tableau)/sizeof(int)) {
throw runtime_error("Erreur : indice du tableau non valide");
}
if (diviseur == 0) {
throw runtime_error("Erreur : division par 0");
}
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {
int x, y;
cout << "Entrez l’indice de l’entier à diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
cout << "Le résultat de la division est: "<< endl;

try {
cout << Test::division(x,y) << endl;
} catch (exception& e) {
cerr << e.what() << endl;
exit(1);
}

return 0;
}