#include "Account.h"
/*
 ����ó�� Exception Handling
 ����ó���� ���� c++�� ���
 try
 {
	//���ܹ߻���
	throw value;
 }
 catch(var name)
 {
	//����ó��
 }
 �� ������� ����ó���� ������

 ���� Ŭ������ ���� ó���� ������.

 ���� �����⵵ ������ => try-catch�� �ι� ���Ǿ����

 new �����ڿ� ���� ���ܴ� bad_alloc �̶�� Ŭ������ ���� �������ִ�.
 
*/
int main()
{
	Account account(10000);

	try//���� �˻��� �κ�
	{
		account.Deposit(1000); // ���� �۵�
		account.Deposit(-200); // ���� �߻�
	}
	catch(AccountHandling& temp) // ���� ó���κ�
	{
		temp.ShowExceptionMassage();
	}

}