#include <iostream>
#include <fstream>
#include <string>
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
}
void ap()
 {

  ifstream fin;
  fin.open("parks.csv");
  char *n=new char[100];
  char *a=new char[500];
  char *ti=new char[100];
  while(fin)
  {
  fin.getline(n,100,',');
  fin.getline(a,500,',');
  fin.getline(ti,100);
  cout<<n<<"\t\t"<<ti<<endl;
  }
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
  cout<<n<<"\t\t\t\t\t"<<ti<<endl;
  }
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
  cout<<n<<"\t\t\t"<<ti<<endl;
  }
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
}


class places{
    int choice;
public:
    places(){
        cout << "Enter the type of place : 1. Beaches" << endl;
        cout << "                          2. Amusement Parks" << endl;
        cout << "                          3. Zoos and Wildlife Sanctuaries" << endl;
        cout << "                          4. Temples" << endl;
        cout << "                          5. Hill Station" << endl;
        cout << "                          6. Dams and Lakes" << endl;
        cin >> choice;
    }
    void show()
    {
        switch(choice)
        {
            case 1:beaches();
                    break;
            case 2:ap();
                    break;
            case 3:zoo();
                    break;
            case 4:temple();
                    break;
            case 5:hs();
                    break;
            case 6:dam();
                    break;
            default:cout<<"invalid";
        }
                                        // using switch case, read corresponding csv.(all columns)
    }
};
int main()
{
    places p;
    p.show();
}


