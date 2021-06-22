#include <iostream>
#include <string>

using namespace std;

string str;

int stringChange()
{
	int flag = str[0];
	int one = 0;
	int zero = 0;

	if (str[0] == 1)
	{
		flag = 1;
		one++;
	}
	else {
		flag = 0;
		zero++;
	}

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == flag)
		{
			continue;
		}
		else
		{
			if (str[i] == 1)
			{
				flag = 1;
				one++;
			}
			else {
				flag = 0;
				zero++;
			}
		}
	}

	if (one > zero)
	{
		return one;
	}
	else
	{
		return zero;
	}
}


int main(void)
{
	cin >> str;

	int f = str[0]-48;
	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = str[i] - 48;
		if (f == str[i])
		{
			cnt++;
		}
		//cout << (int)str[i] << endl;
	}

	if (cnt == str.length())
	{
		cout << 0;
		return 0;
	}

	int res = stringChange();
	cout << res;

	return 0;
}