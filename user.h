#ifndef USER_H
#define USER_H
#include <string>
using namespace std;
class User {
private:
	string name;
	string password;
public:
	User(); // Constructor
	void registerUser(string userName, string userPassword);
	bool checkCredentials(string userName, string userPassword);
};
#endif