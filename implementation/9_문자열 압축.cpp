#include <iostream>
#include <string>

using namespace std;

int solution(string str)
{
    int ans = str.size();

}

int main(void)
{
    string str = "aabbaccc";

    int  res = solution(str);

	return 0;
}

using namespace std;

int solution(string s) {
    int answer = s.size();
    // 1�� ����(step)���� ���� ������ �÷����� Ȯ��
    for (int step = 1; step < s.size() / 2 + 1; step++) {
        string compressed = "";
        string prev = s.substr(0, step); // �տ������� step��ŭ�� ���ڿ� ����
        int cnt = 1;
        // ����(step) ũ�⸸ŭ ������Ű�� ���� ���ڿ��� ��
        for (int j = step; j < s.size(); j += step) {
            // ���� ���¿� �����ϴٸ� ���� Ƚ��(count) ����
            if (prev == s.substr(j, step)) cnt += 1;
            // �ٸ� ���ڿ��� ���Դٸ�(�� �̻� �������� ���ϴ� �����)
            else {
                compressed += (cnt >= 2) ? to_string(cnt) + prev : prev;
                prev = s.substr(j, step); // �ٽ� ���� �ʱ�ȭ
                cnt = 1;
            }
        }
        // �����ִ� ���ڿ��� ���ؼ� ó��
        compressed += (cnt >= 2) ? to_string(cnt) + prev : prev;
        // ��������� ���� ���ڿ��� ���� ª�� ���� ����
        answer = min(answer, (int)compressed.size());
    }
    return answer;
}