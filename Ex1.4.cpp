#include <iostream>
using namespace std;

class complexeNumber {
public:
	int re;
	int img;
	complexeNumber(int re = 0, int img = 0) {
		re = re;
		img = img;
	}

	void Display()
	{
		cout << re;
			cout << " + ";
		cout << img << "i" << endl;
	}


	complexeNumber operator+(complexeNumber z)
	{
		complexeNumber y;
		y.re = re + z.re;
		y.img = img + z.img;
		return y;
	}
	//Opérateur -
	complexeNumber operator-(complexeNumber z)
	{
		complexeNumber y;
		y.re = re - z.re;
		y.img = img - z.img;
		return y;
	}
	//Opérateur * 
	complexeNumber operator*(complexeNumber z)
	{
		complexeNumber y;
		y.re = re * z.re - img * z.img;
		y.img = re * z.img + img * z.re;
		return y;
	}

};



int main() {
		//Déclaration des nombres complexes
	complexeNumber c;
	complexeNumber a(5, 7), b(4, 6);
	cout << "La somme : ";
	c = (a + b);
	c.Display();
	cout << "La soustraction : ";
	c = (a - b);
	c.Display();
	cout << "Le produit : ";
	c = (a * b);
	c.Display();
	
	return 0;

} 


