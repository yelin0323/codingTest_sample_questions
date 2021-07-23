#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int word = 0;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        int* alp = new int[26]{};

        int prev = -1;
        int flag = 1;
        for (int j = 0; j < str.size(); j++)
        {
            int temp = str[j] - 'a';
            if (prev != temp && alp[temp] !=0)
            {
                flag = 0;
                break;
            }
            alp[temp]++;
            prev = temp;
        }
        if (flag == 1)
        {
            word++;
        }
        
    }

    cout << word;
    return 0;
}