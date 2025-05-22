#include "User.h"
// Constructor
User::User() {
	name = "";
	password = "";
}
// Register the user
void User::registerUser(string userName, string userPassword) {
	name = userName;
	password = userPassword;
}
// Check user credentials
bool User::checkCredentials(string userName, string userPassword) {
	return (name == userName && password == userPassword);
}