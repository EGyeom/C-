#pragma once
#include <iostream>

class Point
{
private:
	int posX;
	int posY;
public:
	Point(int x=0, int y=0) : posX(x), posY(y)
	{}
	void ShowPos() const
	{
		std::cout << "X pos : " << posX << "\t" << "Y pos : " << posY << "\n";
	}
	
};
//�ζ��ΰ� ���ø�
/*
��κ��� ���� ȯ�濡�� �ζ����� ������ ���߿� ������
�Լ��� ������ ��ü�Ϸ��� �����Ϸ��� �Լ��� ���¸� �˰� �־����.

���ø��� ���Ǵ� �κп��� �ش� ���ø��� �ν��Ͻ��� ������� �����Ϸ��� �˰� �־�� ��.
�׷��Ƿ� ��κ� ��� ���Ͽ� �����ϰԵ�.

*/
template<class T>
void SwapData(T* Data1, T* Data2)
{
	T temp = *Data1;
	*Data1 = *Data2;
	*Data2 = temp;
}
