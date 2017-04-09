#ifndef GEEKS_H_
#define GEEKS_H_
#include <string>

class Geeks
{
private:
    std::string name;
    int attraction;
    int intelligence;
    int budget;
    bool committed=false;
 	int minattraction; 
 
public:
    std::string getname(); 
    int getbudget();
    bool getcommitted(); 
    int getattraction();
    int getminattraction();
    int getintelligence();
    void setname(std::string);
    void setbudget(int );
    void setcommitted(bool );
    void setattraction(int );
    void setminattraction(int );
    void setintelligence(int );
};
 
#endif
