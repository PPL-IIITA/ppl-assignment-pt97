#include "couple2.h"
#include <iostream>
#include <string>
#include "miser.h"
#include "normal.h"
#include "jodi.h"
using namespace std;

void make2()
{
    Miser boy_attr[50],var1;
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
    Normal girl_attr[30],var2;
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
    for(i=1;i<=50;i++)
    {
        for(j=i;j<=50;j++)
        {
            if(boy_attr[i-1].getattraction()>boy_attr[j-1].getattraction())
            {
                var1=boy_attr[i-1];
                boy_attr[i-1]=boy_attr[j-1];
                boy_attr[j-1]=var1;
            }
        }
    }
    for(i=1;i<=30;i++)
    {
        for(j=i;j<=30;j++)
        {
            if(girl_attr[i-1].getmaintenance()>girl_attr[j-1].getmaintenance())
            {
                var2=girl_attr[i-1];
                girl_attr[i-1]=girl_attr[j-1];
                girl_attr[j-1]=var2;
            }
        }
    }
    myfile1.open ("ans1.txt");
    myfile2.open("temp1.txt");
    Jodi jod[30],tempjodi;
    int count=0;
    for(i=1;i<=60;i++)
    {
        if(i%2==0)
        {
            int x=i/2,currentattr=INT_MIN,y=-1;
            for(j=1;j<=30;j++)
            {
                if(girl_attr[j-1].getmaintenance()<boy_attr[x-1].getbudget()&&girl_attr[j-1].getattraction()>currentattr&&boy_attr[x-1].getcommitted()==false&&girl_attr[j-1].getcommitted()==false)
                    y=j-1;
            }
            if(y!=-1)
            {
                boy_attr[x-1].setcommitted(true);
                girl_attr[y].setcommitted(true);
                cout<<boy_attr[x-1].getname()<<" "<<girl_attr[y].getname()<<endl;
                myfile1<<boy_attr[x-1].getname()<<" "<<girl_attr[y].getname()<<endl;
                myfile2<<boy_attr[x-1].getname()<<" "<<girl_attr[y].getname()<<" "<<boy_attr[x-1].getattraction()+boy_attr[x-1].getbudget()+girl_attr[y].getmaintenance()<<endl;
            }
        }
        else
        {
            int x=(i+1)/2,currentbud=INT_MIN,y;
            for(j=1;j<=60;j++)
            {
                if(girl_attr[x-1].getmaintenance()<boy_attr[j-1].getbudget()&&boy_attr[x-1].getcommitted()==false&&girl_attr[j-1].getcommitted()==false)
                    {
                        y=j-1;
                        break;
                    }
            }
            boy_attr[y].setcommitted(true);
            girl_attr[x-1].setcommitted(true);
            cout<<boy_attr[y].getname()<<" "<<girl_attr[x-1].getname()<<endl;
            myfile1<<boy_attr[y].getname()<<" "<<girl_attr[x-1].getname()<<endl;
            myfile2<<boy_attr[y].getname()<<" "<<girl_attr[x-1].getname()<<" "<<boy_attr[y].getattraction()+boy_attr[y].getbudget()+girl_attr[x-1].getmaintenance()<<endl;
        }
    }
    myfile1.close();
    myfile2.close();
    string tempstr1,tempstr2;
    int temphapp;
    fstream myfile3;
    myfile3.open("temp1.txt");
    for(i=1;i<=30;i++)
    {
        myfile3>>tempstr1>>tempstr2>>temphapp;
        jod[i-1].setname1(tempstr1);
        jod[i-1].setname2(tempstr2);
        jod[j-1].sethappiness(temphapp);
    }
    for(i=1;i<=30;i++)
    {
        for(j=i;j<=30;j++)
        {
            if(jod[i-1].gethappiness()<jod[j-1].gethappiness())
            {
                tempjodi=jod[i-1];
                jod[i-1]=jod[j-1];
                jod[j-1]=tempjodi;
            }
        }
    }
    cout<<endl<<"According to the happiness k couples are :---"<<endl;
    for(i=1;i<=5;i++)
    {
        cout<<jod[i-1].getname1()<<" "<<jod[i-1].getname2()<<endl;
    }
}