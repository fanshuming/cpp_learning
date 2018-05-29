#pragma once

#include <stdio.h>
#include "abstractproduct.h"

class AbstractFactory{
	public:
		AbstractFactory();
		virtual ~AbstractFactory();
	public:
		virtual AbstractProduct * CreatProduct(int type) = 0;
};

class SimpleFactory : public AbstractFactory{
	public:
		SimpleFactory();
		~SimpleFactory();
	public:
		AbstractProduct * CreatProduct(int type);
};
