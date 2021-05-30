#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N = 0;
	
	cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] <= N - i)
		{
			cnt++;
			i = i + arr[i];
		}	
	}

	cout << cnt;

	return 0;
}