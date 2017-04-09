#include "geeks.h"
#include <string>
void Geeks::setname(std::string naam)
{
	this->name=naam;
}

void Geeks::setbudget(int bud)
{
	this->budget=bud;
}
void Geeks::setcommitted(bool com)
{
	this->committed=com;
}
void Geeks::setattraction(int attr)
{
	this->attraction=attr;
}
void Geeks::setminattraction(int min)
{
	this->minattraction=min;
}
void Geeks::setintelligence(int intel)
{
	this->intelligence=intel;
}


std::string Geeks::getname()
{ 
	return this->name; 
}
int Geeks::getbudget() 
{ 
	return this->budget; 
}
bool Geeks::getcommitted()  
{ 
	return this->committed; 
}
int Geeks::getattraction()
{
	return this->attraction;
}
int Geeks::getminattraction()
{
	return this->minattraction;
}
int Geeks::getintelligence()
{
	return this->intelligence;
}