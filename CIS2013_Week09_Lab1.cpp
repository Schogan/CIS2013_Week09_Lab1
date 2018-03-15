#include <iostream>
#include <string>
using namespace std;

int main(){
	string name = "Logan";
	
	
	cout << "Name: " << name << endl;
	cout << "The length of your name is: " << name.length() << endl;
	cout << "The third letter in your name is: " << name[2] << endl;
	
	
	for(int i = 0; i<name.length(); i++){
		cout << "You spell Logan with a " << name[i] << endl;
	}
}