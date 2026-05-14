#include <iostream>

int packet = 1;


// c언어에서의 포인터 변수는 void Swap으로 대체가 가능합니다.
//main 함수 전에 void Swap에 선언한 X, Y 명령어들을 main 안에서 Swap(x, y)로 호출하여 x와 y의 값을 서로 바꿔주는 명령어입니다.
// 즉 main 전에 Swap에 temporary라는 임시 변수에 x 값을 저장한 뒤에, x에 y 값을 저장하고, y에 temporary에 
// 저장된 x 값을 저장하여 x와 y의 값을 서로 바꿔주는 명령어입니다.
// 따라서 main 안에서 Swap(x, y) 명령어를 호출하면 x와 y의 값이 서로 바뀌게 됩니다.
void Swap(int& parameterX, int& parameterY)
{
    int temporary = parameterX;

    parameterX = parameterY;

    parameterY = temporary;
}

int main()
{
#pragma region 스트림
    //// 시간의 흐르멩 따라 연속적으로 발생하는 데이터의 흐름입니다.
    //
    //// 여기서 std::cout <<는 출력 스트림이고, std::cin >>는 입력 스트림입니다.
    //int count = 0;
    //
    //std::cout << "Series : ";
    //
    //std::cin >> count;
    //
    //for (int i = 0; i < count; i++)
    //{
    //    std::cout << "Play station" << i + 1<< std::endl;
    //}
    //
    //// 스트림은 운영 체제에 의해 생성되며, 스트림 자체에 버퍼라는
    //// 임시 메모리 공간이 존재합니다.
#pragma endregion

#pragma region 범위 지정 연산자
    //// 여러 범위에서 사용되는 식별자를 구분하는데
    //// 사용하는 연산자입니다.
    //
    //// main 안에서 있는 step에 저장됩니다.
    //
    //int packet = 100;
    //
    //// main 함수 전에 선언한 int packet = 1이라는 전역 변수 값과, main 안에 존재하는 int packet = 100이라는
    //// 값이 동시에 존재할때엔 가까운 변수 값이 먼저 출력됩니다.
    //// 하지만 전역 변수의 값을 출력하고 싶다면, 범위 지정 연산자인 ::를 사용하여 전역 변수의 값을 출력할 수 있습니다.
    //
    //std::cout << "packet 전역 변수의 값 : " << ::packet << std::endl;
    //
    //std::cout << "packet 지역 변수의 값 : " << packet << std::endl;
    //
    //// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가
    //// 선언되었을 때 가장 가까운 범위에 선언된 변수의 이름을
    //// 사용하는 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않습니다.

#pragma endregion

#pragma region 참조자
    // 하나의 변수에 또 다른 이름을 지정하는 지정자입니다.

    //int room = 10;
    //
    //int& a = room;
    //
    //std::cout << a;

    //int x = 10;
    //int y = 20;
    //
    //Swap(x, y);
    //
    //std::cout << "x : " << x << std::endl;
    //std::cout << "y : " << y << std::endl;

#pragma endregion

#pragma region 동적 할당
    //int* pointer = new int; // new 연산자와 pointer 변수를 같이 사용하여 동적 할당을 하는 명령어입니다.
    //
    //*pointer = 10; // 후에 *포인터 변수에 10이라는 값을 저장할 경우
    //
    //std::cout << "pointer 변수가 가리키는 값 : " << *pointer << std::endl; 
    //
    //// pointer 변수가 가리키는 값이 10으로 나온다는 것을 알수 있습니다.
    //
    //delete pointer; 
    //// delete 연산자와 pointer 변수를 같이 사용하여 동적 할당 해제를 하는 명령어입니다.
    //// 중요 다만 delete로 해제가 가능하지만 두 번 해제할 경우 오류가 발생할 수도 있습니다.
    //// 이번엔 힙을 20바이트로 설정한 후에 10~50까지 출력하는 코드를 만들어보겠습니다.
    //
    // pointer = new int[5]; 
    // // delete pointer로 해제한 뒤에 새롭게 pointer 변수를 선언하려면
    // // 이미 위에서 pointer 변수를 선언했기 때문에, delete pointer로 해제한 뒤에 pointer 변수를 새롭게 선언할 필요가 없습니다.
    // // 따라서 새롭게 선언할 필요 없이, pointer = new int[10];로 새롭게 pointer 변수를 선언할 수 있습니다.
    //// new 연산자와 pointer 변수를 같이 사용하여 동적 할당을 하는 명령어입니다.
    //
    //for (int i = 0; i < 5; i++)
    //{
    //	pointer[i] = (i + 1) * 10;
    //
    //	std::cout << "pointer 변수가 가리키는 값 : " << pointer[i] << std::endl;
    //}
    //
    //delete[] pointer; 
    //// 일반적인 delete pointer로 해제할 경우, 배열의 첫 번째 요소만 해제되고
    //// 나머지 2~5번째 요소는 해제되지 않기 때문에, 뒤의 배열 요소들까지 해제하기 위해서는
    //// delete[] pointer로 해제해야 합니다.
    // delete pointer, delete[] pointer로 해제한 경우에도 위에서 선언했던 pointer 변수의 값들은 전부 콘솔 창에 출력됩니다.

#pragma endregion

    return 0;
}


