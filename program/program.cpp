#include <iostream>
// 만든 헤더 파일을 호출하기 위해선 include "" 형태로 만들어야합니다.
#include "Publisher.h"

using namespace std;

int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 서로 동일한 기능을
	// 서로 다른 방법으로 처리할 수 있는 기능입니다.

#pragma region 오버로딩
	// 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의
	// 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.

	// 객체 생성이란 * : main 안에서 main 전에 만들었던 class를 호출하는 것을 의미합니다.
	// 객체 생성은 어떻게 하는가 * : main 안에서 클래스 이름을 선언한 이후에 뒤에 객체 이름을 선언하면
	// 객체가 생성됩니다.

	Publisher publisher;

	publisher.Send(100);
	publisher.Send("This program can't be executed");
	publisher.Send("Identify the issue frequency : ", 60);

	// 함수의 오버로딩의 경우 매개 변수에 전달하는 인수의
	// 형태를 보고 호출하므로, 반환형으로 함수의 오버로딩을 생성할 수 없습니다.


#pragma endregion

	// 정적 바인딩 : 실행 전에 값이 설정되어 있는 걸 의미합니다.
	// 동적 바인딩 : 실행 후에 값이 설정되어 있는 걸 의미합니다.

	// 다형성은 컴파일 시점에 함수와 속성이 결정되는
	// 정적 바인딩을 하지 않고, 실행 시간에 함수와
	// 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.

#pragma endregion

	return 0;
}