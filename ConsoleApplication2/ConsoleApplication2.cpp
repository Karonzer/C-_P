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

	Card(const Card& _card)
	{
		grade = _card.grade;
		name = _card.name;
		cout << "Card 복사 생성자 : " << grade << " name : " << name << endl;
	}

	~Card()
	{
		cout << "Card 소멸자 : " << grade << " : " << name << endl;
	}
public:
	void Initialize(char _grade, const char* _name)
	{
		//this : 멤버 함수 내부에서 객체 자기 자신을 가리키는 포인터
		this->grade = _grade;
		this->name = _name;
	}
};


class Packet
{
private:
	int* bit;
public:
	Packet(int value)
	{
		if (bit == nullptr)
		{
			bit = new int;
		}
		*bit = value;
		cout << "Packet 생성자 : " << bit << " : " << *bit << endl;
	}
	Packet(const Packet& _packet)
	{
		if (bit == nullptr)
		{
			bit = new int;
		}
		*bit = *_packet.bit;
		cout << "Packet 복사생성자 : " << bit << " : " << *bit << endl;
	}
	~Packet()
	{
		cout << "Packet 소멸자 : " << bit << " : " << *bit << endl;
		if (bit != nullptr)
		{
			delete bit;
		}
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


	//Card card1;
	//card1.Initialize('A', "Diamond");

	//Card clone = card1;



#pragma endregion

#pragma region 얕은 복사
	// 객체를 복사할 때 주소 값을 복사하여 같은 메모리를 공간을 가리키게 하는 복사입니다.
	// 얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을 참조하고 있기 때문에 하나의 객체로 값을 변경하게 되면
	// 서로 참조된 객체도 함께 영향을 받습니다.



	//int* pointer = new int;

	//int* pointer2 = pointer;

	//*pointer = 10;

	//cout << "pointer : " << pointer << " : " << *pointer << endl;
	//cout << "pointer2 : " << pointer2 << " : " << *pointer2 << endl;

	//delete pointer;



#pragma endregion

#pragma region 깊은 복사
	// 객체를 복사할 때 실제 값을 복사하여 서로 다른 메모리 공간을 가지게 하는 복사입니다.

	//Packet packet1 = new Packet(10);
	//Packet packet2 = new Packet(*packet1);

	//delete packet1;
	//delete packet2;

	Packet packet1(10);
	Packet packet2(packet1);

#pragma endregion
	return 0;
}