#include <iostream>

using namespace std;

class comple {


public :              // declaration  du class avec deux attribute
     float im;
      float re;


     comple(){};              //constructeur
    comple(float a,float b){
     im=a;
     re=b; };


   comple operator-(comple d1){   //Surcharge operator -

    float    fre=re-d1.re;
    float fim=im-d1.im;
    comple d4;
    d4.im=fim;
    d4.re=fre;


    return d4;}

comple operator/(comple d2){  //Surcharge operator /
    re=re/d2.re;
    im=im/d2.im;
    comple d3;
    d3.im=im;
    d3.re=re;
    return d3;}

comple operator*(comple d2){   //Surcharge operator *
    re=re*d2.re;
    im=im*d2.im;
    comple d3;
    d3.im=im;
    d3.re=re;
    return d3;}


 comple operator+(comple d2){   //Surcharge operator +
    re=re+d2.re;
    im=im+d2.im;
    comple d3;
    d3.im=im;
    d3.re=re;
    return d3;}};
int main()
{
    float x1,y1;
    float x2,y2;

    cout<<"entrer la valeur du partie imaginaire du premier nombre complex = ";
    cin>>x1;
    cout<<"entrer la valeur du partie reel du premier nombre complex = ";
    cin>>y1;

    cout<<"entrer la valeur du partie imaginaire du deuxieme nombre complex =";
    cin>>x2;
    cout<<"entrer la valeur du partie reel du deuxieme nombre complex =";
    cin>>y2;


   comple c1(x1,y1);
    cout<<"le premier nombre complex est : "<<c1.re<<"+"<<c1.im<<"i"<<"\n"<<endl;
   comple c2(x2,y2);
    cout<<"le deuxieme nombre complex est :"<<c2.re<<"+"<<c2.im<<"i"<<"\n"<<endl;

   comple c3;
    char operation;
    cout<<"entrer l'operation(+,-,*,/)"<<endl;
    cin>>operation;
  if(operation=='+'){
   c3=c1+c2;

    cout<<"l'addition des deux nombre complex est :"<<c3.re<<"+"<<c3.im<<"i"<<"\n"<<endl;}
 if(operation=='-'){
   c3=c1-c2;

  cout<<"la soustraction des deux nombre complex est :"<<c3.re<<"+"<<c3.im<<"i"<<"\n"<<endl;}
if(operation=='*'){
   c3=c1*c2;

  cout<<"le produit des deux nombre complex est :"<<c3.re<<"+"<<c3.im<<"i"<<"\n"<<endl;}

if(operation=='/'){
   c3=c1/c2;

  cout<<"la division des deux nombre complex est :"<<c3.re<<"+"<<c3.im<<"i"<<"\n"<<endl;}
    return 0;
}
