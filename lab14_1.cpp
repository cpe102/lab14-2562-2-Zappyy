#include <iostream>
using namespace std;


int main(){
	int a =5;
	string b = "A";
	string &c = b;
	int *x =&a;
	string *y= &b;
	int **z = &x;
	
	cout << "a = " << a  << "\t";
	cout << "b = " << b  << "\t";
	cout << "c = " << c  << "\t";
	cout << "x = " << x  << "\t";
	cout << "y = " << y  << "\t";
	cout << "z = " << z  << "\t";
	cout << endl;
	cout << "&a = " << &a  << "\t";
	cout << "&b = " << &b  << "\t";
	cout << "&c = " << &c  << "\t";
	cout << "&x = " << &x  << "\t";
	cout << "&y = " << &y  << "\t";
	cout << "&z = " << &z  << "\t";
	cout << endl;
	c = "F";
	cout << "a = " << a  << "\t";
	cout << "b = " << b  << "\t";
	cout << "c = " << c  << "\t";
	cout << "x = " << x  << "\t";
	cout << "y = " << y  << "\t";
	cout << "z = " << z  << "\t";
	cout << endl;
	*y = "W";	
	cout << "a = " << a  << "\t";
	cout << "b = " << b  << "\t";
	cout << "c = " << c  << "\t";
	cout << "x = " << x  << "\t";
	cout << "y = " << y  << "\t";
	cout << "z = " << z  << "\t";
	cout << endl;
	*x = 6;
	cout << "a = " << a  << "\t";
	cout << "b = " << b  << "\t";
	cout << "c = " << c  << "\t";
	cout << "x = " << x  << "\t";
	cout << "y = " << y  << "\t";
	cout << "z = " << z  << "\t";
	cout << endl;
	**z = 7;
	cout << "a = " << a  << "\t";
	cout << "b = " << b  << "\t";
	cout << "c = " << c  << "\t";
	cout << "x = " << x  << "\t";
	cout << "y = " << y  << "\t";
	cout << "z = " << z  << "\t";
	cout << endl;

	return 0;
}
