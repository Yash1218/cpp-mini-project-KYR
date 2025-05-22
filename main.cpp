#include <iostream>
#include "User.h"
#include "LegalAssistant.h"
#include "EmblemPrinter.h"
using namespace std;
// Function prototypes
bool login(User& user);
void registerUser(User& user);
void mainMenu(User& user);
int main() {
	User currentUser;
	printEmblem(); // Uncomment if you want to display an emblem
	while (true) {
		int choice;
		cout << "Welcome to the Digital 'KYC' Assistant!" << endl;
		cout << "---------------------------------------\n" << endl;
		cout << "1. Register." << endl;
		cout << "2. Login." << endl;
		cout << "3. Exit." << endl;
		cout << "Select an option: ";
		cin >> choice;
		if (choice == 1) {
			registerUser(currentUser);
			cout << "Please log in to continue." << endl;
			if (login(currentUser)) {
				mainMenu(currentUser); // Show main menu after successful login
			}
			else {
				cout << "Login failed :( Choose an option below." << endl;
			}
		}
		else if (choice == 2) {
			if (login(currentUser)) {
				mainMenu(currentUser); // Show main menu after successful login
			}
			else {
				cout << "Login failed :( Choose an option below." << endl;
			}
		}
		else if (choice == 3) {
			cout << "Exiting. Thank you :)." << endl;
#ifdef _WIN32
			system("CLS");
#else
			system("clear");
#endif
			break; // Exit program
		}
		else {
			cout << "Invalid option :(. Please try again." << endl;
		}
	}
	return 0;
}
// Implementation of the login function
bool login(User& user) {
	string name, password;
	cout << "\nEnter your name: ";
	cin >> name;
	cout << "\nEnter your password: ";
	cin >> password;
	// Check against stored credentials
	return user.checkCredentials(name, password); // Return true/false
}
// Register a new user function
void registerUser(User& user) {
	string name, password;
	cout << "Register yourself." << endl;
	cout << "Enter your name : ";
	cin >> name;
	cout << "Password : ";
	cin >> password;
	user.registerUser(name, password);
	cout << "Registration successful :)." << endl;
}
// Main menu after login
void mainMenu(User& user) {
	while (true) {
		int option;
		cout << "\nSelect an option:" << endl;
		cout << "1. Common Legal Queries" << endl;
		cout << "2. Legal Laws & Topics" << endl;
		cout << "3. Exit" << endl;
		cin >> option;
		if (option == 1) {
			showLegalQueries();
		}
		else if (option == 2) {
			showLegalLaws();
		}
		else if (option == 3) {
			cout << "Exiting. Thank you!" << endl;
#ifdef _WIN32
			system("CLS");
#else
			system("clear");
#endif
			break; // Exit from main menu
		}
		else {
			cout << "Invalid option. Please try again." << endl;
		}
	}
}
