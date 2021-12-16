#include <iostream>
//utilisation des bibliotheque <iomanip> et <string> 
#include <iomanip>
#include <string>
using namespace std;

//La fonction qui convertie une chaine en date et heure 

void DateEtHeure(string chain_date){
	
	
	if (chain_date.length() != 12){
		cout<< "La chaîne doit avoir 12 chiffre"<<endl;
		
	}
	else{
		cout<<"La date : "<<chain_date.substr(0,2);
		cout<<"/";
		cout<<chain_date.substr(2,2);
		cout<<"/";
		cout<<chain_date.substr(4,4);
		cout<<" heure : ";
		cout<<chain_date.substr(8,2);
		cout<<"h";
		cout<<chain_date.substr(10,2)<<endl;
		
	}
}
int main(){
	string str;
	cout<<"Entrez la chaine : ";
	cin>>str;
	//string str("130320020445");
	DateEtHeure(str);
}
