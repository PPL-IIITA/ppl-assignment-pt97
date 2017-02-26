#include "couple.h"
#include <iostream>
#include <string>
#include "miser.h"
#include "normal.h"

using namespace std;

void make1()
{
    Miser boy_attr[50];
    string name;
    int i,j,attr,intel,bud,min,pre,maint;
    fstream myfile;
    myfile.open ("boy.txt");
    for(i=1;i<=50;i++)
    {
        myfile>>name>>attr>>intel>>bud>>min;
        boy_attr[i-1].setname(name);
        boy_attr[i-1].setbudget(bud);
        boy_attr[i-1].setcommitted(false);
        boy_attr[i-1].setattraction(attr);
        boy_attr[i-1].setminattraction(min);
        boy_attr[i-1].setintelligence(intel);
    }
    myfile.close();
    myfile.open("girl.txt");
    Normal girl_attr[30];
    for(i=1;i<=30;i++)
    {
        myfile>>name>>attr>>intel>>maint>>pre;
        girl_attr[i-1].setname(name);
        girl_attr[i-1].setmaintenance(maint);
        girl_attr[i-1].setcommitted(false);
        girl_attr[i-1].setattraction(attr);
        girl_attr[i-1].setpreference(pre);
        girl_attr[i-1].setintelligence(intel);
    }
    myfile.close();
    ofstream myfile1,myfile2;
    myfile1.open ("ans1.txt");
    myfile2.open("temp1.txt");
    for(i=1;i<=30;i++)
    {
        if(girl_attr[i-1].getpreference()==1&&girl_attr[i-1].getcommitted()==false)
        {
            int attract=0,temp=-1;
            for(j=1;j<=50;j++)
            {
                if(boy_attr[j-1].getcommitted()==false)
                {
                    if(boy_attr[j-1].getminattraction()<=girl_attr[i-1].getattraction())
                    {
                        if(boy_attr[j-1].getbudget()>=girl_attr[i-1].getmaintenance())
                        {
                            if(boy_attr[j-1].getattraction()>attract)
                            {
                                attract=boy_attr[j-1].getattraction();
                                temp=j-1;
                            }
                        }
                    }
                }
            }
            if(temp!=-1)
            {
                boy_attr[temp].setcommitted(true);
                girl_attr[i-1].setcommitted(true);
                cout<<boy_attr[temp].getname()<<" "<<girl_attr[i-1].getname()<<endl;
                myfile1<<boy_attr[temp].getname()<<" "<<girl_attr[i-1].getname()<<endl;
                myfile2<<boy_attr[temp].getname()<<" "<<rand()%3+1<<" "<<boy_attr[temp].getattraction()<<" ";
                myfile2<<boy_attr[temp].getintelligence()<<" "<<boy_attr[temp].getbudget()<<" ";
                myfile2<<girl_attr[i-1].getname()<<" "<<rand()%3+1<<" "<<girl_attr[i-1].getattraction()<<" ";
                myfile2<<girl_attr[i-1].getintelligence()<<" "<<girl_attr[i-1].getmaintenance()<<endl;
            }
        }
        if(girl_attr[i-1].getpreference()==2&&girl_attr[i-1].getcommitted()==false)
        {
            int rich=0,temp=-1;
            for(j=1;j<=50;j++)
            {
                if(boy_attr[j-1].getcommitted()==false)
                {
                    if(boy_attr[j-1].getminattraction()<=girl_attr[i-1].getattraction())
                    {
                        if(boy_attr[j-1].getbudget()>=girl_attr[i-1].getmaintenance())
                        {
                            if(boy_attr[j-1].getbudget()>rich)
                            {
                                rich=boy_attr[j-1].getbudget();
                                temp=j-1;
                            }
                        }
                    }
                }
            }
            if(temp!=-1)
            {
                boy_attr[temp].setcommitted(true);
                girl_attr[i-1].setcommitted(true);
                cout<<boy_attr[temp].getname()<<" "<<girl_attr[i-1].getname()<<endl;
                myfile1<<boy_attr[temp].getname()<<" "<<girl_attr[i-1].getname()<<endl;
                myfile2<<boy_attr[temp].getname()<<" "<<rand()%3+1<<" "<<boy_attr[temp].getattraction()<<" ";
                myfile2<<boy_attr[temp].getintelligence()<<" "<<boy_attr[temp].getbudget()<<" ";
                myfile2<<girl_attr[i-1].getname()<<" "<<rand()%3+1<<" "<<girl_attr[i-1].getattraction()<<" ";
                myfile2<<girl_attr[i-1].getintelligence()<<" "<<girl_attr[i-1].getmaintenance()<<endl;
            }
        }
        if(girl_attr[i-1].getpreference()==3&&girl_attr[i-1].getcommitted()==false)
        {
            int inteli=0,temp=-1;
            for(j=1;j<=50;j++)
            {
                if(boy_attr[j-1].getcommitted()==false)
                {
                    if(boy_attr[j-1].getminattraction()<=girl_attr[i-1].getattraction())
                    {
                        if(boy_attr[j-1].getbudget()>=girl_attr[i-1].getmaintenance())
                        {
                            if(boy_attr[j-1].getintelligence()>inteli)
                            {
                                inteli=boy_attr[j-1].getintelligence();
                                temp=j-1;
                            }
                        }
                    }
                }
            }
            if(temp!=-1)
            {
                boy_attr[temp].setcommitted(true);
                girl_attr[i-1].setcommitted(true);
                cout<<boy_attr[temp].getname()<<" "<<girl_attr[i-1].getname()<<endl;
                myfile1<<boy_attr[temp].getname()<<" "<<girl_attr[i-1].getname()<<endl;
                myfile2<<boy_attr[temp].getname()<<" "<<rand()%3+1<<" "<<boy_attr[temp].getattraction()<<" ";
                myfile2<<boy_attr[temp].getintelligence()<<" "<<boy_attr[temp].getbudget()<<" ";
                myfile2<<girl_attr[i-1].getname()<<" "<<rand()%3+1<<" "<<girl_attr[i-1].getattraction()<<" ";
                myfile2<<girl_attr[i-1].getintelligence()<<" "<<girl_attr[i-1].getmaintenance()<<endl;
            }
        }
    }
    myfile1.close();
    myfile2.close();
}