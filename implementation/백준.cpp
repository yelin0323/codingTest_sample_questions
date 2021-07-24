#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int a, b, v;
	cin >> a >> b >> v;

	cout << (v - b - 1) / (a - b) + 1;


	return 0;
}