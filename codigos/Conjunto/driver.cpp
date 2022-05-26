#include <iostream>
#include "Conjunto.hpp"
using namespace std;


int main(){
	Conjunto <int> c;
	
	c.insert(2); //O(n)
	c.insert(3);//O(n)
	c.insert(2);//O(n)
	c.insert(5);//O(n)
	c.insert(4);//O(n)
	c.insert(1);//O(n)
	c.insert(7);//O(n)
	c.insert(6);//O(n)
	
	
	cout << c.size() << endl; //O(1)
	cout << c << endl; //O(n)
	
	if( c.find(2) ){ //O(log n)
		cout << "2 esta no conjunto" << endl;
		c.remove(2); //O(n)
	}
	cout << c.size() << endl;
	
	cout << c << endl;


}
