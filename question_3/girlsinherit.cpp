#include <bits/stdc++.h>
 
using namespace std;

class Girls  {
   public:
      void setname(string n) {
         name=n;
      }
      
      void setmaintenance(int h) {
         maintenance=h;
      }
      
   protected:
      string name;
      int maintenance;
};

class Choosy: public Girls {
   public:
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
   protected:
      std::string name;
      int attraction;
      int intelligence;
      int maintenance;
      bool committed=false;
      int preference;
};

class normal: public Girls {
   public:
      void normal::setname(std::string naam)
      {
         this->name=naam;
      }

      void normal::setmaintenance(int maint)
      {
         this->maintenance=maint;
      }
      void normal::setcommitted(bool com)
      {
         this->committed=com;
      }
      void normal::setattraction(int attr)
      {
         this->attraction=attr;
      }
      void normal::setpreference(int pre)
      {
         this->preference=pre;
      }
      void normal::setintelligence(int intel)
      {
         this->intelligence=intel;
      }

      std::string normal::getname()
      { 
         return this->name; 
      }
      int normal::getmaintenance() 
      { 
         return this->maintenance; 
      }
      bool normal::getcommitted()  
      { 
         return this->committed; 
      }
      int normal::getattraction()
      {
         return this->attraction;
      }
      int normal::getintelligence()
      {
         return this->intelligence;
      }
      int normal::getpreference()
      {
         return this->preference;
      }
   protected:
      std::string name;
      int attraction;
      int intelligence;
      int maintenance;
      bool committed=false;
      int preference;
};

class desperate: public Girls {
   public:
      void desperate::setname(std::string naam)
      {
         this->name=naam;
      }

      void desperate::setmaintenance(int maint)
      {
         this->maintenance=maint;
      }
      void desperate::setcommitted(bool com)
      {
         this->committed=com;
      }
      void desperate::setattraction(int attr)
      {
         this->attraction=attr;
      }
      void desperate::setpreference(int pre)
      {
         this->preference=pre;
      }
      void desperate::setintelligence(int intel)
      {
         this->intelligence=intel;
      }

      std::string desperate::getname()
      { 
         return this->name; 
      }
      int desperate::getmaintenance() 
      { 
         return this->maintenance; 
      }
      bool desperate::getcommitted()  
      { 
         return this->committed; 
      }
      int desperate::getattraction()
      {
         return this->attraction;
      }
      int desperate::getintelligence()
      {
         return this->intelligence;
      }
      int desperate::getpreference()
      {
         return this->preference;
      }
   protected:
      std::string name;
      int attraction;
      int intelligence;
      int maintenance;
      bool committed=false;
      int preference;
};
