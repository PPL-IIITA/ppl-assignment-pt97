#include "boysgirl.h"
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "jodi.h"


using namespace std;

void make2()
{
    map <string,int> m;
	fstream myfile;
    Jodi jode[30];
    int i,j;
    string name1,name2,boy[10],commiboys[30];
    myfile.open("couple.txt");
    for(i=0;i<30;i++)
    {
        myfile>>name1>>name2;
        jode[i].setname1(name1);
        jode[i].setname2(name2);
        m[name1]=1;
        commiboys[i]=name1;
    }
//getting the random string of boys
    boy[0]="boy1",boy[1]="boy14",boy[2]="boy3",boy[3]="boy48",boy[4]="boy11",boy[5]="boy38",boy[6]="boy16",boy[7]="boy20",boy[8]="boy37",boy[9]="boy26";
    int check=rand()%3+1;
    sort(commiboys,commiboys+30);
    //accordign to the linear search
    if(check==1)
    {
        for(i=0;i<10;i++)
        {
            for(j=0;j<30;j++)
            {
                if(jode[j].getname1()==boy[i])
                {
                    cout<<boy[i]<<" girlfriend is "<<jode[j].getname2()<<endl;
                    break;
                }
            }
        }
    }
    //according to the binary search using the inbuilt binary search function
    if(check==2)
    {
        for(i=0;i<10;i++)
        {
            if(binary_search(commiboys,commiboys+30,boy[i]))
            {
                for(j=0;j<30;j++)
                {
                    if(jode[j].getname1()==boy[i])
                    {
                        cout<<boy[i]<<" girlfriend is "<<jode[j].getname2()<<endl;
                        break;
                    }
                }
            }
            else
              cout<<boy[i]<<" is not in relationship\n";
        }
    }
    //according to the maping 
    if(check==3)
    {
        for(i=0;i<10;i++)
        {
            if(m[boy[i]]==1) 
            {
                for(j=0;j<30;j++)
                {
                    if(jode[j].getname1()==boy[i])
                    {
                        cout<<boy[i]<<" girlfriend is "<<jode[j].getname2()<<endl;
                        break;
                    }
                }
            }
            else
              cout<<boy[i]<<" is not in relationship\n";
        }
    }
}