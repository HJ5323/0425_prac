#include <iostream>

using namespace std;

// 1. 배열의 값을 역순으로 바꿔주는 reverse() 함수 만들기
// 2. reverse() 함수가 전달받을 인자(입력값)은 자유롭게 작성
// 3. main에서 배열을 생성
// 4. main에서 생성한 배열의 주소값을 reverse() 함수로 넘겨주고, reverse() 함수에서 값을 변경
// 5. main에서 변경된 배열의 값을 순서대로 출력

void reverse_x(int *x, int size)
{
    int* start = x; // 배열 x의 시작 포인터
    int* end = x + size - 1; // 배열 x의 끝 포인터
    
    // 시작과 끝을 가리키는 포인터가 만나기 전까지 자리를 바꿈
    while (start < end) {

        swap(*start, *end); // 포인터가 가리키는 값을 바꿈
       
        // 시작과 끝 포인터를 이동
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
