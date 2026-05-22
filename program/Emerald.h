#pragma once
#include "Material.h"

class Emerald : public Material
{
private:
	float transparency;
public:
	Emerald();

	void Describe();

	virtual void Promote() override;
	// 자식 클래스에선 virtual을 사용한 뒤엔 override를 사용하는게 좋습니다.
	// 오류가 걸렸을 경우 실행을 바로 멈추게 도와주는 명령어이기 때문입니다.
};

