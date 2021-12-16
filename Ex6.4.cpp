#include <iostream> 
#include <exception>
using namespace std;
class MyException : public exception {
public:
	const char* what() const throw()
	{
		return "Attempted to divide by zero!\n";
	}
};



class Test {
public:
	static int tableau[];
public:
	static int division(int indice, int diviseur) {
		
		return tableau[indice] / diviseur;
	}
};




int Test::tableau[] = { 17, 12, 15, 38, 29, 157, 89, -22, 0, 5 };
int main()
{	
	try {

	int x, y;
	cout << "Entrez l'indice de l’entier à diviser: " << endl;
	cin >> x;
	cout << "Entrez le diviseur: " << endl;
	cin >> y;
	if (y == 0)
	{
		MyException exp;
		throw exp;
	}
	else{
	cout << "Le résultat de la division est: " << endl;
	cout << Test::division(x, y) << endl;
	}

	}
	catch (exception& e)
	{
		cout << e.what();
	}
	return 0;
}

