//#include <iostream>
//using namespace std;
//enum enStatus { Married, Single };
//enum enGender { Male, Female };
//enum enColor { Red, Blue, Yellow };
//
//
//struct stAddress {
//	string StreetName;
//	string BuildingNo;
//	string POBox;
//	string ZipCode;
//};
//struct stContactInfo {
//	string Phone;
//	string Email;
//	stAddress Address;
//};
//struct stPerson {
//	string FirstName;
//	string LastName;
//
//	stContactInfo ContactInfo;
//
//	enStatus MaritalStatues;
//	enGender Gender;
//	enColor FavourateColor;
//};
//
//int main() {
//
//	stPerson Person1;
//
//	Person1.FirstName = "AHMED";
//	Person1.LastName = "MADY";
//	//##############################################################
//	Person1.ContactInfo.Email = "ahmedprof@gmail.com";
//	Person1.ContactInfo.Phone = "+201555663045";
//	Person1.ContactInfo.Address.POBox = "-";
//	Person1.ContactInfo.Address.ZipCode = "66444";
//	Person1.ContactInfo.Address.StreetName = "12";
//	Person1.ContactInfo.Address.BuildingNo = "134";
//	//##############################################################
//	Person1.Gender = enGender::Male;
//	Person1.MaritalStatues = enStatus::Single;
//	Person1.FavourateColor = enColor::Red;
//	//##############################################################
//	cout << Person1.ContactInfo.Phone << endl;
//	return 0;
//}