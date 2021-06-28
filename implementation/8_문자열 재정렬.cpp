#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	string str;
	vector<char> res;
	int result = 0;

	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if(isalpha(str[i]))
		{
			res.push_back(str[i]);
		}
		else
		{
			result = result + (str[i] - '0');
		}
	}

	sort(res.begin(), res.end());

	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i];
	}
	if (result != 0)
	{
		cout << result;
	}
}