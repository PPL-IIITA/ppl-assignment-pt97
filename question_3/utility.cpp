#include "utility.h"
#include <string>

void Utility::setvalue(int value)
{
	this->value=value;
}

void Utility::setutivalue(int utivalue)
{
	this->utivalue=utivalue;
}

void Utility::setuticlass(int uticlass)
{
	this->uticlass=uticlass;
}

void Utility::setprice(int price)
{
	this->price=price;
}
int Utility::getvalue() 
{ 
	return value; 
}
int Utility::getprice()
{
	return price;
}
int Utility::getutivalue()
{
	return utivalue;
}
int Utility::getuticlass()
{
	return uticlass;
}