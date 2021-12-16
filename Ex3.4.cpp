#include <iostream>
#include <list>
#include <iterator>
using namespace std;
//fonction pour afficher la liste 
void ListeEntiers(list <int> entiers) {
	list <int> ::iterator it;
	for (it = entiers.begin(); it != entiers.end(); ++it) {
		cout << *it << " " << endl;
	}

	}


int main() {
	list <int> entiers1;
	int temp;
	int i;
	do {
		cout << "Insert element (-1) to cancel : ";
		cin >> temp;
		entiers1.push_back(temp);
	} while (temp != -1);
	entiers1.pop_back();
	//trier puis afficher la liste
	ListeEntiers(entiers1);
	cout << "La liste triee : " << endl;
	entiers1.sort();
	ListeEntiers(entiers1);

}
