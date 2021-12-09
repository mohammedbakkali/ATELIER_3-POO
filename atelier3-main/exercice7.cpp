#include <iostream>

using namespace std;

class vecteur3d {
	float x;
	float y;
	float z;

	public:

	//Constructeur d'initialisation
	vecteur3d(float a = 0, float b = 0, float c = 0){
	x=a;
	y=b;
	z=c;}

	//Constructeur de recopie
	vecteur3d(const vecteur3d & v) {
		x = v.x;
		y = v.y;
		z = v.z;}

	//L'affichage d'un vecteur
	void afficher() {
		cout << "("<<x<<","<<y<<","<<z<<")" << endl;}


	//La somme de deux vecteur
	vecteur3d somme(const vecteur3d & v22) {
		vecteur3d v1;
		v1.x = x + v22.x;
		v1.y = y + v22.y;
		v1.z = z + v22.z;
		return v1;
		//Ou return vecteur3d(x+v.x, y+v.y, z+v.z);
	}

	//Le produit scalaire de deux vecteurs
	float produit(const vecteur3d & v) {
		return x*v.x + y*v.y + z*v.z;
	}

	//tester si deux vecteurs ont les memes composantes
	bool coincide(const vecteur3d & v) {
		return (x == v.x && y == v.y && z == v.z);
	}

	//Retourner la norme du vecteur
	float norme() {
		return (x*x + y*y + z*z);
	}

	//Retourner le vecteur qui la plus grande norme : par valeur
	vecteur3d normax(vecteur3d v) {
		if( this->norme() > v.norme())
		    return *this;

		return v;
	}

	//Retourner le vecteur qui la plus grande norme : par adresse
	vecteur3d * normax(vecteur3d * v) {
		if( this->norme() > v->norme())
		    return this;
        else
		return v;
	}

	//Retourner le vecteur qui la plus grande norme : par reference
	vecteur3d & normax_ref(vecteur3d &v) {
		if( this->norme() > v.norme())
		    return *this;

		return v;
	}
};

int main() {
	cout << " le vecteur V1 est : ";
	vecteur3d v1(4,2,6);
	v1.afficher();
	cout << "Vecteur V2 est :";
	vecteur3d v2(3,9,1);
	v2.afficher();
	cout<<endl;
     cout << "La somme des vecteurs v1 et v2 est : ";
	(v1.somme(v2)).afficher();
    cout << "Le produit scalaire des vecteurs v1 et v2 est : " << v1.produit(v2) << endl;
	cout<<endl;
	if(v1.coincide(v2))
	    cout << "Les vecteurs v1 et v2 coincident " << endl;
	else
	    cout << "Les vecteurs v1 et v2 ne coincident pas " << endl;
	cout<<endl;
	cout << "Le vecteur qui a la plus grande norme est (par valeur): ";
	(v1.normax(v2)).afficher();
	cout << "Le vecteur qui a la plus grande norme est (par adresse): ";
	(v1.normax(&v2))->afficher();
	cout << "Le vecteur qui a la plus grande norme est (par reference) :";
	(v1.normax_ref(v2)).afficher();
	cout<<endl;
}

