#include "stdafx.h"
#include "Material.h"
#include "Resource.h"
int main()
{
#pragma region 스마트 포인터
	
	// 포인터를 사용하는 동시에 자동으로 메모리 관리를
	// 해주며, 경계 확인과 같은 추가 기능을 제공하는 포인터입니다.

	//int* ptr2 = nullptr;

	//{
	//	int* ptr1 = new int;
	//	*ptr1 = 100;
	//	ptr2 = ptr1;
	//}

	//cout << *ptr2 << endl;

#pragma endregion

#pragma region unique pointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수 있도록 되어 있는 포인터

	//unique_ptr<Material> mat = make_unique<Material>("A");

	//unique_ptr<Material> mat2 = move(mat);


#pragma endregion

#pragma region shared pointer
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며
	// 모든 포인터 객체가 자원 객체를 필요로 하지 않을 때 자원 객체를
	// 헤제하도록 설계되어 있는 포인터입니다.

	//shared_ptr<Material> mat1 = make_shared<Material>("A");

	//cout << "참조 카운트 : " << mat1.use_count() << endl;

	//shared_ptr<Material> mat2 = mat1;

	//cout << "참조 카운트 : " << mat1.use_count() << endl;


	//순한 참조
	shared_ptr<Resource> mat1 = make_shared<Resource>();

	cout << "참조 카운트 : " << mat1.use_count() << endl;

	shared_ptr<Resource> mat2 = mat1;

	cout << "참조 카운트 : " << mat1.use_count() << endl;

	mat1->Share(mat2);
	mat2->Share(mat1);

	cout << "참조 카운트 : " << mat1.use_count() << endl;
	cout << "참조 카운트 : " << mat2.use_count() << endl;


#pragma endregion
	return 0;
}

