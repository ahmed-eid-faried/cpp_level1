#include <iostream>
using namespace std;
void  inputsCard() {
	string Name  ;
	int Age ;
	string City  ;
	string Country  ;
	float MonthlySalary  ;
 	char Gender ;
	bool IsMarried  ;
	/////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << endl << endl << "***************************************************************************************************" << endl << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "\n***********************************************\n\n";
	cout << "\n***********************************************\n\n";
	cout << "PLEASE ENTER NAME: ";
	cin >> Name;
	cout << "PLEASE ENTER AGE: " ;
	cin >> Age;
	cout << "PLEASE ENTER CITY: " ;
	cin >> City;
	cout << "PLEASE ENTER COUNTRY: " ;
	cin >> Country;
	cout << "PLEASE ENTER MONTHLY SALARY: "  ;
	cin >> MonthlySalary;
	cout << "PLEASE ENTER GENDER M/F: "  ;
	cin >> Gender;
	cout << "PLEASE ENTER MARRIED: ";
	cin >> IsMarried;
	cout << "\n***********************************************\n\n";
	cout << "\n***********************************************\n\n";
	cout << "NAME: " << Name << endl;
	cout << "AGE: " << Age << endl;
	cout << "CITY: " << City << endl;
	cout << "COUNTRY: " << Country << endl;
	cout << "MONTHLY SALARY: " << MonthlySalary << endl;
	cout << "YEALY SALARY: " << MonthlySalary * 12 << endl;
	cout << "GENDER: " << Gender << endl;
	cout << "MARRIED: " << IsMarried << endl;
	cout << "\n\n***********************************************\n";
	cout << "\n***********************************************\n\n";
	/////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << endl << endl << "***************************************************************************************************" << endl << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////
 
 }