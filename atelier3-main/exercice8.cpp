#include <iostream>

using namespace std;

class media{
 public:
     string titre;

string id(string i){
 titre=i;
 return titre;
}

 virtual void imprimmer(){
 cout<<"l'id du media est :"<<titre<<endl;}};



class audio:public media{
public:
    int duree;
    int get_duree(int d){
    duree=d;
    return d;}

    void imprimmer(){

  media::imprimmer();
    cout<<"le duration de audio est "<<duree<<"seconde"<<endl;}};




class livre:public media{
public:

string name;
    string get_name(string n){
    name=n;
    return n;}

    void imprimmer(){

  media::imprimmer();
    cout<<"le nom du livre  est "<<name<<endl;}};




class press:public media{
public:

string name1;
    string get_name1(string np){
    name1=np;
    return np;}

    void imprimmer(){

     media::imprimmer();
    cout<<"le nom du press  est "<<name1<<endl; }};




class journal: public press{
public :
    string name_j;
    string get_namej(string nj){
    name_j=nj;
    return nj;}

    void imprimmer(){

     press::imprimmer();
    cout<<"le nom du journal est "<<name_j<<endl; }};


class magasine: public press{
public :
     string name_m;
    string get_namem(string nm){
    name_m=nm;
    return nm;}

    void imprimmer(){

     press::imprimmer();
    cout<<"le nom du magasine est "<<name_m<<endl; }};



class revue: public press{
public :
     int temp;
 int get_temp(int t){
    temp=t;
    return t;}

    void imprimmer(){

     press::imprimmer();
    cout<<"le temps de la revue est : "<<temp<<endl; }

};


class disc: public audio{
public :

string titre_m;
    string get_titre(string ti){
    titre_m=ti;
    return ti;}

    void imprimmer(){

     audio::imprimmer();
    cout<<"letitre du disc est : "<<titre_m<<endl; }

};


class cd: public audio{
public :
    int poid;
 int get_poid(int p){
    poid=p;
    return p;}

    void imprimmer(){

     audio::imprimmer();
    cout<<"le poid de cd est  : "<<poid<<"g"<<endl; }};

class cassette: public audio{
public :
    string titre_2;
 string get_titre2(string t2){
    titre_2=t2;
    return t2;}

    void imprimmer(){

     audio::imprimmer();
    cout<<"le titre de casette est   : "<<titre_2<<endl; }};







int main()
{

media m1;
m1.id("p1200");
m1.imprimmer();

cout<<"---------------------------------------"<<endl;

audio o1;
o1.id("s5245");
o1.get_duree(20);
o1.imprimmer();
cout<<"---------------------------------------"<<endl;

livre l1;
l1.id("l14528");
l1.get_name("antigone");
l1.imprimmer();

cout<<"---------------------------------------"<<endl;
press p1;
p1.id("cj145279");
p1.get_name1("sharnoby");
p1.imprimmer();

cout<<"---------------------------------------"<<endl;

cd c1;
c1.id("lj22");
c1.get_poid(10);
c1.get_duree(30);
c1.imprimmer();
cout<<"---------------------------------------"<<endl;
cassette cc1;
cc1.id("pml1254");
cc1.get_titre2("marhsallmathers");
cc1.get_duree(30);
cc1.imprimmer();
cout<<"---------------------------------------"<<endl;






    return 0;
}
