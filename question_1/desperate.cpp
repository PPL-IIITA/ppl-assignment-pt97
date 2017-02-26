#include "desperate.h"
#include <string>

void Desperate::setname(std::string naam)
{
	this->name=naam;
}

void Desperate::setmaintenance(int maint)
{
	this->maintenance=maint;
}
void Desperate::setcommitted(bool com)
{
	this->committed=com;
}
void Desperate::setattraction(int attr)
{
	this->attraction=attr;
}
void Desperate::setpreference(int pre)
{
	this->preference=pre;
}
void Desperate::setintelligence(int intel)
{
	this->intelligence=intel;
}

std::string Desperate::getname()
{ 
	return this->name; 
}
int Desperate::getmaintenance() 
{ 
	return this->maintenance; 
}
bool Desperate::getcommitted()  
{ 
	return this->committed; 
}
int Desperate::getattraction()
{
	return this->attraction;
}
int Desperate::getintelligence()
{
	return this->intelligence;
}
int Desperate::getpreference()
{
	return this->intelligence;
}