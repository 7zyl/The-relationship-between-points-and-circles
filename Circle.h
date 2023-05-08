#pragma once
#include<iostream>
using namespace std;
#include"Point.h";

//圆类
class Circle
{
public:
	void setR(int r);									//设置半径

	int getR();							//获取半径

	void setCenter(Point center);			//设置圆心

	Point getCenter();			//获取圆心

private:
	int m_r;
	Point m_center;									//核心，让另一个类作为本类的成员
};