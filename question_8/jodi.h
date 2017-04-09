#ifndef JODI_H_
#define JODI_H_
#include <string>

class Jodi
{
private:
    std::string name1;
    std::string name2;
    int compatibility;
    int happiness;
 
public:
    std::string getname1(); 
    std::string getname2();
    int getcompatibility();
    int gethappiness();
    void setname1(std::string);
    void setname2(std::string);
    void setcompatibility(int );
    void sethappiness(int );
};
 
#endif
