#include <iostream>
#include <string>
using namespace std;

void ReadPersonInfo(float  grades[3]) {
	cout << "PLEASE ENTER grade1: ";
	cin >> grades[0];
	cout << "PLEASE ENTER grade2: ";
	cin >> grades[1];
	cout << "PLEASE ENTER grade3: ";
	cin >> grades[2];


}
void PrintPersonInfo(float grades[3]) {
	cout << "#################################################\n";
	cout << "grade1: \t" << grades[0] << endl;
	cout << "grade2: \t" << grades[1] << endl;
	cout << "grade3: \t" << grades[2] << endl;
	cout << "#################################################\n";
	cout << "avarage of grades: \t" << (grades[0] + grades[1] + grades[2])/3 << endl;


}

int main() {
	cout << "#################################################\n";
	cout << "################## AHMED  MADY ##################\n";
	cout << "#################################################\n";
	float grades[3];
	ReadPersonInfo(grades);
	PrintPersonInfo(grades);
	cout << "#################################################\n";
	cout << "#################################################\n";
	return 0;
}