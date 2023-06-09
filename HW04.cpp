#include <iostream>
#include <RegisterPage.h>
using namespace std;
string email, password, plate, choosedArea;
int rentorHold;
void homePage() {
	cout << "Please write your plate of car:" << endl;
	cin >> plate;
	cout << "Please choose one of parking areas.." << endl;
	cout << "A , B , C , D , E" << endl;
	cin >> choosedArea;
	cout << "Which one do you want rent(1) or hold(2)?" << endl;
	cin >> rentorHold;
	if (rentorHold == 1) {
		cout << choosedArea << " is rented for " << plate << endl;
	}
	if (rentorHold == 2) {
		cout << choosedArea << " is hold for " << plate << endl;
	}
}
void registerPage() {
	cout << "Email: " << endl;
	cin >> email;
	cout << "Password.." << endl;
	cin >> password;
	homePage();
}
void loginPage() {
	cout << "Email: " << endl;
	cin >> email;
	cout << "Password.." << endl;
	cin >> password;
	homePage();
}
int main()
{
	int input1;
	cout << "Are u registered? If 'YES' type 1, if 'NO' type 2." << endl;
	cin >> input1;
	cout << "You choosed: " << input1 << endl;
	if (input1 == 1) {
		registerPage();
	}
	else {
		loginPage();
	}
}




