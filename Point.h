#pragma once
#include<iostream>
using namespace std;

//����
class Point
{
public:
	void setX(int x);						//����x����

	int getX();									//��ȡx����

	void SetY(int y);							//����y����

	int getY();							//��ȡy����

private:
	int m_x;
	int m_y;
};
