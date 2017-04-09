#ifndef CHOOSY_H_
#define CHOOSY_H_
#include <string>

class Choosy
{
private:
    std::string name;
    int attraction;
    int intelligence;
    int maintenance;
    bool committed=false;
    int preference;
 
public:
    std::string getname(); 
    int getmaintenance();
    bool getcommitted(); 
    int getattraction();
    int getintelligence();
    int getpreference();
    void setname(std::string);
    void setmaintenance(int );
    void setcommitted(bool );
    void setattraction(int );
    void setpreference(int );
    void setintelligence(int );
};
 
#endif
