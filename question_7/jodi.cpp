#include "jodi.h"
#include <string>
using namespace std;

void Jodi::setname1(std::string naam1)
{
	this->name1=naam1;
}
void Jodi::setname2(std::string naam2)
{
	this->name2=naam2;
}
void Jodi::setcompatibility(int compt)
{
	this->compatibility=compt;
}
void Jodi::sethappiness(int happi)
{
	this->happiness=happi;
}
std::string Jodi::getname1() 
{ 
	return this->name1; 
}
std::string Jodi::getname2() 
{ 
	return this->name2; 
}
int Jodi::getcompatibility()
{
	return this->compatibility;
}
int Jodi::gethappiness()
{
	return this->happiness;
}
