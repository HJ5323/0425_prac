#include <iostream>

using namespace std;

// 1. 배열 만들기
// 2. 사용자에서 나이를 입력 받기
// 3. 해당 나이에 해당하는 모든 이름과 수학 점수를 출력하기

void main()
{

	string grade[5][4] =
	{
		{"이름", "나이", "국어", "수학"},
		{"방지턱", "19", "66", "68"},
		{"정직한", "20", "73", "94"},
		{"김가루", "19", "58", "37"},
		{"조나단", "20", "82", "29"}
	};

	string age;

	cout << "나이를 입력해 주세요. : ";
	cin >> age;
	cout << "\n";

	bool b_ok = false;

	int array_size = sizeof(grade) / sizeof(grade[0]);

	for (int i = 0; i < array_size; i++)
	{

		if (age == grade[i][1])
		{
			cout << "이름 : " << grade[i][0] << ", 수학 : " << grade[i][3] << endl;
			b_ok = true;
		}

	}

	if (b_ok == false)
	{
		cout << "다시 입력해 주세요." << endl;
	}

}