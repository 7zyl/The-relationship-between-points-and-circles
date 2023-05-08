#include"Circle.h"

//圆类
void Circle::setR(int r)										//设置半径
{
	m_r = r;
}
int Circle::getR()												//获取半径
{
	return m_r;
}
void Circle::setCenter(Point center)				//设置圆心
{
	m_center = center;
}
Point Circle::getCenter()									//获取圆心
{
	return m_center;
}
