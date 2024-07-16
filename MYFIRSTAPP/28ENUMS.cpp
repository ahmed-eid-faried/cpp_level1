//#include <iostream>
//using namespace std;
//enum enStatus { Married = 1, Single = 0 };
//enum enGender { Male = 1, Female = 0 };
//enum enColor { Red, Blue, Yellow };
//
//struct stAddress {
//	double lat;
//	double lang;
//	string address;
//};
//struct stContactInfo {
//	int number;
//	stAddress Address;
//
//};
//struct Card {
//	string Name;
//	int Age;
//	string City;
//	string Country;
//	float MonthlySalary;
//	float YealySalary;
//	enGender Gender;
//	enColor myFavColor;
//	enStatus IsMarried;
//	stContactInfo ContactInfo;
//};
//int  main() {
//
//	int GenderInput;
//	int myFavColorInput;
//	int IsMarriedInput;
//	Card CARD;
//	cout << "#################################################\n";
//	cout << "################## AHMED  MADY ##################\n";
//	cout << "#################################################\n";
//	cout << "PLEASE ENTER NAME: ";
//	cin >> CARD.Name;
//	cout << "PLEASE ENTER AGE: ";
//	cin >> CARD.Age;
//	cout << "PLEASE ENTER number: ";
//	cin >> CARD.ContactInfo.number;
//	cout << "PLEASE ENTER CITY: ";
//	cin >> CARD.City;
//	cout << "PLEASE ENTER COUNTRY: ";
//	cin >> CARD.Country;
//	cout << "PLEASE ENTER ADDRESS: ";
//	cin >> CARD.ContactInfo.Address.address;
//	cout << "PLEASE ENTER LAT: ";
//	cin >> CARD.ContactInfo.Address.lat;
//	cout << "PLEASE ENTER LANG: ";
//	cin >> CARD.ContactInfo.Address.lang;
//	cout << "PLEASE ENTER MONTHLY SALARY: ";
//	cin >> CARD.MonthlySalary;
//	CARD.YealySalary = CARD.MonthlySalary * 12;
//	cout << "PLEASE ENTER GENDER MALE 1/FEMALE 0: ";
//	cin >> GenderInput;
//	if (GenderInput == 1)
//	{
//		CARD.Gender = enGender::Male;
//	}
//	else {
//		CARD.Gender = enGender::Female;
//
//	};
//	cout << "PLEASE ENTER MARRIED 1/ SINGLE 0: ";
//	cin >> IsMarriedInput;
//	if (IsMarriedInput == 1)
//	{
//		CARD.IsMarried = enStatus::Married;
//	}
//	else {
//		CARD.IsMarried = enStatus::Single;
//
//	};
//	cout << "PLEASE ENTER myFavColor=> Red 0 - Blue 1 - Yellow 2 : ";
//	cin >> myFavColorInput;
//	if (myFavColorInput == 1)
//	{
//		CARD.myFavColor = enColor::Blue;
//	}
//	if (myFavColorInput == 0) {
//		CARD.myFavColor = enColor::Red;
//	};
//	if (myFavColorInput == 2) {
//		CARD.myFavColor = enColor::Yellow;
//	};
//
//
//	cout << "#################################################\n";
//	cout << "##################    Card     ##################\n";
//	cout << "NAME: " << CARD.Name << endl;
//	cout << "AGE: " << CARD.Age << endl;
//	cout << "CITY: " << CARD.City << endl;
//	cout << "COUNTRY: " << CARD.Country << endl;
//	cout << "MONTHLY SALARY: " << CARD.MonthlySalary << endl;
//	cout << "YEALY SALARY: " << CARD.YealySalary << endl;
//	cout << "GENDER: " << CARD.Gender << endl;
//	cout << "MARRIED: " << CARD.IsMarried << endl;
//	cout << "myFavColor: " << CARD.myFavColor << endl;
//	cout << "################# ContactInfo ################\n";
//	cout << "Card=>ContactInfo=>number : " << CARD.ContactInfo.number << endl;
//	cout << "##################    Address    ################\n";
//	cout << "Card=>ContactInfo=>Address=>Address : " << CARD.ContactInfo.Address.address << endl;
//	cout << "Card=>ContactInfo=>Address=>lat : " << CARD.ContactInfo.Address.lat << endl;
//	cout << "Card=>ContactInfo=>Address=>lang : " << CARD.ContactInfo.Address.lang << endl;
//	cout << "#################################################\n";
//	cout << "#################################################\n";
//
//	/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	return 0;
//}
//
