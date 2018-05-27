#pragma once

#include "point.h"

#define PI 3.14

class Circle{
	private:
		int r;
		int s;
	public:
		void setR(int r);
		int getR();
		int getS();
		bool isContainPoint(Point &point);
		
};
