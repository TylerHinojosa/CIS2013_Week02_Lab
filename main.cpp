#include <iostream>
using namespace std;
int main(){
	cout << "Week 2 Lab:" << endl;
	
	int bob = 42;
	int john = 32;
	int jimbob = bob + john;
	short rachel = 10;
	short luke = 7;
	float pie = 3.14;
	char middle = 'M';
	bool shouldWe = false;
	
	if (jimbob <= luke){
		cout << "The result was true" << endl;
	} else {
		cout << "False!!!!" << endl;
	}
	
	cout << jimbob << " is bob and jim added" << endl;
	cout << bob - john << " is bob and jim subtracted" << endl;
	cout << bob/john << " is bob and jim divided" << endl;
	cout << bob * john <<" is bob and jim multiplied" << endl;
	cout <<bob % john << " is bob and modulas jim" << endl;
	
	
	return 0;
}