#ifndef TRAVEL_H_INCLUDED
#define TRAVEL_H_INCLUDED
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void travel(int i)
{
    ifstream f;
    if(i==1)
        f.open("beach.csv");
    else if(i==2)
        f.open("park.csv");
    else if(i==3)
        f.open("zoo.csv");
    else if(i==4)
        f.open("temple.csv");
    else if(i==5)
        f.open("hill.csv");
    else if(i==6)
        f.open("dam.csv");
    else
        cout<<"invalid input ";
    cout<<"\n Enter the place you want to go : ";
    cin>>i;
    int c=1;
    char *n=new char[100];
    char *a=new char[500];
    char *tr=new char[100];
    char *ti=new char[100];
    while(f)
        {
            f.getline(n,100,',');
            f.getline(a,500,',');
            f.getline(tr,100,',');
            f.getline(ti,100);
            if(c==i+1)
                cout<<tr<<"\n\n"<<a;
            c++;
        }

}



#endif // TRAVEL_H_INCLUDED
