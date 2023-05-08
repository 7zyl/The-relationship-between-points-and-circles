#pragma once
#include<iostream>
using namespace std;

//点类
class Point
{
public:
	void setX(int x);						//设置x坐标

	int getX();									//获取x坐标

	void SetY(int y);							//设置y坐标

	int getY();							//获取y坐标

private:
	int m_x;
	int m_y;
};
