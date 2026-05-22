#include <iostream>
// 만든 헤더 파일을 호출하기 위해선 include "" 형태로 만들어야합니다.
#include "Publisher.h"
#include "Emerald.h"
#include "Diamond.h"
#include "Platinum.h"

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

	//Publisher publisher;
	//
	//publisher.Send(100);
	//publisher.Send("This program can't be executed");
	//publisher.Send("Identify the issue frequency : ", 60);

	// 함수의 오버로딩의 경우 매개 변수에 전달하는 인수의
	// 형태를 보고 호출하므로, 반환형으로 함수의 오버로딩을 생성할 수 없습니다.


#pragma endregion

#pragma region 오버라이딩
	// 상위 클래스의 함수를 하위 클래스에서 재정의하여 사용하는 방법입니다.

	Emerald emerald;
    Diamond diamond;

	emerald.Describe();
    diamond.Describe();

#pragma endregion

#pragma region 가상 함수
	// 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출하는 함수입니다.

	//Material* material1 = new Diamond();
	//
	//material1->Promote();
	//
	//delete material1;
	//
	//Material* material2 = new Emerald();
	//
	//material2->Promote();
	//
	//delete material2;

	int choice;

	cout << "choice your tier" << endl;
	cout << " 1. Diamond " << endl;
	cout << " 2. Emerald " << endl;
	cout << " 3. Platinum " << endl;

	cout << " Choice : ";
	cin >> choice;

	Material* material = nullptr;

	if (choice == 1)
	{
		material = new Diamond();
	}
	else if (choice == 2)
	{
		material = new Emerald();
	}
	else if (choice == 3)
	{
		material = new Platinum();
	}

	material->Promote();

	delete material;
	
	// 가상 함수의 경우 가상 함수 테이블을 사용하여 호출되는
	// 함수를 실행 시간에 결정하며, 정적으로 선언된 함수는
	// 가상 함수로 선언할 수 없습니다.

#pragma endregion
	
	// 정적 바인딩 : 실행 전에 값이 설정되어 있는 걸 의미합니다.
	// 동적 바인딩 : 실행 후에 값이 설정되어 있는 걸 의미합니다.

	// 다형성은 컴파일 시점에 함수와 속성이 결정되는
	// 정적 바인딩을 하지 않고, 실행 시간에 함수와
	// 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.

#pragma endregion

	return 0;
}