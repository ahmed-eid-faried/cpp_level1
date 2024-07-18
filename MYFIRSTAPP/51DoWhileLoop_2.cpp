//#include <iostream>
//#include <sstream>
//#include <string>
//#include <typeinfo>
//using namespace std;
//
//template <typename T, typename... Args>
//void input(T& variable, Args... prompts) {
//	string betweenSpace = "";
//	string inputStr;
//	// œ„Ã Ã„Ì⁄ «·‰’Ê’ ›Ì ”·”·… Ê«Õœ…
//	string fullPrompt;
//	(void)initializer_list<int>{ (fullPrompt.append(prompts), fullPrompt.append(betweenSpace), 0)... };
//	cout << fullPrompt;
//	getline(cin, inputStr);
//	stringstream ss(inputStr);
//	T temp;
//	if (!(ss >> temp)) {
//		cerr << "Invalid input type for " << typeid(T).name() << "\n";
//	}
//	else {
//		variable = temp;
//	}
//}
//
//
//void InputNumberInRange(int From, int To) {
//	int NUMBER;
//	do {
//		input(NUMBER, "PLEASE ENTER NUMBER BETWEEN ", to_string(From), " TO ", to_string(To), ": ");
//	} while (NUMBER < From || NUMBER>To);
//	cout << "#################################################\n";
//	cout << "YOUR NUMBER IS ########>>>>  " << NUMBER << endl;
//}
//
//
//int main() {
//	cout << "#################################################\n";
//	cout << "################## AHMED  MADY ##################\n";
//	cout << "#################################################\n";
//	InputNumberInRange(0, 100);
//
//	cout << "#################################################\n";
//	cout << "#################################################\n";
//	return 0;
//}
//
//
