#include <iostream>

using namespace std;

// 1. �迭 �����
// 2. ����ڿ��� ���̸� �Է� �ޱ�
// 3. �ش� ���̿� �ش��ϴ� ��� �̸��� ���� ������ ����ϱ�

void main()
{

	string grade[5][4] =
	{
		{"�̸�", "����", "����", "����"},
		{"������", "19", "66", "68"},
		{"������", "20", "73", "94"},
		{"�谡��", "19", "58", "37"},
		{"������", "20", "82", "29"}
	};

	string age;

	cout << "���̸� �Է��� �ּ���. : ";
	cin >> age;
	cout << "\n";

	bool b_ok = false;

	int array_size = sizeof(grade) / sizeof(grade[0]);

	for (int i = 0; i < array_size; i++)
	{

		if (age == grade[i][1])
		{
			cout << "�̸� : " << grade[i][0] << ", ���� : " << grade[i][3] << endl;
			b_ok = true;
		}

	}

	if (b_ok == false)
	{
		cout << "�ٽ� �Է��� �ּ���." << endl;
	}

}