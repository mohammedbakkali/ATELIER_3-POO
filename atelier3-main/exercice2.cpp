#include <iostream>

using namespace std;

class Shape                 // declaration du class
{
public:
  float largeur, hauteur;   // les attribues

  Shape(float x, float y)   //contructeur qui stock les valeurs des attribus
  {
    largeur = x;
    hauteur = y;
  }
};



class Rectangle: public Shape    // declaration de sous class qui herite de class shape
{
public:
  Rectangle(float x,float y) : Shape(x, y) {}     // constructeur qui prend ses parametre de la class mere

  float area()                      // fonction qui calcul la surface.
  {
    return (largeur * hauteur);
  }};



class Triangle: public Shape        // deuxieme class qui herite de class shape
{
public:
  Triangle(float x, float y) : Shape(x, y) {}   //constructeur


  float area()
  {
    return (largeur * hauteur / 2);
  }
};

int main (){
  Rectangle r(4,3);                 //declaration de deux objets
  Triangle t(4,3);
  cout <<" l'aire du rectanle est " << r.area() << endl;    // l'appel des deux fonction pour afficher le resultat
  cout <<" l'aire du triangle est "<< t.area() << endl;
  return 0;
}

