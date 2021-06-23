#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> arr;

int main(void) {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int coin = 1;
    for (int i = 0; i < n; i++) {
        if (coin < arr[i]) break;
        coin += arr[i];
    }

    cout << coin << '\n';
}