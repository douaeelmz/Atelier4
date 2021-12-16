#include <iostream>
#include <list>
using namespace std;

class Personne {
public:
	string nom;
	string prenom;
	int age;
public:
	Personne(string nom, string prenom, int age) {
		this->nom = nom;
		this->prenom = prenom;
		this->age = age;
	}

};
list< Personne> liste1;
std::list < Personne>::iterator it;
void display() {

	for (it = liste1.begin(); it != liste1.end(); ++it) {
		cout << it->nom;
		cout << " " << it->prenom;
		cout << " " << it->age << "\n";

	}
}
/*for (it = liste1.begin(); it != liste1.end(); ++it) {

		noms.push_back(it->nom);

		prenoms.push_back(it->prenom);

		ages.push_back(it->age);

	}*/

int main() {
	list< Personne> liste1;
	list <string> noms;
	list <string> prenoms;
	list <int> ages;
	liste1.push_back(Personne("Bloom", "lily", 24));
	liste1.push_back(Personne("Alias", "Green", 24));
	liste1.push_back(Personne("Madison", "Auburn", 21));
	liste1.push_back(Personne("Garly", "Owen", 24));
	liste1.push_back(Personne("Cadogan", "Atlas", 24));
	std::list < Personne>::iterator it;
	

	liste1.sort();
	display();
	

	return 0;

}
