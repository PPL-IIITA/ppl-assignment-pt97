#include "livelong.h"
#include <iostream>
#include <string>
#include "miser.h"
#include "normal.h"
#include "choosy.h"
#include "desperate.h"
#include "generous.h"
#include "geeks.h"
#include "essential.h"
#include "luxury.h"
#include "utility.h"
#include "jodi.h"
#include "newalgo.h"


using namespace std;

void make1()
{
	Miser mis[30];
	Normal nor[30];
	Jodi jod[30];
	string name;
    int i,j,attr,intel,bud,pre,maint;
    fstream myfile;
    myfile.open ("temp1.txt");
    for(i=1;i<=30;i++)
    {
    	myfile>>name>>pre>>attr>>intel>>bud;
    	mis[i-1].setname(name);
	    mis[i-1].setbudget(bud);
	    mis[i-1].setcommitted(true);
	    mis[i-1].setattraction(attr);
	    mis[i-1].setintelligence(intel);
	    mis[i-1].setminattraction(pre);
    	myfile>>name>>pre>>attr>>intel>>maint;
    	nor[i-1].setname(name);
	    nor[i-1].setmaintenance(maint);
	    nor[i-1].setcommitted(true);
	    nor[i-1].setattraction(attr);
	    nor[i-1].setintelligence(intel);
	   	nor[i-1].setpreference(pre);
    }
    myfile.close();
    Utility uti[100];
    myfile.open ("gift.txt");
    int value,price;
    for(i=1;i<=100;i++)
    {
    	myfile>>pre>>price>>value;
    	uti[i-1].setvalue(value);
    	uti[i-1].setprice(price);
    	uti[i-1].setutivalue(pre);
    }
    myfile.close();
    for(i=1;i<=100;i++)
    {
    	for(j=i;j<=100;j++)
    	{
    		if(uti[i-1].getprice()>uti[j-1].getprice())
    		{
    			value=uti[i-1].getvalue();
    			price=uti[i-1].getprice();
    			pre=uti[i-1].getutivalue();
    			uti[i-1].setvalue(uti[j-1].getvalue());
    			uti[i-1].setprice(uti[j-1].getprice());
    			uti[i-1].setutivalue(uti[j-1].getutivalue());
    		  	uti[j-1].setvalue(value);
    			uti[j-1].setprice(price);
    			uti[j-1].setutivalue(pre);
    		}
    	}
    }
 	ofstream myfile1;
//this the new algo in which we first give all type of gifts once
  	myfile1.open ("ans.txt");
    int set1[100],set2[100],set3[100];
    for(i=0;i<100;i++)
        set1[i]=0,set2[i]=0,set3[i]=0;
    for(i=1;i<=30;i++)
    {
    	jod[i-1].setname1(mis[i-1].getname());
    	jod[i-1].setname2(nor[i-1].getname());
    	cout<<mis[i-1].getname()<<" "<<nor[i-1].getname()<<" "<<"get gifts"<<endl;
    	myfile1<<mis[i-1].getname()<<" "<<nor[i-1].getname()<<" "<<"get gifts"<<endl;

        int flag1=0,flag2=0,flag3=0;
        int lux=0,total=0,budget=mis[i-1].getbudget();
        for(j=1;j<=100;j++)
        {
            if(uti[j-1].getutivalue()==1&&flag1==0&&set1[j-1]==0)
            {
                cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
                myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
                lux+=uti[j-1].getprice();
                value+=uti[j-1].getvalue();
                flag1=1;
                set1[j-1]=1;
            }
            if(uti[j-1].getutivalue()==2&&flag2==0&&set2[j-1]==0)
            {
                cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;                    
                myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;                 
                lux+=uti[j-1].getprice();
                value+=uti[j-1].getvalue();
                flag2=1;
                set2[j-1]=1;
            }
            if(uti[j-1].getutivalue()==3&&flag3==0&&set3[j-1]==0)
            {
                cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;                    
                myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;                 
                lux+=uti[j-1].getprice();
                value+=uti[j-1].getvalue();
                flag3=1;
                set3[j-1]=1;
            }
        }
    	if(mis[i-1].getminattraction()==1)
    	{
    		maint=nor[i-1].getmaintenance();
    		value=0;
    		for(j=1;j<=100;j++)
    		{
                if(set1[j-1]==0)
                {
        			if(total+lux>maint)
        				break;
        			if(uti[j-1].getutivalue()==2)
        			{
        				cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
        				myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
        				lux+=uti[j-1].getprice();
        				value+=uti[j-1].getvalue();
        			}
        			else
        			{
    					cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;    				total+=uti[j-1].getprice();
       					myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
        				value+=uti[j-1].getvalue();
        			}
                    set1[j-1]=1;
                }
    		}
    	}
    	if(mis[i-1].getminattraction()==2)
    	{
    		//int lux=0,total=0,budget=mis[i-1].getbudget();
    		maint=nor[i-1].getmaintenance();
    		value=0;
    		for(j=100;j>=1;j--)
    		{
                if(set2[j-1]==0)
                {
        			if(total+lux+uti[j-1].getprice()>maint)
        				continue;
        			if(uti[j-1].getutivalue()==2)
        			{
    					cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;    				
        				myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;					
    					lux+=uti[j-1].getprice();
        				value+=uti[j-1].getvalue();
        			}
        			else
        			{
    					cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;    				
        				myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;					
    					total+=uti[j-1].getprice();
        				value+=uti[j-1].getvalue();
        			}
                    set2[j-1]=1;
                }
    		}
    	}
    	if(mis[i-1].getminattraction()==3)
    	{
    		//int lux=0,total=0,budget=mis[i-1].getbudget();
    		maint=nor[i-1].getmaintenance();
    		value=0;
    		for(j=1;j<=100;j++)
    		{
                if(set3[j-1]==0)
                {
        			if(total+lux>maint)
        				break;
        			if(uti[j-1].getutivalue()==2)
        			{
    					cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;    				
        				myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;					
    					lux+=uti[j-1].getprice();
        				value+=uti[j-1].getvalue();
        			}
        			else
        			{
    					cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
        				myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
        				total+=uti[j-1].getprice();
        				value+=uti[j-1].getvalue();
        			}
                    set3[j-1]=1;
                }
    		}
    		if(lux==0)
    		{
    			for(j=1;j<=100;j++)
    			{
    				if(uti[j-1].getutivalue()==2)
    				{
    					cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
    					myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
	    				lux+=uti[j-1].getprice();
	    				value+=uti[j-1].getvalue();
	    				break;
    				}
    			}
    		}
    	}
    	myfile1<<endl;
    	cout<<endl;
    }
}