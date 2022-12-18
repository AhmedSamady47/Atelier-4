#include <iostream>
using namespace std;

class Complexe {

    public:

    double reel;
    double img;

    Complexe(double reel = 0, double img = 0) : reel(reel), img(img) {}

    Complexe operator+(const Complexe &nouv) {
        return Complexe(reel + nouv.reel, img + nouv.img);
    }

    Complexe operator-(const Complexe &nouv) {
        return Complexe(reel - nouv.reel, img - nouv.img);
    }

    Complexe operator*(const Complexe &nouv) {
        return Complexe(reel * nouv.reel - img * nouv.img, reel * nouv.img + img * nouv.reel);
    }

    Complexe operator/(const Complexe &nouv) {
        double divisor = nouv.reel * nouv.reel + nouv.img * nouv.img;
        return Complexe((reel * nouv.reel + img * nouv.img) / divisor, (img * nouv.reel - reel * nouv.img) / divisor);
    }

    friend ostream& operator<<(ostream& os, const Complexe& c) {
        os << c.reel << " + " << c.img << "i";
        return os;
    }
};

int main() {

    double reel1, img1, reel2, img2;
    cout << "Entrez la partie reel et imaginaire de la premiere nombre complexe: ";
    cin >> reel1 >> img1;
    cout << "Entrez la partie reel et imaginaire de la deuxieme nombre complexe: ";
    cin >> reel2 >> img2;

    Complexe c1(reel1, img1);
    Complexe c2(reel2, img2);
    
    char op;
    cout << "choisir votre operateur: +, -, *, /" << endl;
    cin >> op;

    Complexe result;
    if (op == '+') {
    result = c1 + c2;
    } else if (op == '-') {
    result = c1 - c2;
    } else if (op == '*') {
    result = c1 * c2;
    } else if (op == '/') {
    result = c1 / c2;
    }

    cout << "La resultat de cette operation est: " << result << endl;
    return 0;
}
