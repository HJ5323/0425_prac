#include <iostream>

using namespace std;

//int main()
//{
//	int n = 10;
//	int* p = &n;
//	cout << p << endl;
//	cout << *p << endl;
//}
//
//int main()
//{
//	int my_array[5] = { 5, 4, 3, 2, 1 };
//	int* p = my_array;
//
//	cout << "value1: " << *p << endl; // 5
//	p++; // *�� �����ϱ� �ּ� ���� 1�� ���� ��.
//	cout << "value2: " << *p << endl; // 4
//	p++;
//	cout << "value2: " << *p << endl; // 3
//	return 0;
//}


//// call by value
//void changeValue(int x)
//{
//	x = 20;
//}
//
//int main()
//{
//	int x = 10;
//	cout << "x before function call: " << x << endl;
//	changeValue(x);
//	cout << "x after function call: " << x << endl;
//	return 0;
//}

//// ���� 3
//// GLOBAL
//string global_name; // ���� ����, Ư���ϰ� ���ָ� �̸� �Ȱ�ħ
//
//
//void changeValue(int x)
//{
//	x = 20; // ���� 1
//	global_name = "A";
//}
//
//int main()
//{
//	// ���� 2
//	int x = 10;
//	cout << "x before function call : " << x << endl;
//	changeValue(x);
//	cout << "x after function call : " << x << endl;
//
//	global_name = "B";
//
//	if (x == 10)
//	{
//		// code block
//		// ���� 4
//		// local
//
//		int x = 100;
//		cout << "x in if-munbub : " << x << endl; // 100
//
//		global_name = "C";
//	}
//
//	{
//		int x = 100;
//		cout << "x out if : " << x << endl; // 100
//	}
//
//	cout << global_name << endl; // �������� �� ���� ��µ�
//
//	return 0;
//} // scope�� �ٸ���. ������ �ٸ���. code block�� �ٸ���

// call by refernece -> scope�� �޶� ���� ����
void changeValue(int *x)
{
	*x = 20; 
}

int main()
{
	int x = 10;
	cout << "x before function call : " << x << endl;
	changeValue(&x);
	cout << "x after function call : " << x << endl;
	return 0;
}