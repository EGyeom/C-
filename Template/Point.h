#pragma once
#include <iostream>


//���ø� Ŭ����
template<class T>
class Point {
private:
	T Xpos;
	T Ypos;
public:
	Point(T x, T y) : Xpos(x), Ypos(y)
	{}
	void showData()
	{
		std::cout << "X pos : " << Xpos << "\n"
			<< "Y pos : " << Ypos << "\n";
	}
};

/* 1. ���ø� Ŭ���� Ư��ȭ
 -> ���ø� �Լ�, Ŭ������ ������ �ڷ������� �ϳ��� �Լ� �� Ŭ������ �����ȴ�.
 �̶� class Point<int>������ Ư��ȭ ��Ű�� ���� ���������ʰ� int �ڷ����϶� ���� Ŭ������ �����ȴ�.
 */
template<>
class Point<int>
{
private:
	int Xpos;
	int Ypos;
public:
	Point(int x, int y) : Xpos(x), Ypos(y)
	{}
	void showData()
	{
		std::cout << "X pos : " << Xpos << "\n"
			<< "Y pos : " << Ypos << "\n";
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

