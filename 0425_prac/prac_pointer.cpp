#include <iostream>

using namespace std;

// 1. �迭�� ���� �������� �ٲ��ִ� reverse() �Լ� �����
// 2. reverse() �Լ��� ���޹��� ����(�Է°�)�� �����Ӱ� �ۼ�
// 3. main���� �迭�� ����
// 4. main���� ������ �迭�� �ּҰ��� reverse() �Լ��� �Ѱ��ְ�, reverse() �Լ����� ���� ����
// 5. main���� ����� �迭�� ���� ������� ���

void reverse_x(int *x, int size)
{
    int* start = x; // �迭 x�� ���� ������
    int* end = x + size - 1; // �迭 x�� �� ������
    
    // ���۰� ���� ����Ű�� �����Ͱ� ������ ������ �ڸ��� �ٲ�
    while (start < end) {

        swap(*start, *end); // �����Ͱ� ����Ű�� ���� �ٲ�
       
        // ���۰� �� �����͸� �̵�
        start++;
        end--;
    }
}

int main()
{
    int x[] = { 1, 3, 5, 7, 9, 11 };

    int size = sizeof(x) / sizeof(x[0]);

    cout << "x_origin: ";

    for (int i = 0; i < size; i++)
    {
         std::cout << x[i] << " ";
    }
    
    cout << endl;

	reverse_x(x, size);
    cout << "x_reverse: ";

    for (int i = 0; i < size; i++)
    {
        std::cout << x[i] << " ";
    }

    cout << endl;

	return 0;
}
