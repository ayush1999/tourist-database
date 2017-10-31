#ifndef READ_H_INCLUDED
#define READ_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include"travel.h"
using namespace std;

void beaches()
 {

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
  travel(1);
}
void ap()
 {

  ifstream fin;
  fin.open("park.csv");
  char *n=new char[100];
  char *a=new char[500];
  char *tr=new char[100];
  char *ti=new char[100];
  while(fin)
  {
  fin.getline(n,100,',');
  fin.getline(a,500,',');
  fin.getline(ti,100);
  cout<<n<<"\t\t"<<ti<<endl;
  }
  travel(2);
}
void zoo()
 {

  ifstream fin;
  fin.open("zoo.csv");
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
  travel(3);
}
void temple()
 {

  ifstream fin;
  fin.open("temple.csv");
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
  travel(4);
}
void hs()
 {

  ifstream fin;
  fin.open("hill.csv");
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
  travel(5);
}
void dam()
 {

  ifstream fin;
  fin.open("dam.csv");
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
  travel(6);
}


#endif // READ_H_INCLUDED
