#include <bits/stdc++.h>
using namespace std;

int make2()
{
	fstream myfile;
	int k=5;
	string girl[k],boy[k];
	int i;
	myfile.open("leasthappy.txt");
	//taking the least happy couple according to the question 3 and the breaking them up
	myfile>>k;
	for(i=0;i<k;i++)
	{
		myfile>>girl[i]>>boy[i];
	}
	//according to the algo assigning the new boyfriend to the girlfriends :(
	cout<<"The new order of the couples is following "<<endl;
	ofstream myfile1;
	myfile1.open("ans4.txt");
	for(i=0;i<k;i++)
	{
		cout<<girl[i]<<" matches with the new boy "<<boy[(i+1)%5]<<endl;
		myfile1<<girl[i]<<" "<<boy[(i+1)%5]<<endl;
	}
	myfile1.close();
	return 0;
}