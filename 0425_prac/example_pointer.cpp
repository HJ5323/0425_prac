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
//	p++; // *이 없으니까 주소 값에 1을 더한 것.
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

//// 공간 3
//// GLOBAL
//string global_name; // 전역 변수, 특이하게 해주면 이름 안겹침
//
//
//void changeValue(int x)
//{
//	x = 20; // 공간 1
//	global_name = "A";
//}
//
//int main()
//{
//	// 공간 2
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
//		// 공간 4
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
//	cout << global_name << endl; // 마지막에 들어간 값이 출력됨
//
//	return 0;
//} // scope가 다르다. 공간이 다르다. code block이 다르다

// call by refernece -> scope가 달라도 접근 가능
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