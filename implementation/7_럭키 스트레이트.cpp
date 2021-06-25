#include <iostream>
#include <string>

using namespace std;


int main(void)
{
	string str;
	cin >> str;

	int half = str.size() / 2;
	int left = 0;
	int right = 0;

	for (int i = 0; i < half; i++)
	{
		left += str[i] - 48;
	}

	for (int i = half; i < str.size(); i++)
	{
		right += str[i] - 48;
	}

	if (left == right)
	{
		cout << "LUCKY";
	}
	else
	{
		cout << "READY";
	}
}