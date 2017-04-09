#include "breakandcouple.h"
#include <iostream>
#include <string>
#include "miser.h"
#include "normal.h"
#include "utility.h"
#include "jodi.h"


using namespace std;

void make2()
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
  	myfile1.open ("temp2.txt");
    for(i=1;i<=30;i++)
    {
    	jod[i-1].setname1(mis[i-1].getname());
    	jod[i-1].setname2(nor[i-1].getname());
    	//cout<<mis[i-1].getname()<<" "<<nor[i-1].getname()<<" "<<"get gifts"<<endl;
    	myfile1<<mis[i-1].getname()<<" "<<nor[i-1].getname()<<" "<<"get gifts"<<endl;
    	if(mis[i-1].getminattraction()==1)
    	{
    		int lux=0,total=0,budget=mis[i-1].getbudget();
    		maint=nor[i-1].getmaintenance();
    		value=0;
    		for(j=1;j<=100;j++)
    		{
    			if(total+lux>maint)
    				break;
    			if(uti[j-1].getutivalue()==2)
    			{
    				//cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
    				myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
    				lux+=uti[j-1].getprice();
    				value+=uti[j-1].getvalue();
    			}
    			else
    			{
					//cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;    				total+=uti[j-1].getprice();
   					myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
    				value+=uti[j-1].getvalue();
    			}
    		}
    		int happ=2*abs(budget-(total+lux));

    		int comp=abs(budget-maint)+abs(mis[i-1].getintelligence()-nor[i-1].getintelligence());
    		jod[i-1].sethappiness(happ);
    		jod[i-1].setcompatibility(comp);
    	}
    	if(mis[i-1].getminattraction()==2)
    	{
    		int lux=0,total=0,budget=mis[i-1].getbudget();
    		maint=nor[i-1].getmaintenance();
    		value=0;
    		for(j=100;j>=1;j--)
    		{
    			if(total+lux+uti[j-1].getprice()>maint)
    				continue;
    			if(uti[j-1].getutivalue()==2)
    			{
					//cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;    				
    				myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;					
					lux+=uti[j-1].getprice();
    				value+=uti[j-1].getvalue();
    			}
    			else
    			{
					//cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;    				
    				myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;					
					total+=uti[j-1].getprice();
    				value+=uti[j-1].getvalue();
    			}
    		}
    		int happ=2*abs(budget-(total+lux));

    		int comp=abs(budget-maint)+abs(mis[i-1].getintelligence()-nor[i-1].getintelligence());
    		jod[i-1].sethappiness(happ);
    		jod[i-1].setcompatibility(comp);
    	}
    	if(mis[i-1].getminattraction()==3)
    	{
    		int lux=0,total=0,budget=mis[i-1].getbudget();
    		maint=nor[i-1].getmaintenance();
    		value=0;
    		for(j=1;j<=100;j++)
    		{
    			if(total+lux>maint)
    				break;
    			if(uti[j-1].getutivalue()==2)
    			{
					//cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;    				
    				myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;					
					lux+=uti[j-1].getprice();
    				value+=uti[j-1].getvalue();
    			}
    			else
    			{
					//cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
    				myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
    				total+=uti[j-1].getprice();
    				value+=uti[j-1].getvalue();
    			}
    		}
    		if(lux==0)
    		{
    			for(j=1;j<=100;j++)
    			{
    				if(uti[j-1].getutivalue()==2)
    				{
    					//cout<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
    					myfile1<<"type "<<uti[j-1].getutivalue()<<" "<<"price "<<uti[j-1].getprice()<<" "<<"value "<<uti[j-1].getvalue()<<endl;
	    				lux+=uti[j-1].getprice();
	    				value+=uti[j-1].getvalue();
	    				break;
    				}
    			}
    		}
    		int happ=2*abs(budget-(total+lux));

    		int comp=abs(budget-maint)+abs(mis[i-1].getintelligence()-nor[i-1].getintelligence());
    		jod[i-1].sethappiness(happ);
    		jod[i-1].setcompatibility(comp);
    	}
    	myfile1<<endl;
    	//cout<<endl;
    }
    int k;
    cout<<"Taking the value of k = 5"<<endl;
    k=5;
    for(i=1;i<=30;i++)
    	{
    	for(j=i;j<=30;j++)
    	{
    		if(jod[i-1].gethappiness()<jod[j-1].gethappiness())
    		{
    			int tem1,tem2;
    			string n1,n2;
    			n1=jod[i-1].getname1();
    			n2=jod[i-1].getname2();
    			tem1=jod[i-1].getcompatibility();
    			tem2=jod[i-1].gethappiness();
    			jod[i-1].setname1(jod[j-1].getname1());
    			jod[i-1].setname2(jod[j-1].getname2());
    			jod[i-1].setcompatibility(jod[j-1].getcompatibility());
    			jod[i-1].sethappiness(jod[j-1].gethappiness());
    			jod[j-1].setname1(n1);
    			jod[j-1].setname2(n2);
    			jod[j-1].sethappiness(tem2);
    			jod[j-1].setcompatibility(tem1);
    		}
    	}
    }
    // making the newly formed singles to the couples
    ofstream myfile3;
    myfile3.open ("ans6.txt");
    myfile3<<k<<endl;
    cout<<"Taking the value of t=50 ....the newly formed couple are  -____-  "<<endl;
    int t=50,k1=0,k2=0;
    Jodi joda[5],jode[5];
    for(i=30;i>30-k;i--)
    {
        string str1,str2;
        if(jod[i-1].gethappiness()<t)
        {
            str1=jod[i-1].getname1();
            str2=jod[i-1].getname2();
            joda[k1].setname1(str1);
            joda[k1].setname2(str2);
                        k1++;
            //cout<<str1<<" "<<str2<<endl;
        }
        else
        {
            str1=jod[i-1].getname1();
            str2=jod[i-1].getname2();
            jode[k2].setname1(str1);
            jode[k2].setname2(str2);
                        k2++;
            //cout<<str1<<" "<<str2<<endl;
        }
    }
    //printing the name of the new couples
    for(i=0;i<k1;i++)
    {
        cout<<joda[i].getname1()<<" "<<joda[(i+1)%k1].getname2()<<endl;
        myfile3<<joda[i].getname1()<<" "<<joda[(i+1)%k1].getname2()<<endl;
    }
    for(i=0;i<k2;i++)
    {
        cout<<jode[i].getname1()<<" "<<jode[i].getname2()<<endl;
        myfile3<<jode[i].getname1()<<" "<<jode[i].getname2()<<endl;
    }  
    myfile3.close();
}