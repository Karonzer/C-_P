#include "stdafx.h"
#include <unordered_set>

int main()
{
#pragma region 연관 컨테이너
	//특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.

#pragma region unordered_set

	unordered_set<const char*> set;

	set.reserve(16);
	set.max_load_factor(2.0);

	set.insert("검");
	set.insert("방패");
	set.insert("신발");
	set.insert("지팡이");
	set.insert("갑옷");
	set.insert("모자");
	set.insert("망토");
	set.insert("구슬");
	set.insert("포션");

	cout << "set.set.load_factor() : " << set.load_factor() << endl;
	cout << "set.bucket_count() : " << set.bucket_count() << endl;





#pragma endregion
#pragma endregion
	return 0;
}