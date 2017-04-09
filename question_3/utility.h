#ifndef UTILITY_H_
#define UTILITY_H_
#include <string>

class Utility
{
private:
    int value;
    int price;
    int utivalue;
    int uticlass;
public:
    int getvalue();
    int getprice();
    int getutivalue();
    int getuticlass();
    void setuticlass(int );
    void setutivalue(int );
    void setprice(int );
    void setvalue(int );
};
 
#endif
