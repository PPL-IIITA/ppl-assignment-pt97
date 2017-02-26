#include "choosy.h"
#include <string>

void Choosy::setname(std::string naam)
{
	this->name=naam;
}

void Choosy::setmaintenance(int maint)
{
	this->maintenance=maint;
}
void Choosy::setcommitted(bool com)
{
	this->committed=com;
}
void Choosy::setattraction(int attr)
{
	this->attraction=attr;
}
void Choosy::setpreference(int pre)
{
	this->preference=pre;
}
void Choosy::setintelligence(int intel)
{
	this->intelligence=intel;
}

std::string Choosy::getname()
{ 
	return this->name; 
}
int Choosy::getmaintenance() 
{ 
	return this->maintenance; 
}
bool Choosy::getcommitted()  
{ 
	return this->committed; 
}
int Choosy::getattraction()
{
	return this->attraction;
}
int Choosy::getintelligence()
{
	return this->intelligence;
}
int Choosy::getpreference()
{
	return this->preference;
}