#include<iostream>
#include<string>
using namespace std;

int main() {

	string stringA = "hello"; // stringA에 hello 대입

	cout << stringA[0] << endl; // 문자열에 제일 처음 문자 출력
	cout << stringA.at(0) << endl;
	cout << stringA.front() << endl; 

	cout << stringA.back() << endl; // 문자열에 가장 마지막 문자 출력
	// 함수와 메서드 차이? 
	// 어디에 있냐에 따른 차이

	cout << stringA.empty() << endl;


	cout << stringA.substr(2, 3) << endl; // substr ( index, length ) : index 부터 length 만큼 잘라서 반환
	cout << stringA.replace(2, 2, "aa") << endl; // replace ( incdex, 

	string s1 = "aaa";
	string s2 = "abc";
	string s3 = "aq";
	string s4 = "aaa";

	cout << s1.compare(s2) << endl; // compare : 사전순으로 빠르면 -1, 같으면 0, 느리면 1
	cout << s1.compare(s4) << endl;
	cout << s2.compare(s1) << endl;

	string a = "hello";
	string b = "bye";
	string o = "o";

	swap(a, b);

	cout << "a : " << a << endl; // ctrl + d : 아래줄로 복사
	cout << "b : " << b << endl;

	cout << b.find(o) << endl; // 문자열b에 'o'가 있는지 확인한 후 몇번째에 o가 있는지 반환
	cout << a.find(o) << endl;

	a.push_back('A'); // push_back() : 문자열 a 뒤에 A를 추가해준다
	cout << a << endl;

	a.pop_back(); // pop_back() : 문자열 마지막 문자 제거
	cout << a << endl;
}