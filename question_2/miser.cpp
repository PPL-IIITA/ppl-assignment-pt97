#include "miser.h"
#include <string>

void Miser::setname(std::string naam)
{
	this->name=naam;
}

void Miser::setbudget(int bud)
{
	this->budget=bud;
}
void Miser::setcommitted(bool com)
{
	this->committed=com;
}
void Miser::setattraction(int attr)
{
	this->attraction=attr;
}
void Miser::setminattraction(int min)
{
	this->minattraction=min;
}
void Miser::setintelligence(int intel)
{
	this->intelligence=intel;
}


std::string Miser::getname()
{ 
	return this->name; 
}
int Miser::getbudget() 
{ 
	return this->budget; 
}
bool Miser::getcommitted()  
{ 
	return this->committed; 
}
int Miser::getattraction()
{
	return this->attraction;
}
int Miser::getminattraction()
{
	return this->minattraction;
}
int Miser::getintelligence()
{
	return this->intelligence;
}