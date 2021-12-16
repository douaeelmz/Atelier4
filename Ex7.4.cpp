#include <iostream> 
#include <list>
#include <iterator>
using namespace std;

	//L'assotiation entre chat et rapas 

class Repas;
class Chat;
class Repas {
private:
	string nom;
	int heure;
	string description;
	list <Elements> *elem;
public:
	Repas() {
		// get in instance in the A instance because its a composition relation
		elem = new list<Elements>();
	}

	void setData(string nom, int heure, string description) {
		this->nom = nom;
		this->heure = heure;
		this->description = description;
	}
	string getNom() {
		return this->nom;
	}
	int getHeure() {
		return this->heure;
	}
	string getDescription() {
		return this->description;
	}
	void setListElements(list<Elements>* elem) {
		this->elem = elem;
	}
	list<Elements>* getListElements() {
		return this->elem;
	}
	~Repas() {

		delete this->elem;
		
	}
};
class Chat : public Animal{
private:
	string type;
	Repas repas;
public:
	void setData(string type) {
		this->type = type;
	}
	string getAtta() {
		return this->type;
	}
	void setRepas(Repas repas) {
		this->repas = repas;
	}
	Repas getRepas() {
		return this->repas;
	}
	void sauter() {
		cout << "Le chat peut sauter!" << endl;
	}
};

	//La composition entre repas et elements

class Elements {
private:
	string nom;
	string type;
	Repas repas;
public:
	void setData(string nom, string type) {
		this->nom = nom;
		this->type = type;
	}
	string getData() {
		return this->nom;
		return this->type;
	}
	void setRepas(Repas repas) {
		this->repas = repas;
	}
	Repas getRepas() {
		return this->repas;
	}
	~Elements() {
		cout << "destructor" << endl;
	}
};

	// L'héritage entre chat et animal

class Animal {
protected:
	string nom; 
	string genre;
	int age;
public:

	string setNom(string nom) {
		this->nom=nom;
	}
	string setGenre(string genre) {
		this->genre = genre;
	}
	int setAge(int age) {
		this->age = age;
	}

	string getNom() {
		return this->nom;
	}
	string getGenre() {
		return this->genre;
	}
	int getAge() {
		return this->age;
	}
	Animal() {}
	~Animal(){}
};

	// L'héritage entre chien et animal

class Chien: public Animal
{
private:
	string taille;
	list<Entraineur> entre;
public:
	string setTaille(string taille) {
		this->taille = taille;
	}
	string getTaille() {
		return this->taille;
	}
	Chien(){}
	~Chien(){}
	void ischass3() {
		cout << "Ce chien est chass3" << endl;
	}


};

// L'héritage entre chien et race
class Race
{
protected:
	string specificite;
	void isRaceHybride() {
		cout << "La race est hybride" << endl;
	}
public:
	Race(){};
	~Race(){};

};

	// Entraineur

class Entraineur
{
private:
	string nom;
	string description;
	list<Chien> chien;
public:
	string setNom(string nom) {
		this->nom = nom;
	}
	string setDescripton(string description) {
		this->description=description;
	}
	string getNom() {
		return this->nom;
	}
	string getDescripton() {
		return this->description ;
	}
	void setChien(list<Chien> chien) {
		this->chien = chien;
	}
	list<Chien> getChien() {
		return this->chien;
	}
	Entraineur(){}
	~Entraineur(){}
};

	// Compitition

class Compitition {
private:
	string date;
	string nom;
	Entraineur e;
	Chien c;
public:
	int ordre;
	void setDate(string date) {
		this->date = date;
	}
	string getDate() {
		return this->date;
	}
	void setNom(string nom) {
		this->nom = nom;
	}
	string getNom() {
		return this->nom;
	}
	//continue HERE
	void setChien(Chien c) {
		this->c = c;
	}
	Chien get() {
		return this->c;
	}
	void setEntraineur(Entraineur e) {
		this->e = e;
	}
	Entraineur getEntraineur() {
		return this->e;
	}
};










int main() {
	Repas repas1;
	
	Chat siamese;
	
	return 0;
}

