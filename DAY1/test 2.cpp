#include<iostream>
using namespace std;

int main() {

	int arr[2][3] = { {1,2,3},{4,5,6} };

	
	for (int i = 0; i < 2; i++)
	{
		for (int a : arr[i])
		{
			cout << a << " ";
		}
		cout << endl;
	}
}