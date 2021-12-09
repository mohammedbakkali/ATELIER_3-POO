#include <iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

class Myclass{     // declaration de la class


public:
    string nom;
    Myclass(string nom);
    ~Myclass();

};

 Myclass::Myclass(string nom){           //declaration de constructeur
cout<<"bonjour monsieur "<<nom<<endl;
}
 Myclass::~Myclass(){                  // declaration de destructeur

cout<<"au revoir monsieur \n";
}

int main()
{
  string nom;
  cout<<"entrer le nom du client "<<endl;     //demender a l'utilisateur de d'entrer le nom
  cin>>nom;
   Myclass c1(nom);                         // creation d'un variable de type du class

    return 0;
}















