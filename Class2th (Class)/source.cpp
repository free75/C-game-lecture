#include <iostream>
// 이름 공간(name space)은 main 함수 전에 선언하는 명령어입니다.
// using namespace는 이름 공간을 사용할 때마다 이름 공간의 이름, 그리고 범위 지정 연산자를
// 사용하는 불편함을 없애기 위해 사용하는 명령어입니다.
// 다만 선언하려면 이름 공간이 선언된 이후에 선언해야 합니다.
// 그런데 using namespace std;는 왜 이름 공간 없이 사용이 가능하냐면,
// std는 C++ 표준 라이브러리에서 제공하는 이름 공간이기 때문에,
// 이름 공간을 선언할 필요 없이 #include <iostream> 바로 아래에 선언을 하더라도
// using namespace std를 사용할 수 있습니다.
using namespace std;

namespace Client
{
	int port = 1557;

	void Send()
	{
		cout << "the Client Sends data..." << endl;
	}
}

namespace Server
{
	int port = 1885;

	void Send()
	{
		cout << "the Server Sends data..." << endl;
	}
}

using namespace Client;

class GameObject
{
#pragma region 접근 지정자
	// 클래스 내부에 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자입니다.

	// public : 클래스 내부와 자기가 상속하고 있는 클래스, 그리고
	//          클래스 외부에서도 접근을 허용하는 지정자입니다.

	// protected : 클래스 내부와 자기가 상속하고 있는 클래스까지만
	//             접근을 허용하는 지정자입니다.

	// private : 클래스 내부까지만 접근을 허용하는 지정자입니다.

#pragma endregion

	// 클래스 내부란 class 변수 이름 {}의 중괄호 안에 선언된 변수와 함수들을 의미합니다.
	// 클래스 내부의 변수와 함수들은 보통 private와 protected로 선언하는 경우가 많습니다.

private:

	int x;

	int y;

	int z;

protected:

	const char* name;

public:

	void Initialize()
	{
		x = 0;
		y = 0;
		z = 0;
	}

};

int main()
{
#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를
	// 설정하는 영역입니다.


	// main 전에 선언한 이름 공간 CIient과 Server의 port 변수와 Send 함수를
	// main 안에서 호출할 때에는 이름 공간으로 선언한 이름 Client, Server과 범위 지정 연산자인
	// ::를 사용하여 이름 공간 안에 존재하는 port 변수와 Send 함수를 호출할 수 있습니다.
	// 형식: Client::Sent(), Server::Send()


	//Send();

	//Send();
#pragma endregion

#pragma region 클래스
	// 사용자 정의 데이터 유형으로 속성과 함수가 포함되어
	// 있으며, 클래스를 통해 객제를 생성하여, 접근하고 사용하는
	// 집합체입니다.

	GameObject gameObject;

	gameObject.Initialize();

	cout << "game Object of Size " << sizeof(gameObject) << endl;
	// gameObject의 크기를 확인하기 위해 사용한 명령어입니다. 
	// 그리고 gameObject의 크기는 24입니다.

	// 클래스의 경우 클래스 내부에 있는 변수의 클래스의
	// 메모리 영역에 포함되지만, 정적 변수와 함수의
	// 메모리는 클래스 영역에 포함되지 않습니다.

#pragma endregion

	return 0;
}