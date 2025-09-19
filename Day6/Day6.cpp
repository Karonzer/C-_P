#include "../Program/stdafx.h"
#include "../Program/wardrobe.h"
#include "../Program/Cabinet.h"


void Initialize_Furniture(Furniture** obj, int _size);

int main()
{
#pragma region 추상화
	// 복잡한 시스템이나 객체의 내부의 세부 사항을 숨기고,
	// 필요한 부분만을 외부에서 사용할 수 있게 단순한 시키는 작업입니다.

	//Furniture* obj[2];
	//Initialize_Furniture(obj, 2);

	//for (int i = 0; i < 2; i++)
	//{
	//	obj[i]->Intercat();
	//}

	//for (int i = 0; i < 2; i++)
	//{
	//	delete obj[i];
	//}
	// 추상 클래스는 정의 되어 있지 않은 삼수가 있으므로,
	//객체를 생성할 수 없습니다.

#pragma endregion

#pragma region 추상화

#pragma endregion
	return 0;
}

void Initialize_Furniture(Furniture** obj, int _size)
{
	for (int i = 0; i < _size;i++)
	{
		switch (i)
		{
		case 0:
			obj[i] = new wardrobe();
			break;
		case 1:
			obj[i] = new Cabinet();
			break;
		default:
			break;
		}
	}
}


