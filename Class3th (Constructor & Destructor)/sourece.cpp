#include <iostream>

using namespace std;

class Soldier
{
private:
	// c++ 언어에선 class에서 미리 지정한 변수에 값을 부여할 수 있기 때문에 
	// 가비지 값을 미리 없앨 수 있습니다.
	int health = 0;
	int defense = 0;

	static int count;

	// 비록 Soldier 클래스 안에 선언했지만, Sodier의 클래스에 소속되어있는 명령어가 아닙니다.
	// 즉 class 내부에 있지만 소속되어 있지 않으니, 클래스 내부에선 값을 초기화하거나 선언하는 것이 불가능합니다.

public:
	Soldier()
	{
		cout << "Created Soldier" << endl;
	}
	// 소멸자를 사용하기 위해선 ~(물결 무늬)와 클래스의 이름을 사용하여 선언해야 합니다.
	// 예시로 ~Solider()는 Soldier 클래스의 소멸자입니다.
	// 그리고 소멸자는 반드시 클래스의 맴버 함수 즉 클래스의 내부에 선언해야 합니다.
	~Soldier()
	{
		count++;

		cout << "Destrcution Count : " << endl;
	}
};

int Soldier::count = 0;

// 클래스 내부에선 값을 초기화, 선언하는 것이 불가능하기 때문에
// 내부가 아닌 외부에서 int 클래스 이름::count = (초기화 값, 혹은 선언할 값)으로 설정해야만
// class 내부에 있는 int count의 값을 초기화 하거나, 바꿀 수 있습니다.


// class Sprite이라는 클래스를 만들 경우
// 생성자의 조건부가 pixels에 메모리 주소가 저장되어 있지 않을 경우 새로운 메모리를 할당해야한다는 조건이 있는데
// 이걸 코드로 만들 경우,
class Sprite
{

private:
	int* pixels = nullptr;
	// 먼저 private(클래스 내부까지만 접근을 허용한 지정자)를 사용한 이후에 int* pixels = nullptr로
	// 현재 이 포인터는 어떤 메모리 주소도 저장하고 있지 않다를 의미하는 명령어를 먼저 선언합니다.


public:
	// 이후에 public(클래스 내부와 자기가 상속하고 있는 클래스,
	// 그리고 클래스 외부에서도 접근을 허용하는 지정자)를 사용하여 Sprite 생성자와 ~Sprite 소멸자를 선언합니다.
	// 그리고 중요한 생성자 Sprite은 if문을 사용한 후에 어떠한 메모리 주소도 저장되어 있지 않다는 조건부를 
	// 만족시키기 위해 주소 값 안에 들어있는 가비지 값을 nullptr을 사용하여 초기화하면 어떠한 메모리 주소도 저장되어 
	// 있지 않다는 조건부를 만족시킬 수 있습니다.

	Sprite()
	{
		if (pixels == nullptr)
		{
			pixels = new int(1024);
		}
	}
	// 복사 생성자 : 데이터(Sprite의 데이터)를 물려주기 위해 사용하는 명령어
	// 여기서 복사 생성자를 만들기 위해선 Sprite sprite으로만 사용할 경우 오류가 나면서
	// 사용이 불가능 하기 때문에 무조건 class 변수의 이름 & 새로 선언할 변수의 이름이라는 형식으로 사용해야합니다.
	Sprite(const Sprite& clone)
	{
		pixels = clone.pixels; // 얕은 복사를 하기 위해 만든 명령어 이지만 조금은 잘못된 형식입니다.
	}

	~Sprite()
		// 마지막으로 ~Sprite 소멸자를 생성한 이후에
		// delete pixels로 동적 할당을 해제하면 끝납니다.
	{
		delete pixels;
	}

};

class Mesh
{
private:
	float* vertices = nullptr;

public:

	Mesh()
		// 동적할당은 무조건 시작으로 if문 그리고 if문 소괄호의 내용은 
		// 만든 변수의 초기화 즉 변수 이름 == nullptr 이라는 구조로 만들어져야 합니다.
	{
		if (vertices == nullptr)
		{
			vertices = new float(512.0f);
		}
	}

	Mesh(const Mesh& duplicate)
	{
		vertices = new float(*duplicate.vertices);
		// 깊은 복사에서 사용한 *는 이전에 설정해 놓았던 vertices가 동적 할당을 하면서 생긴 값인
		// 512.0이라는 값을 그대로 가져오기 위해 사용한 기호입니다.
		// 깊은 복사의 형식은 변수의 이름 = new 자료형 변수(*깊은 복사에 사용한 변수의 이름.변수의 이름);
		// 이런 형식으로 나오게 됩니다.
	}

	~Mesh()
	{
		delete vertices;
	}
};


int main()
{
#pragma region 생성자
	// 클래스의 인스턴스가 생성되는 시점에 자동으로
	// 호출되는 특수한 맴버 함수입니다.

	//Soldier soldier;

	//Mesh mesh;

	//Mesh duplicate(mesh);

	// 생성자의 경우 객체가 생성될 때 단 한 번만 호출되며,
	// 생성자는 반환형이 존재하지 않기 때문에 생성자가
	// 호출되기 전에 객체에 대한 메모리가 할당되지 않습니다.

#pragma endregion

#pragma	region 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의 
	// 특수한 멤버 함수입니다.

	//Soldier * address = nullptr;
	// Soldier 클래스의 객체를 가리키는 포인터 변수를 선언하고 nullptr로 초기화합니다.

	//address = new Soldier; 
	// Soldier 클래스의 객체가 메모리에 할당되고 생성자가 호출됩니다.

	//delete address;
	// Soldier 클래스의 객체가 메모리에서 해제되고 소멸자가 호출됩니다.
	// delete 연산자를 사용한 포인터 변수는 객체가 메모리에서 할당이 된 후에 선언해야만
	// class 안에 있는 소멸자를 호출할 수 있습니다.

	// 소멸자는 객체가 메모리에서 해제될 때 단 한 번만
	// 호출되며, 소멸자에는 매개 변수를 생성하며 사용할
	// 수 없습니다.
	//Soldier* list[3];
	//// Soldier의 배열문을 만들기 위해 Sodier list[]로 Soldier의 1~3까지의 배열문을 선언해주고
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	list[i] = new Soldier;
	//}
	//// 후에 for문과 
	//for (int i = 0; i < 3; i++)
	//{
	//	delete list[i];
	//}

#pragma endregion

#pragma region 얕은 복사
	// 객체를 복사할 때 주소 값을 복사하여 같은
	// 메모리 공간을 가리키게 하는 복사입니다.

	// 얕은 복사 하는 방법
	//int* pointer = new int; // 동적 할당을 의미합니다.
	//
	//int* address = pointer; // address로 다른 포인터 변수를 선언합니다.
	//
	//*address = 100; // 이후에 address에 100이라는 값을 넣을 경우
	//
	//cout << "pointer가 가리키는 값 : " << *pointer << endl;
	//cout << "address가 가리키는 값 : " << *address << endl;
	//
	//delete address;

	//Sprite sprite;
	//
	//Sprite copied(sprite);

	// 얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을
	// 참조하고 있기 때문에 하나의 객체로 값을 변경하게 되면
	// 서로 참조된 객체도 함께 영향을 받습니다.

#pragma endregion

#pragma region 깊은 복사 
	// 객체를 복사할 때, 참조 값이 아닌 객체 자체로 새로
	// 복사하여 서로 다른 메모리를 생성하는 복사입니다.


#pragma endregion

	return 0;
}