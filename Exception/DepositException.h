#pragma once
#include "AccountHandling.h"
class DepositException :
	public AccountHandling
{
private:
	int money;
public:
	DepositException(int Deposit) : money(Deposit) {}
	void ShowExceptionMassage()
	{	
		std::cout << "�Ա� �ݾ� : " << money << std::endl;
		std::cout << "Error �߻�" << std::endl;
		std::cout << "0���� ���� �ݾ��� �Ա� �� �� �����ϴ�." << std::endl;
	}
};

