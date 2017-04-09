#include "normal.h"
#include <string>

void Normal::setname(std::string naam)
{
	this->name=naam;
}

void Normal::setmaintenance(int maint)
{
	this->maintenance=maint;
}
void Normal::setcommitted(bool com)
{
	this->committed=com;
}
void Normal::setattraction(int attr)
{
	this->attraction=attr;
}
void Normal::setpreference(int pre)
{
	this->preference=pre;
}
void Normal::setintelligence(int intel)
{
	this->intelligence=intel;
}

std::string Normal::getname()
{ 
	return name; 
}
int Normal::getmaintenance() 
{ 
	return maintenance; 
}
bool Normal::getcommitted()  
{ 
	return committed; 
}
int Normal::getattraction()
{
	return attraction;
}
int Normal::getintelligence()
{
	return intelligence;
}
int Normal::getpreference()
{
	return preference;
}