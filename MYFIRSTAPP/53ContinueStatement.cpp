#include <iostream>
#include <sstream>
#include <string>
#include <typeinfo>
using namespace std;
void SumNumbersLessThan50(int NumberOfInput) {
	int Sum = 0;
	for (int i = 0; i < 10; i++) {
		if (listNumbers[i] > 50) {
			continue;
		}
		Sum += listNumbers[i];
		cout << "\t#######\t===>>>\t" << listNumbers[i] << " #######\n";
	}
	cout << "#################################################\n";
	cout << "\t\tSum = " << Sum << "  \n";

}

//void SumNumbersLessThan50(int listNumbers[10]) {
//	int Sum = 0;
//	for (int i = 0; i < 10; i++) {
//		if (listNumbers[i] > 50) {
//			continue;
//		}
//		Sum += listNumbers[i];
//		cout << "\t#######\t===>>>\t" << listNumbers[i] << " #######\n";
//
//	}
//	cout << "#################################################\n";
//	cout << "\t\tSum = " << Sum << "  \n";
//
//}


int main() {
	cout << "#################################################\n";
	cout << "################## AHMED  MADY ##################\n";
	cout << "#################################################\n";
	int listNumbers[10] = { 10,20,30,450,40,50,60,70,34,22 };
	SumNumbersLessThan50(listNumbers);
	//SumNumbersLessThan50(listNumbers);
	cout << "#################################################\n";
	cout << "#################################################\n";
	return 0;
}


