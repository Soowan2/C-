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
			cout << "���̸� �ٽ� �Է����ּ���" << endl;
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
	// Tom.name = "��";
	// Tom.gender = "M";
	Tom.setAge(100);

	//cout << Tom.name << Tom.age << Tom.gender << endl;
	cout << Tom.getAge() << endl;

	struct Human Sam;
	struct Human Bob;

	// ���� ���� ������
	// public, private

}