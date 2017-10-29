#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
 {
  fstream f;
  f.open("sample.csv",ios::out);
  f<<"1,2,3,4,5";
  f.close();
  ifstream fin;
  fin.open("beach.csv");
  char *n=new char[100];
  char *a=new char[500];
  char *tr=new char[100];
  char *ti=new char[100];
  while(fin)
  {
  fin.getline(n,100,',');
  fin.getline(a,500,',');
  fin.getline(tr,100,',');
  fin.getline(ti,100);
  cout<<n<<"\t\t"<<ti<<endl;
  }
  return 0;
}
