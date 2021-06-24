#include <iostream>

using namespace std;


int main(void)
{
	int n = 0;
	int m = 0;
	cin >> n >> m;

	int *ball = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> ball[i];
	}

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (ball[i] != ball[j])
			{
				cnt++;
			}
		}

	}

	cout << cnt;


	return 0;
}