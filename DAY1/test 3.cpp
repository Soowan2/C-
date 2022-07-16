#include<iostream>
using namespace std;

int inventory[5] = { 0 };
int score = 0;


void getItem(int item)
{
	inventory[item]++;
}

void getItem(int item, int count)
{
	inventory[item] += count;
}

void getItem(int item, int count, int point)
{
	inventory[item] += count;
	score += point;
}

int main() {

	getItem(1);
	getItem(3, 5);
	getItem(0, 10, 100);

	for (int i : inventory) 
	{
		cout << i << " ";
	}

	cout << endl;

	cout << "score : " << score;

}