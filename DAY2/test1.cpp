#include<iostream>
#include<string>
using namespace std;

struct Member 
{
private:
	string id;
	string password;
	string name;
	string address;
	string email;

public:
	void setId(string h_id) {
		id = h_id;
	}
	string getId() {
		return id;
	}
	void setPassword(string h_password) {
		password = h_password;
	}
	string getPassword() {
		return password;
	}
	void setName(string h_name) {
		name = h_name;
	}
	string getName() {
		return name;
	}
	void setAddress(string h_address) {
		address = h_address;
	}
	string getAddress() {
		return address;
	}
	void setEmail(string h_email) {
		email = h_email;
	}
	string getEmail() {
		return email;
	}

};

int main()
{
	struct Member harry;

	harry.setId("harry");
	harry.setPassword("harry1234?!");
	harry.setName("±èÇØ¸®");
	harry.setAddress("´ëÀü±¤¿ª½Ã ¼­±¸");
	harry.setEmail("harry@gmail.com");

	cout << harry.getId() << endl;


}