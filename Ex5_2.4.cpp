 
#include <iostream>
#include <set>
#include <iterator>

using namespace std;

set <int, greater<int> > ::iterator it;
bool Trouver(int val, set <int, greater<int> > s1) {

	for (it = s1.begin(); it != s1.end(); it++) {
		if (*it == val)
		{return true;}
	}
	return false;
}
int main() {

set <int, greater<int> > s1;
s1.insert(1);
s1.insert(1);
s1.insert(12);
s1.insert(14);
s1.insert(18);
s1.insert(9);
s1.insert(4);
s1.insert(16);
s1.insert(7);
s1.insert(45);
//set <int, greater<int> > ::iterator it;
cout<<Trouver(1, s1);
}

