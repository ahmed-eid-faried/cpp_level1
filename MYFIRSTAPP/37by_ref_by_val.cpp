//#include <iostream>
//#include <string>
//using namespace std;
//
//void funByRef(float& num1, float& num2) {
//	float temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "IN FUN num1: " << num1 << endl;
//	cout << "IN FUN num2: " << num2 << endl;
//
//}
//void funByVal(float num1, float num2) {
//	float temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "IN FUN num1: " << num1 << endl;
//	cout << "IN FUN num2: " << num2 << endl;
//
//}
//
//int main() {
//	cout << "#################################################\n";
//	cout << "################## AHMED  MADY ##################\n";
//	cout << "#################################################\n";
//	float num1 = 45;
//	float num2 = 2.8;
//	cout << "IN MAIN before funByRef& num1: " << num1 << endl;
//	cout << "IN MAIN before funByRef& num2: " << num2 << endl;
//	cout << "#################################################\n";
//	funByRef(num1, num2);
//	cout << "#################################################\n";
//	cout << "IN MAIN after funByRef& num1: " << num1 << endl;
//	cout << "IN MAIN after funByRef& num2: " << num2 << endl;
//	cout << "#################################################\n";
//	cout << "#################################################\n";
//	float num3 = 45;
//	float num4 = 2.8;
//	cout << "IN MAIN before funByVal num3: " << num3 << endl;
//	cout << "IN MAIN before funByVal num4: " << num4 << endl;
//	cout << "#################################################\n";
//	funByVal(num3, num4);
//	cout << "#################################################\n";
//	cout << "IN MAIN after funByVal num3: " << num3 << endl;
//	cout << "IN MAIN after funByVal num4: " << num4 << endl;
//	cout << "#################################################\n";
//	cout << "#################################################\n";
//	return 0;
//}