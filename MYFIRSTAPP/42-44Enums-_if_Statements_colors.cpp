//#include <iostream>
//using namespace std;
//enum enScreenColor {
//	Red = 1,
//	Yellow = 2,
//	Blue = 3,
//	Green = 4,
//};
//void ChangeScreenColor(enScreenColor  ScreenColor) {
//
//
//	if (ScreenColor == enScreenColor::Red) {
//		system("color 4F");
//	}
//	else if (ScreenColor == enScreenColor::Yellow) {
//		system("color 6F");
//	}
//	else if (ScreenColor == enScreenColor::Blue) {
//		system("color 1F");
//	}
//	else if (ScreenColor == enScreenColor::Green) {
//		system("color 2F");
//	}
//	else {
//		system("color 4F");
//	}
//}
//void SelectScreenColor() {
//	int numScreenColor;
//	enScreenColor  ScreenColor;
//	cout << "Please Select Color For Screen:- \n";
//	cout << "(1) Red" << endl;
//	cout << "(2) Yellow" << endl;
//	cout << "(3) Blue" << endl;
//	cout << "(4) Green" << endl;
//	cout << "##################################################" << endl;
//	cout << "Your Choice?  ";
//	cin >> numScreenColor;
//	ScreenColor = (enScreenColor)numScreenColor;
//	ChangeScreenColor(ScreenColor);
//}
//
//int main() {
//	cout << "#################################################\n";
//	cout << "################## AHMED  MADY ##################\n";
//	cout << "#################################################\n";
//	SelectScreenColor();
//	cout << "#################################################\n";
//	cout << "#################################################\n";
//	return 0;
//}