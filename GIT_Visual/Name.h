#pragma once


class Name
{
public:
	Name();
	Name(char* pfirst, char* psecond);

	char* GetName(char* pname)const;
	size_t GetNameLength()const;

	bool operator >(const Name& n)const;
	bool operator ==(const Name& n)const;
	bool operator <(const Name& n) const;

private:
	char* pFirstname;
	char* pSurname;
};
