#include <iostream>

using namespace std;

class animal{       //declaration de la fonction animal

public:
   int age;          //les attribus et les fonctions de cette classe
   string nom;
    animal(){}
    void set_value(int a,string n){
    age=a;
    nom=n;}};

class zebra : public animal {    // sous class zebra

 public :
    string origine;  //les attributs et les fonctions de cette sous class
     zebra(){
     }

    int get_age(){
    return age;}
    string get_name(){
    return nom; }
    void set_origine(string x){
    origine=x;}

    string get_origine(){
    return origine; }




 void afficher_deteils() {      // fonction pour afficher les information de zebra

cout<<"l'age du zebra est : "<<get_age()<<endl;
cout<<"son nom est : "<<get_name()<<endl;
cout<<"son origine est : "<<get_origine()<<endl;}} ;



class dolphine : public animal {   //declaration du sous class doplhine

 public :
    string origine;
     dolphine(){
     }

    int get_age(){
    return age;}
    string get_name(){
    return nom;
    }
    void set_origine(string x){
    origine=x;
    }
    string get_origine(){
    return origine; }


 void afficher_deteils() {       // fonction pour afficher les information de dolphine

cout<<"l'age du dolphine est : "<<get_age()<<endl;
cout<<"son nom est : "<<get_name()<<endl;
cout<<"son origine est : "<<get_origine()<<endl; }} ;






int main()
{

zebra z1;    //objet de zebra
  z1.set_value(15,"zebra1");
  z1.set_origine("maroc");
  z1.afficher_deteils();
dolphine d1;    // objet dedolphine
 d1.set_value(25,"dolphine1");
 d1.set_origine("spain");
  d1.afficher_deteils();


    return 0;
}
