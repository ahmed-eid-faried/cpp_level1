//#include <limits>
//#include <string>
//#include "18inputs_card.h"
//#include <iostream>
// 
// 
//
//template<typename T>
//void printTypeInfo(const std::string& typeName) {
//    std::cout << "Type: " << typeName << std::endl;
//    std::cout << "Size: " << sizeof(T) << " bytes" << std::endl;
//    if constexpr (std::numeric_limits<T>::is_integer) {
//        std::cout << "Min: " << std::numeric_limits<T>::min() << std::endl;
//        std::cout << "Max: " << std::numeric_limits<T>::max() << std::endl;
//    }
//    else if constexpr (std::numeric_limits<T>::has_infinity) {
//        std::cout << "Min: " << std::numeric_limits<T>::lowest() << std::endl;
//        std::cout << "Max: " << std::numeric_limits<T>::max() << std::endl;
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    printTypeInfo<int>("int");
//    printTypeInfo<short>("short or short int");
//    printTypeInfo<long>("long or long int");
//    printTypeInfo<long long>("long long or long long int");
//    printTypeInfo<unsigned int>("unsigned int");
//    printTypeInfo<unsigned short>("unsigned short or unsigned short int");
//    printTypeInfo<unsigned long>("unsigned long or unsigned long int");
//    printTypeInfo<unsigned long long>("unsigned long long or unsigned long long int");
//    printTypeInfo<float>("float");
//    printTypeInfo<double>("double");
//    printTypeInfo<long double>("long double");
//    printTypeInfo<char>("char");
//    printTypeInfo<unsigned char>("unsigned char");
//    printTypeInfo<wchar_t>("wide char");
//    printTypeInfo<bool>("bool");
//    inputsCard();
//    return 0;
//}
