#include "miser.h"
#include "normal.h"
#include "choosy.h"
#include "desperate.h"
#include "generous.h"
#include "geeks.h"
#include "livelong.h"
#include "newalgo.h"
#include "essential.h"
#include "luxury.h"
#include "utility.h"
#include "jodi.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"randomly choosing algo";
	srand(time(NULL));
	int temp=rand()%2+1;
	if(temp==1)
		make1();
	else
		make2();
	return 0;
}
//g++ q8.cpp livelong.cpp miser.cpp choosy.cpp desperate.cpp normal.cpp geeks.cpp generous.cpp luxury.cpp utility.cpp essential.cpp jodi.cpp newalgo.cpp