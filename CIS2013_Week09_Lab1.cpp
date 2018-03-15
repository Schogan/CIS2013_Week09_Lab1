#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char name[6] = "Logan";
	char last[13] = "Schanbacher";
	char copy[15];
	
	strcpy(copy, last);
	
	
	cout << "Firstname: " << name << " Lastname: " << copy << endl;
	
}