#include "luxury.h"
#include <string>

void Luxury::setvalue(int value)
{
	this->value=value;
}

void Luxury::setrating(int rating)
{
	this->rating=rating;
}

void Luxury::setdifficulty(int value)
{
	this->difficulty=difficulty;
}

void Luxury::setprice(int price)
{
	this->price=price;
}
int Luxury::getvalue() 
{ 
	return value; 
}
int Luxury::getprice()
{
	return price;
}
int Luxury::getrating()
{
	return rating;
}
int Luxury::getdifficulty()
{
	return difficulty;
}