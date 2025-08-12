#include <iostream>	
#include <string>

using namespace std;

int main() {
	string fullname;
	int age;
	
	cout <<"Enter your full name: ";
	getline(cin, fullname);
				
	cout <<" Enter your age: ";
	cin >> age;
	
	cout<< "\nhello, " << fullname << "! You are" << age << " years old.\n";
	
	int currentYear = 2025;
	int yearAtSixty = currentYear + (60-age);
	
	cout << "The current year is " << currentYear << ".\n";
	cout << "You will turn 60 years old in the year" << yearAtSixty << ".\n";
	
	return 0;
	
}

