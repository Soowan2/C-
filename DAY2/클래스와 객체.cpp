#include<iostream>
#include<string>
using namespace std;

struct Human {

private:
	string name;
	int age;
	string gender;

public:
	void setAge(int h_age) 
	{
		if (h_age >= 0 && h_age <= 100)
		{
			age = h_age;
		}
		else
		{
			cout << "나이를 다시 입력해주세요" << endl;
		}
	}

	int getAge() 
	{
		return age;
	}
	
	void setName(string h_name) 
	{
		name = h_name;
	}

	string getName() 
	{
		return name;
	}

	void setGender(string h_gender) 
	{
		gender = h_gender;
	}

	string getGender()
	{
		return gender;
	}

};

int main() {

	struct Human Tom;
	// Tom.name = "톰";
	// Tom.gender = "M";
	Tom.setAge(100);

	//cout << Tom.name << Tom.age << Tom.gender << endl;
	cout << Tom.getAge() << endl;

	struct Human Sam;
	struct Human Bob;

	// 접근 제어 지시자
	// public, private

}