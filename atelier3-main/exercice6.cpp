#include <iostream>

using namespace std;

class personne{   //declaration du classe personne
 private:
     string nom;
     string prenom;
     int date ;
 public:

personne(string n,string p,int d){  //inisialisation des donnés par constructeur
    nom=n;
    prenom=p;
    date=d;}

 void afficher(){        //affichage des  informations

 cout<<"le nom est:"<<nom<<endl;
 cout<<"le prenom est:"<<prenom<<endl;
 cout<<"la date de naissance  est:"<<date<<endl; }};


 class employe:public personne {
    private :
       int salaire;
     public :

   employe(string n,string p,int d,int s):personne(n,p,d){

             salaire=s;}

        void afficher(){
      personne::afficher();
    cout<<"le salaire est :"<<salaire; } };


 class chef:public employe{
        private:
          string service ;

        public :

    chef(string n,string p,int d,int s,string se):employe(n,p,d,s){

            service=se; }


         void afficher(){

         employe::afficher();
         cout<<endl;
         cout<<"la service est : "<<service<<endl;

         } };

        class directeur:public chef {
          private:
           string societe;
          public :

    directeur(string n,string p,int d,int s,string se,string so):chef(n,p,d,s,se) {

                 societe=so;}

           void afficher(){

           chef::afficher();
           cout<<"l'associete est "<<societe<<endl;}  };



int main()
{

cout<<"les informations de l'employe sont"<<endl;
employe m1("ali","tahiri",24,21);
m1.afficher();
cout<<endl;
cout<<"------------------------------"<<endl;

cout<<"les informations de chef sont"<<endl;
chef c1("mohamed","morabet",24,21,"developpement");
c1.afficher();

cout<<"------------------------------"<<endl;

cout<<"les informations de directeur sont"<<endl;

directeur d1("abderrahan","lolanti",24,21,"developpement","tanger-societe");
d1.afficher();
    return 0;
}

