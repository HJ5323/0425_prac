#include <iostream>

using namespace std;

// 1. ����� �л� ���� ����� ������ �Է� �ޱ�
// 2. �Է¹��� �л� �� ��ŭ ������ �Է¹ޱ�
// 3. �л����� ���� ��� �����ϱ�

int main()
{
	int student_number;
	float score, score_sum = 0;

	cout << "�л��� ���� �Է��� �ּ���.: " ;
	cin >> student_number;

	int* score_array = new int[student_number];


	for (int i = 0; i < student_number; i++)
	{
		cout << i + 1 << " �� �л��� ������ �Է��ϼ���: ";
		cin >> score;
		cout << "\n" << endl;

		score_sum += score;
		*(score_array + i) = score;

	}

	delete[] score_array;

	cout << "��� : " << score_sum / student_number << endl;

	return 0;

}

