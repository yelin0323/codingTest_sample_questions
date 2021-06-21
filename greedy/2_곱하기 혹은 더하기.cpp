#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string str;

int mulOrPlus() {
	int cal = 0;

	if (str.length() == 1)
	{
		cal = str[0]-48;
		return cal;
	}

	cal = str[0] - 48;
	for (int i = 1; i < str.length(); i++)
	{
		
		if (cal * (str[i] - 48) == 0)
		{
			cal = cal + (str[i] - 48);
		}
		else if ((str[i] - 48) == 1 || cal == 1)
		{
			cal = cal + (str[i]-48);
		}
		else
		{
			cal = cal * (str[i] - 48);
		}

	}

	return cal;
}

int main(void)
{
	
	cin >> str;

	int res = mulOrPlus();
	
	cout << res;

	return 0;
}