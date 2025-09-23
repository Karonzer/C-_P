#pragma once
class Language
{
private:
	const char* name;
public:
	Language() = default;
	~Language() = default;
public:
	void Initialize(const char* _name);
public:
	char Get_Name();
};

