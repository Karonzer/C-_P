#include <iostream>
using namespace std;
static


class Unit
{
private:
	static int count;
	string name;
public:
	Unit(string _name)
	{
		name = _name;
		cout << "Unit 생성자 : " << name << endl;
	}
	~Unit()
	{
		count++;
		cout << "Unit 소멸자 :" << name << endl;
		cout << "Unit count :" << count << endl;
	}
};
int Unit::count = 0;

class Card
{
private:
	char grade;
	const char* name;
public:
	Card()
	{
		grade = 'z';
		name = "none";
		cout << "Card 생성자 : " << grade << endl;
	}

	Card(Card &_card)
	{
		grade = _card.grade;
		name = _card.name;
		cout << "Card 복사 생성자 : " << grade << endl;
	}

	~Card()
	{
		cout << "Card 소멸자 : " << grade << " : " << name << endl;
	}
public:
	void Initialize(char _grade, const char * _name)
	{
		//this : 멤버 함수 내부에서 객체 자기 자신을 가리키는 포인터
		this->grade = _grade;
		this->name = _name;
	}
};



int main()
{

#pragma region 소멸자
	// 객제가 소멸될 때 자동으로 실행되는 클래스의
	// 멤버 함수입니다.	


	// 소멸자는 객체가 메모리에서 해제될 때 단 한번만
	//호출 되면 소멸자에는 매개 변수를 생성하여 사용할 수 없습니다.



	//Unit* pointer1 = new Unit("test1");

	//delete pointer1;

	//Unit* pointer2 = new Unit("test2");

	//delete pointer2;

	//Unit* pointer3 = new Unit("test3");

	//delete pointer3;

#pragma endregion

#pragma region 복사 생성자

	//같은 객체를 복사하여 생성시킬 때 호출 되는 생성자


	Card card1;
	card1.Initialize('a', "test_1");

	Card clone = card1;

#pragma endregion
	return 0;
}