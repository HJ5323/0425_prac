#include <iostream>

using namespace std;

// 1. 몇명의 학생 성적 평균을 구할지 입력 받기
// 2. 입력받은 학생 수 만큼 성적을 입력받기
// 3. 학생들의 성적 평균 산출하기

int main()
{
	int student_number;
	float score, score_sum = 0;

	cout << "학생의 수를 입력해 주세요.: ";
	cin >> student_number;

	int* score_array = new int[student_number];


	for (int i = 0; i < student_number; i++)
	{
		score_array[i] = i + 1;

		cout << i + 1 << " 번 학생의 성적을 입력하세요: ";
		cin >> score;
		cout << "\n" << endl;

		score_sum += score; // score_sum = score_sum + score랑 같음


	}

	delete[] score_array;

	cout << "평균 : " << score_sum / student_number << endl;

	return 0;

}

