#include <iostream>
#include <iterator>
#include <set>
using namespace std;

int main(){
	
	set < int> set1;
	for(int i = 1 ; i<=100; i++){
		set1.insert(i);
	}
	set<int> ::iterator it;
	for(it= set1.begin();it!=set1.end();it++){
		cout<<*it<<" ";
	}
	
	
}
