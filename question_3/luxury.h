#ifndef LUXURY_H_
#define LUXURY_H_
#include <string>

class Luxury
{
private:
    int value;
    int price;
    int rating;
    int difficulty;
public:
    int getvalue();
    int getprice();
    int getrating();
    int getdifficulty();
    void setrating(int );
    void setdifficulty(int );
    void setprice(int );
    void setvalue(int );
};
 
#endif
