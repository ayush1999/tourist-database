#ifndef WRITE_H_INCLUDED
#define WRITE_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include<stdlib.h>
using namespace std;
void add(int i);
void del(int i);
class details
{
public:
        char *n=new char[100];
        char *a=new char[500];
        char *tr=new char[100];
        char *ti=new char[100];
        void get()
        {
            cout<<"\n Enter The Name : ";
            cin>>n;
            cout<<"\n Enter Address : ";
            cin>>a;
            cout<<"\n Enter Travelling and Lodging Details : ";
            cin>>tr;
            cout<<"\n Enter The Time The Place is Open : ";
            cin>>ti;
        }
};
details d;
vector<details> z;
void edit(int i)
{
    ifstream f;
    int x=0;
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
    {
        cout<<"invalid input ";
        exit(0);
    }

    while(!f.eof())
    {
        f.getline(d.n,100,',');
        f.getline(d.a,500,',');
        f.getline(d.tr,100,',');
        f.getline(d.ti,100);
        z.push_back(d);
        if(d.n[0]!='\0'&&x!=0)
            cout<<x<<". "<<d.n<<endl;
        else
            cout<<d.n<<endl;
        x++;
    }
    cout<<"\n how do you want to edit : 1. add a place ";
    cout<<"\n                           2. delete a place "<<endl;
    cin>>x;
    if(x==1)
        add(i);
    else if(x==2)
        del(i);
    else
        cout<<"\ninvalid input";

}
void add(int i)
{
    string s;
    ofstream f;

    if(i==1)
        f.open("beach.csv",ios::app);
    else if(i==2)
        f.open("park.csv",ios::app);
    else if(i==3)
        f.open("zoo.csv",ios::app);
    else if(i==4)
        f.open("temple.csv",ios::app);
    else if(i==5)
        f.open("hill.csv",ios::app);
    else if(i==6)
        f.open("dam.csv",ios::app);
    d.get();
    z.push_back(d);
    s.append(d.n);s.append(",");s.append(d.a);s.append(",\"");s.append(d.tr);s.append("\"");s.append(d.ti);
    f<<s;


}
void del(int i)
{
    string s;
    int x;
    ifstream f;
    ofstream w;
    fstream t;
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
    cout<<"Enter The serial no of place you want to delete : ";
    cin>>x;
    t.open("temp.csv",ios::in|ios::out);
    while(!f.eof())
    {
        f.getline(d.n,100,',');
        f.getline(d.a,500,',');
        f.getline(d.tr,100,',');
        f.getline(d.ti,100);
        s.append(d.n);s.append(",");s.append(d.a);s.append(",\"");s.append(d.tr);s.append("\"");s.append(d.ti);
        t<<s;
    }
    if(i==1)
        w.open("beach.csv");
    else if(i==2)
        w.open("park.csv");
    else if(i==3)
        w.open("zoo.csv");
    else if(i==4)
        w.open("temple.csv");
    else if(i==5)
        w.open("hill.csv");
    else if(i==6)
        w.open("dam.csv");
    t.seekg(0,ios::beg);
    int r=0;
    while(!t.eof())
    {

        t.getline(d.n,100,',');
        t.getline(d.a,500,',');
        t.getline(d.tr,100,',');
        t.getline(d.ti,100);
        s.append(d.n);s.append(",");s.append(d.a);s.append(",\"");s.append(d.tr);s.append("\"");s.append(d.ti);
        if(r++!=x)
        w<<s;
    }


}

#endif // WRITE_H_INCLUDED
