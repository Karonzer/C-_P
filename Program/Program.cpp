#include "stdafx.h"
#include <unordered_set>
#include <unordered_map>
#include <set>
int main()
{
#pragma region 연관 컨테이너
	//특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.

#pragma region unordered_set

	//unordered_set<const char*> set;

	//set.reserve(16);
	//set.max_load_factor(2.0);

	//set.insert("검");
	//set.insert("방패");
	//set.insert("신발");
	//set.insert("지팡이");
	//set.insert("갑옷");
	//set.insert("모자");
	//set.insert("망토");
	//set.insert("구슬");
	//set.insert("포션");

	//cout << "set.set.load_factor() : " << set.load_factor() << endl;
	//cout << "set.bucket_count() : " << set.bucket_count() << endl;

	//if (set.find("검") != set.end())
	//{
	//	cout << "검을 찾았습니다." << endl;
	//}
	//else
	//{
	//	cout << "검을 찾지 못했습니다." << endl;
	//}


	//set.erase("검");

	//for (const char* ptr : set)
	//{
	//	cout << ptr << endl;
	//}



#pragma endregion


#pragma region unordered_mep
	//unordered_map<string, int> map;

	//map.reserve(16);
	//map.max_load_factor(2.0f);

	//map.insert({ "검", 10 });
	//map.insert(make_pair("방패", 1));
	//map.insert({ "망토", 5 });
	//map.insert(make_pair("신발", 7));
	//map.insert({ "지팡이", 12 });
	//map.insert(make_pair("망토", 0));
	//map.insert({ "구슬", 99 });
	//map.insert(make_pair("포션", 2));

	//for (auto ptr : map)
	//{
	//	cout << ptr.first << " : " << ptr.second << endl;
	//}

	//if (map.find("검") != map.end())
	//{
	//	cout << "검을 찾았습니다." << endl;
	//}
	//else
	//{
	//	cout << "검을 찾지 못했습니다." << endl;
	//}

	//map["포션"] = 20;
	//map.erase("검");

	//for (auto ptr = map.begin();ptr != map.end(); ptr++)
	//{
	//	cout << ptr->first << " : " << ptr->second << endl;
	//}

	//unordered_map<string, int> inventory;
	//inventory.insert({ "검", 1 });
	//inventory.insert({ "방패", 5 });
	//inventory.insert({ "망토", 5 });
	//inventory.insert({ "신발", 7 });
	//inventory.insert({ "지팡이", 12 });
	//inventory.insert({ "구슬", 99 });
	//inventory.insert({ "포션", 2 });
	//inventory.insert({ "대검", 10 });
	//inventory.insert({ "모자", 7 });
	//inventory.insert({ "가방", 5 });
	//inventory.insert({ "갑옷", 7 });
	//inventory.insert({ "약", 12 });
	//inventory.insert({ "나무", 99 });
	//inventory.insert({ "씨앗", 2 });

	//while (!inventory.empty())
	//{
	//	string itemName;
	//	cout << "찾는 인벤토리 아이템 이름 : ";
	//	cin >> itemName;

	//	if (inventory.find(itemName) != inventory.end())
	//	{
	//		cout << "찾는 인벤토리 아이템 사용 : " << itemName << " : 개수 : " << inventory[itemName] << endl;
	//		if (inventory[itemName] > 0)
	//		{
	//			inventory[itemName]--;
	//			cout << "아이템 사용 후 개수 : " << inventory[itemName] << endl;
	//			if(inventory[itemName] == 0)
	//			{
	//				inventory.erase(itemName);
	//				cout << itemName << " 아이템이 모두 소진되어 인벤토리에서 삭제되었습니다." << endl;
	//			}
	//		}

	//	}
	//	else
	//	{
	//		cout << "찾는 인벤토리 아이템이 없습니다." << endl;
	//	}

	//}




#pragma endregion

#pragma region set
#pragma endregion
#pragma endregion
	return 0;
}