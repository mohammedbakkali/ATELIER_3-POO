#include <iostream>

using namespace std;

class test {
public :
    static int counter;
   void call(){
  cout<< "la fonction est utiliser "<<++counter<<" fois"<<endl; }; };


int test ::counter=0;

int main(){

test t1 ;
t1.call();

test t4 ;
t4.call();

test t2 ;
t2.call();

test t3 ;
t3.call();
return 0 ;
}
