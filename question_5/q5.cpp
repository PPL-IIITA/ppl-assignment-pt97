#include "miser.h"
#include "normal.h"
#include "couple.h"
#include "couple2.h"
#include "jodi.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int temp;
	cout<<"randomly choosing algo"<<endl;
    srand(time(NULL));
   	temp=rand()%2+1;
	if(temp==1)
		make1();
	else
		make2();
	return 0;
}

//to run this file g++ q5.cpp couple.cpp miser.cpp normal.cpp couple2.cpp jodi.cpp