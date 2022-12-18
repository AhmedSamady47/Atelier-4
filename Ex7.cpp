#include <iostream>
#include <string>
using namespace std;

class Point {
private:
  double x;
  double y;
  string nom;

public:
  Point(double x = 0.0, double y = 0.0, string nom = "")
      : x(x), y(y), nom(nom) {}
  double getX() { return x; }
  void setX(double x) { this->x = x; }
  double getY() { return y; }
  void setY(double y) { this->y = y; }
  string getNom() { return nom; }
  void setNom(string nom) { this->nom = nom; }
  void afficher() const
    {
    cout << "<" << nom << ":" << x << "," << y << ">";
    }
};

class PointCouleur : public Point {
private:
  unsigned int couleur;

public:
  PointCouleur(double x = 0.0, double y = 0.0, string nom = "",
               unsigned int couleur = 0)
      : Point(x, y, nom), couleur(couleur) {}

  unsigned int getCouleur() { return couleur; }
  void setCouleur(unsigned int couleur) { this->couleur = couleur; }
  void afficher();
};