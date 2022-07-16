#include<iostream>
#include<string>
using namespace std;

int main() {

	string stringA = "hello"; // stringA�� hello ����

	cout << stringA[0] << endl; // ���ڿ��� ���� ó�� ���� ���
	cout << stringA.at(0) << endl;
	cout << stringA.front() << endl; 

	cout << stringA.back() << endl; // ���ڿ��� ���� ������ ���� ���
	// �Լ��� �޼��� ����? 
	// ��� �ֳĿ� ���� ����

	cout << stringA.empty() << endl;


	cout << stringA.substr(2, 3) << endl; // substr ( index, length ) : index ���� length ��ŭ �߶� ��ȯ
	cout << stringA.replace(2, 2, "aa") << endl; // replace ( incdex, 

	string s1 = "aaa";
	string s2 = "abc";
	string s3 = "aq";
	string s4 = "aaa";

	cout << s1.compare(s2) << endl; // compare : ���������� ������ -1, ������ 0, ������ 1
	cout << s1.compare(s4) << endl;
	cout << s2.compare(s1) << endl;

	string a = "hello";
	string b = "bye";
	string o = "o";

	swap(a, b);

	cout << "a : " << a << endl; // ctrl + d : �Ʒ��ٷ� ����
	cout << "b : " << b << endl;

	cout << b.find(o) << endl; // ���ڿ�b�� 'o'�� �ִ��� Ȯ���� �� ���°�� o�� �ִ��� ��ȯ
	cout << a.find(o) << endl;

	a.push_back('A'); // push_back() : ���ڿ� a �ڿ� A�� �߰����ش�
	cout << a << endl;

	a.pop_back(); // pop_back() : ���ڿ� ������ ���� ����
	cout << a << endl;
}