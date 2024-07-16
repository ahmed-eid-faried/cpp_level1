#include <iostream>
using namespace std;
enum Status { Married = 1, Single = 0 };
enum Gender { Male = 1, Female = 0 };
enum Color { Red, Blue, Yellow };
struct ConnectionInfo {
	int number;
};
struct Address {
	double lat;
	double lang;
	string address;
};
struct Card {
	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	float YealySalary;
	Gender Gender;
	Color myFavColor;
	Status IsMarried;
	ConnectionInfo ConnectionInfo;
	Address Address;
};
int  main() {

	int GenderInput;
	int myFavColorInput;
	int IsMarriedInput;
	Card CARD;
	cout << "#################################################\n";
	cout << "################## AHMED  MADY ##################\n";
	cout << "#################################################\n";
	cout << "PLEASE ENTER NAME: ";
	cin >> CARD.Name;
	cout << "PLEASE ENTER AGE: ";
	cin >> CARD.Age;
	cout << "PLEASE ENTER number: ";
	cin >> CARD.ConnectionInfo.number;
	cout << "PLEASE ENTER CITY: ";
	cin >> CARD.City;
	cout << "PLEASE ENTER COUNTRY: ";
	cin >> CARD.Country;
	cout << "PLEASE ENTER ADDRESS: ";
	cin >> CARD.Address.address;
	cout << "PLEASE ENTER LAT: ";
	cin >> CARD.Address.lat;
	cout << "PLEASE ENTER LANG: ";
	cin >> CARD.Address.lang;
	cout << "PLEASE ENTER MONTHLY SALARY: ";
	cin >> CARD.MonthlySalary;
	CARD.YealySalary = CARD.MonthlySalary * 12;
	cout << "PLEASE ENTER GENDER MALE 1/FEMALE 0: ";
	cin >> GenderInput;
	if (GenderInput == 1)
	{
		CARD.Gender = Gender::Male;
	}
	else {
		CARD.Gender = Gender::Female;

	};
	cout << "PLEASE ENTER MARRIED 1/ SINGLE 0: ";
	cin >> IsMarriedInput;
	if (IsMarriedInput == 1)
	{
		CARD.IsMarried = Status::Married;
	}
	else {
		CARD.IsMarried = Status::Single;

	};
	cout << "PLEASE ENTER myFavColor=> Red 0 - Blue 1 - Yellow 2 : ";
	cin >> myFavColorInput;
	if (myFavColorInput == 1)
	{
		CARD.myFavColor = Color::Blue;
	}
	if (myFavColorInput == 0) {
		CARD.myFavColor = Color::Red;
	};
	if (myFavColorInput == 2) {
		CARD.myFavColor = Color::Yellow;
	};


	cout << "#################################################\n";
	cout << "##################    Card     ##################\n";
	cout << "NAME: " << CARD.Name << endl;
	cout << "AGE: " << CARD.Age << endl;
	cout << "CITY: " << CARD.City << endl;
	cout << "COUNTRY: " << CARD.Country << endl;
	cout << "MONTHLY SALARY: " << CARD.MonthlySalary << endl;
	cout << "YEALY SALARY: " << CARD.YealySalary << endl;
	cout << "GENDER: " << CARD.Gender << endl;
	cout << "MARRIED: " << CARD.IsMarried << endl;
	cout << "myFavColor: " << CARD.myFavColor << endl;
	cout << "################# ConnectionInfo ################\n";
	cout << "Card=>ConnectionInfo=>number : " << CARD.ConnectionInfo.number << endl;
	cout << "##################    Address    ################\n";
	cout << "Card=>Address=>Address : " << CARD.Address.address << endl;
	cout << "Card=>Address=>lat : " << CARD.Address.lat << endl;
	cout << "Card=>Address=>lang : " << CARD.Address.lang << endl;
	cout << "#################################################\n";
	cout << "#################################################\n";

	/////////////////////////////////////////////////////////////////////////////////////////////////////

	return 0;
}

