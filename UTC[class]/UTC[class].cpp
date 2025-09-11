#include <iostream>
using namespace std;

namespace KR
{
	float area = 3.14f;

	void Size()
	{
		cout << "KR area : " << area << "km" << endl;
	}
}

using namespace KR;

namespace JP
{
	float area = 551.1f;

	void Size()
	{
		cout << "JP area : " << area << "km" << endl;
	}
}

class Obj
{
#pragma region 접근 지정자
	// 클래스의 멤버에 대한 접근 권한을 제한 하는 지정자입니다.
	// public : 클래스 배누와 자기가 상속하고 있는 클래스 그리고 클래스 외부에서도 접근을 허용하는 지정자입니다.

	// protected : 클래스 내부와 자기가 상속하고 있는 클래스에서만 접근을 허용하는 지정자입니다.

	// private : 클래스 내부에서만 접근을 허용하는 지정자입니다. (기본값)
private:
	int x = 1;
	int y = 2;
	int z = 3;
protected:
	const char* name;
public:

	void Position()
	{
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
		cout << "z : " << z << endl;
	}
#pragma endregion
};


void Profile(const char* name = "test", int age = 20)
{
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;
}

int main()
{
#pragma region 이름 공간
	//속성을 구분할 수 있도록 유효 범위를
	//설정하는 영역입니다.

	//Size();

	//JP::Size();

#pragma endregion

#pragma region 클래스
	//사용자 정의 데이터 유형으로 속성과 함수가 포함되어
	//있으면 클래스를 통해 객체를 생성하여 접근하고 사용
	//하는 집합체입나다.
	// 
	//Obj obj;
	//obj.Position();

	//클래스의 경우 클래스 내부에 있는 변수는 클래스의
	//메모리 영역에 포함되지만. 정적 변수와 함수의 메모리는
	//클래스 영역에 포함되지 않습니다.


	//cout << "Obj의 크기 : " << sizeof(Obj) << endl;

#pragma endregion

#pragma region 기본 매개 변수
	//함수의 매개 변수에 값이 전달되지 않을 때/
	// 미리 값을 설정해놓는 매개 변수입니다.

	//기본 매개 변수를 지정하려면 오른쪽에서 부터
	// 값을 지정해주여야 합니다.

	//Profile();

	//Profile("KEG",18);
#pragma endregion
	return 0;
}

