#include "essential.h"
#include <string>

void Essential::setvalue(int value)
{
	this->value=value;
}

void Essential::setprice(int price)
{
	this->price=price;
}
int Essential::getvalue() 
{ 
	return value; 
}
int Essential::getprice()
{
	return price;
}
