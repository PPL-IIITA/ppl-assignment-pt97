#include "generous.h"
#include <string>

void Generous::setname(std::string naam)
{
	this->name=naam;
}

void Generous::setbudget(int bud)
{
	this->budget=bud;
}
void Generous::setcommitted(bool com)
{
	this->committed=com;
}
void Generous::setattraction(int attr)
{
	this->attraction=attr;
}
void Generous::setminattraction(int min)
{
	this->minattraction=min;
}
void Generous::setintelligence(int intel)
{
	this->intelligence=intel;
}


std::string Generous::getname()
{ 
	return this->name; 
}
int Generous::getbudget() 
{ 
	return this->budget; 
}
bool Generous::getcommitted()  
{ 
	return this->committed; 
}
int Generous::getattraction()
{
	return this->attraction;
}
int Generous::getminattraction()
{
	return this->minattraction;
}
int Generous::getintelligence()
{
	return this->intelligence;
}