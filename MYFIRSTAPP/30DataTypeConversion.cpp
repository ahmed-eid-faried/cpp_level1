//#include <iostream>
//#include <string>
//using namespace std;
//
//// Example of implicit conversion
//void stringConversion() {
//	string s = "42.5555555555555555555555555555555555555555555555555555555555555554";
//	cout << "Convert from string to int stoi: " << stoi(s) << endl;
//	cout << "Convert from string to float stof: " << stof(s) << endl;
//	cout << "Convert from string to double stod: " << stod(s) << endl;
//	cout << "#################################################\n";
//	double d = 33.44;
//	cout << "Convert from double to string to_string: " << to_string(d) << endl;
//
//
//
//}
//
//// Example of implicit conversion
//void implicitConversion() {
//	double d = 42.4;
//	int i = d; // Implicit conversion from double to int
//	cout << "Implicit Conversion:" << endl;
//	cout << "Double d: " << d << endl;
//	cout << "Integer i: " << i << endl;// Outputs 42
//}
//
//// Example of explicit conversion using C-style cast
//void cStyleCast() {
//	double d = 9.7;
//	int i = (int)d; // C-style cast ==>> conversion from double to int
//	cout << "C-Style Cast:" << endl;
//	cout << "Double d: " << d << endl;
//	cout << "Integer i: " << i << endl; // Outputs 9
//}
//
//// Example of explicit conversion using function-style cast
//void functionStyleCast() {
//	double d = 9.7;
//	int i = int(d); // Function-style cast  ==>> conversion from double to int
//	cout << "Function-Style Cast:" << endl;
//	cout << "Double d: " << d << endl;
//	cout << "Integer i: " << i << endl; // Outputs 9
//}
//
//// Example of explicit conversion using static_cast
//void staticCast() {
//	double d = 9.7;
//	int i = static_cast<int>(d); // static_cast
//	cout << "static_cast:" << endl;
//	cout << "Double d: " << d << endl;
//	cout << "Integer i: " << i << endl; // Outputs 9
//}
//
//// Example of mixed type expressions
//void mixedTypeExpressions() {
//	int i = 10;
//	double d = 5.5;
//	double result = i + d; // i is implicitly converted to double
//	cout << "Mixed Type Expressions:" << endl;
//	cout << "Result: " << result << endl; // Outputs 15.5
//}
//
//// Example of conversion constructor
//class Complex {
//public:
//	double real, imag;
//
//	// Conversion constructor from double
//	Complex(double r) : real(r), imag(0) {}
//
//	void display() const {
//		cout << "Real: " << real << ", Imaginary: " << imag << endl;
//	}
//};
//
//// Example of type conversion operator
//class ComplexWithOperator {
//public:
//	double real, imag;
//
//	ComplexWithOperator(double r, double i) : real(r), imag(i) {}
//
//	// Type conversion operator to double
//	operator double() const {
//		return real;
//	}
//};
//
//int main() {
//	cout << "#################################################\n";
//	cout << "################## AHMED  MADY ##################\n";
//	cout << "#################################################\n";
//	stringConversion();
// cout << endl;
//	cout << "#################################################\n";
//	implicitConversion();
//	cout << endl;
//	cout << "#################################################\n";
//
//	cStyleCast();
//	cout << endl;
//	cout << "#################################################\n";
//
//	functionStyleCast();
//	cout << endl;
//	cout << "#################################################\n";
//
//	staticCast();
//	cout << endl;
//	cout << "#################################################\n";
//
//	mixedTypeExpressions();
//	cout << endl;
//	cout << "#################################################\n";
//
//	// Example of conversion constructor
//	Complex c = 5.5; // Implicit conversion from double to Complex
//	cout << "Conversion Constructor:" << endl;
//	c.display(); // Outputs: Real: 5.5, Imaginary: 0
//	cout << endl;
//	cout << "#################################################\n";
//
//	// Example of type conversion operator
//	ComplexWithOperator cwo(3.3, 4.4);
//	double d = cwo; // Implicit conversion from ComplexWithOperator to double
//	cout << "Type Conversion Operator:" << endl;
//	cout << "Double d: " << d << endl; // Outputs 3.3
//	cout << "#################################################\n";
//	cout << "#################################################\n";
//
//	return 0;
//}
//
//
//
////#include <iostream>
////using namespace std;
////
////int main() {
////
////
////	int x;
////	int y;
////	int z;
////	double k = 12.995;
////
////	//Implicit Conversion
////	x = y;
////	cout << "" << x << endl;
////	int i = 10;
////	double result = i + k; // i is implicitly converted to double
////	cout << "" << result << endl;
////	cout << "#################################################\n";
////	//Explicit Conversion  C-Style Cast:
////	y = (int)x;
////	cout << y << endl;
////	cout << "#################################################\n";
////	//Explicit Conversion  Function-Style Cast:
////	z = int(x);
////	cout << z << endl;
////	cout << "#################################################\n";
////	return 0;
////}