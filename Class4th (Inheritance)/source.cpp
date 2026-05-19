#include <iostream>

using namespace std;

class Consumable
{
private:
	const char* name;

public:
	Consumable()
	{
		cout << "created Consumable" << endl;
	}

	~Consumable()
	{
		cout << "Destroyed Consumable" << endl;
	}
};


class Potion : public Consumable
{
private:
	int stemina;

public:
	Potion()
	{
		cout << "Create Potion" << endl;
	}

	~Potion()
	{
		cout << "Destroyed Potion" << endl;
	}
};

int main()
{
#pragma region 상속
	// 성위 클래스의 속성을 하위 클래스가 사용할 수 있도록
	// 설정하는 기능입니다.

	//Consumable consumable;
	//Potion potion;
	//
	//cout << "Consumable의 크기 값 :" << sizeof(consumable) << endl; 
	//// 여기서 각각의 class의 데이터 값을 알고 싶다면
	//// cout << 문장 << sizeof(class 변수 이름) << endl; 이라는 형식으로 만들어야합니다.
	//cout << "Potion의 값 : " << sizeof(Potion) << endl;

	// 클래스의 상속 관계에서 상위 클래스의 하위 클래스의 속성을
	// 사용할 수 없으며, 하위 클래스는 상위 클래스의 메모리가 포함
	// 된 상태로 메모리의 크기가 결정됩니다.

#pragma endregion

	return 0;
}