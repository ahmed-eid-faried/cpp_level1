//#include <iostream>
//#include <string>
//using namespace std;
//enum enMarried {
//	married = 1, single = 0
//};
//struct stPersonInfo {
//	string name;
//	short int age;
//	string country;
//	string city;
//	double monthlySalary;
//	double yearlySalary;
//	char gender;
//	enMarried married;
//
//};
//
//void ReadPersonInfo(stPersonInfo& PersonInfo) {
//	bool isMarried;
//	cout << "PLEASE ENTER name: ";
//	//cin >> PersonInfo.name;
//	getline(cin, PersonInfo.name);
//	cout << "PLEASE ENTER age: ";
//	cin >> PersonInfo.age;
//	cout << "PLEASE ENTER country: ";
//	cin >> PersonInfo.country;
//	cout << "PLEASE ENTER city: ";
//	cin >> PersonInfo.city;
//	cout << "PLEASE ENTER monthlySalary: ";
//	cin >> PersonInfo.monthlySalary;
//	PersonInfo.yearlySalary = 12 * PersonInfo.monthlySalary;
//	cout << "PLEASE ENTER gender MALE M/F FEMALE: ";
//	cin >> PersonInfo.gender;
//	cout << "PLEASE ENTER married 1/0 single: ";
//	cin >> isMarried;
//	if (isMarried) {
//		PersonInfo.married = enMarried::married;
//	}
//	else {
//		PersonInfo.married = enMarried::single;
//	}
//
//}
//void PrintPersonInfo(stPersonInfo& PersonInfo) {
//	cout << "#################################################\n";
//	cout << "name: \t" << PersonInfo.name << endl;
//	cout << "age: \t" << PersonInfo.age << endl;
//	cout << "country: \t" << PersonInfo.country << endl;
//	cout << "city: \t" << PersonInfo.city << endl;
//	cout << "gender: \t" << PersonInfo.gender << endl;
//	cout << "married: \t" << PersonInfo.married << endl;
//	cout << "monthlySalary: \t" << PersonInfo.monthlySalary << endl;
//	cout << "yearlySalary: \t" << PersonInfo.yearlySalary << endl;
//	cout << "#################################################\n";
//
//
//}
//
//int main() {
//	cout << "#################################################\n";
//	cout << "################## AHMED  MADY ##################\n";
//	cout << "#################################################\n";
//	stPersonInfo PersonInfo;
//	ReadPersonInfo(PersonInfo);
//	PrintPersonInfo(PersonInfo);
//	cout << "#################################################\n";
//	cout << "#################################################\n";
//	return 0;
//}