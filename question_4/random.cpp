#include <iostream>
#include <fstream>
using namespace std;

int writeFile1 () 
{
  ofstream myfile;
  myfile.open ("boy.txt");
  int n=50,i;
  srand(time(NULL));
  for(i=1;i<=n;i++)
  {
  	myfile <<i<<"boy "<<rand()%70+80<<" "<<rand()%100<<" "<<rand()%67+80<<" "<<rand()%50+20<<"\n";
  }
  myfile<<"\n";
  myfile.close();
}

int writeFile2 () 
{
  ofstream myfile;
  myfile.open ("girl.txt");
  int n=30,i;
  srand(time(NULL));
  for(i=1;i<=n;i++)
  {
  	myfile <<i<<"girl "<<rand()%70+80<<" "<<rand()%100<<" "<<rand()%70+10<<" "<<rand()%3+1<<"\n";
  }
  myfile<<"\n";
  myfile.close();
}

int writeFile3 () 
{
  ofstream myfile;
  myfile.open ("gift.txt");
  int n=100,i;
  srand(time(NULL));
  for(i=1;i<=n;i++)
  {
  	myfile<<rand()%3+1<<" "<<rand()%20+10<<" "<<rand()%30+10<<"\n";
  }
  myfile<<"\n";
  myfile.close();
}


int main()
{
    writeFile1();
    writeFile2();
    writeFile3();
}