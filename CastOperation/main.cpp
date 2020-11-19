#include <iostream>
/*
C++�� ����ȯ ������
	dynamic_cast<T>(expt)	  : ����Ŭ������ ������ �� ������ �����͸� ���� Ŭ������ ������ �� ������ �����ͷ� �� ��ȯ, �׿��� ���� ������ ������ �߻���Ŵ
	static_cast<T>(expt)	  : ����Ŭ���� <-> ����Ŭ������ ����ȯ �� �⺻�ڷ����� �پ��� ����ȯ�� ���������� ���α׷��Ӱ� å��������
	const_cast<T>(expt)		  : const ������ �����ϱ����� ����
	reinterpret_cast<T>(expt) : �����͸� ������� �ϴ�, �����Ϳ� ������ �ִ� ��� ������ �ڷ��������� �� ��ȯ�� ���� ����
*/

class baseClass {
private:
	int one;
public:
	baseClass(int value) : one(value)
	{}
	int getOne() { return one; }
	virtual void showData() = 0;
};

class subClass : public baseClass
{
	int two;
public:
	subClass(int a, int b) : baseClass(a), two(b) {}

	int getTwo() { return two; }
	void showData()
	{
		std::cout << baseClass::getOne() << std::endl;
		std::cout << two << std::endl;
	}
};

void showString(char* temp)
{
	std::cout << temp << std::endl;
}

int main(){

	const char* str = "Hello World";
	
	//showString(str); �� ��� ������ �߻���. �Ķ���ʹ� char* �̱� �����̴�.
	showString(const_cast<char*>(str)); // ����� ������ �Լ��� �־��ֱ� ���� �� ��ȯ���� �ַ� ���ȴ�.

	baseClass* pbase = new subClass(1, 2);

	subClass* psub = new subClass(1, 2);

	std::cout << dynamic_cast<baseClass*>(psub)->getOne() << std::endl;
	std::cout << dynamic_cast<subClass*>(pbase)->getTwo() << std::endl;  // ����Ŭ�������� ���� Ŭ������ ����ȯ�� ������ ������ ���������Լ��� �ϳ��� �ִٸ� dynamic_cast�� ����ȯ�� �����ϴ�.
	std::cout << static_cast<subClass*>(pbase)->getTwo() << std::endl;  // 

	//reinterpret_cast ��� ��

	int test = 0x00010203;
	int test2 = 0x010203;
	char* ptr = reinterpret_cast<char*>(&test); //int* -> char* 

	std::cout << static_cast<int>(*(ptr + 0)) << std::endl; // char -> int 
	std::cout << static_cast<int>(*(ptr + 1)) << std::endl; // char -> int 
	std::cout << static_cast<int>(*(ptr + 2)) << std::endl; // char -> int 
	std::cout << static_cast<int>(*(ptr + 3)) << std::endl; // char -> int 

}