#include <iostream>

using namespace std;

class mere{        // declaration de la classe mere
  public :


    void display (){     // la fonction display pour la classe mere
     cout<<"je suis la class mere"<<endl;

    }
};

class fils:public mere{ // declaration de la sous classe fils
 public:
 void display(){                // meme fonction display


  cout<<"je suis la class fille"<<endl;}};

int main()
{
  fils c1;
                 //creation un objet du class fils
  c1.display();   // l'appelle de la fonction display

    return 0;
}
