//#include <iostream>
//#include <cmath>
//#include <cfenv>
//using namespace std;
//
//#ifndef M_PI
//#define M_PI 3.14159265358979323846
//#endif
//
//int main() {
//    // Types
//    float_t f1 = 3.14f; // Most efficient floating-point type at least as wide as float
//    double_t d1 = 2.718; // Most efficient floating-point type at least as wide as double
//
//    // Macros
//    cout << "HUGE_VALF: " << HUGE_VALF << endl; // Overflow value for float
//    cout << "HUGE_VAL: " << HUGE_VAL << endl; // Overflow value for double
//    cout << "HUGE_VALL: " << HUGE_VALL << endl; // Overflow value for long double
//    cout << "INFINITY: " << INFINITY << endl; // Positive infinity for float
//    cout << "NAN: " << NAN << endl; // Not-a-Number (NaN) for float
//    cout << "math_errhandling: " << math_errhandling << endl; // Error handling mechanism used by math functions
//
//    // Basic operations
//    float a = -3.5f;
//    float b = 2.0f;
//
//    cout << "abs(a): " << abs(a) << endl; // Absolute value of a
//    cout << "fmod(a, b): " << fmod(a, b) << endl; // Remainder of a / b
//    cout << "remainder(a, b): " << remainder(a, b) << endl; // Signed remainder of a / b
//    cout << "fmax(a, b): " << fmax(a, b) << endl; // Maximum of a and b
//    cout << "fmin(a, b): " << fmin(a, b) << endl; // Minimum of a and b
//
//    // Exponential functions
//    cout << "exp(1.0): " << exp(1.0) << endl; // e raised to the power 1.0
//    cout << "log(1.0): " << log(1.0) << endl; // Natural logarithm of 1.0
//    cout << "log10(100.0): " << log10(100.0) << endl; // Base 10 logarithm of 100.0
//
//    // Power functions
//    cout << "pow(2.0, 3.0): " << pow(2.0, 3.0) << endl; // 2.0 raised to the power 3.0
//    cout << "sqrt(16.0): " << sqrt(16.0) << endl; // Square root of 16.0
//    cout << "cbrt(27.0): " << cbrt(27.0) << endl; // Cube root of 27.0
//
//    // Trigonometric functions
//    cout << "sin(PI/2): " << sin(M_PI / 2) << endl; // Sine of PI/2
//    cout << "cos(PI/2): " << cos(M_PI / 2) << endl; // Cosine of PI/2
//    cout << "tan(PI/4): " << tan(M_PI / 4) << endl; // Tangent of PI/4
//
//    // Hyperbolic functions
//    cout << "sinh(1.0): " << sinh(1.0) << endl; // Hyperbolic sine of 1.0
//    cout << "cosh(1.0): " << cosh(1.0) << endl; // Hyperbolic cosine of 1.0
//    cout << "tanh(1.0): " << tanh(1.0) << endl; // Hyperbolic tangent of 1.0
//
//    // Nearest integer floating-point operations
//    cout << "ceil(2.3): " << ceil(2.3) << endl; // Smallest integer not less than 2.3
//    cout << "floor(2.3): " << floor(2.3) << endl; // Largest integer not greater than 2.3
//    cout << "round(2.5): " << round(2.5) << endl; // Rounds 2.5 to the nearest integer
//
//    // Classification and comparison
//    std::cout << "isfinite(INFINITY): " << std::isfinite(INFINITY) << std::endl; // Checks if INFINITY is finite
//    std::cout << "isinf(INFINITY): " << std::isinf(INFINITY) << std::endl; // Checks if INFINITY is infinite
//    std::cout << "isnan(NAN): " << std::isnan(NAN) << std::endl; // Checks if NAN is NaN
//
//    return 0;
//}
