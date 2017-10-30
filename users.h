#include<iostream>
#include<fstream>
using namespace std;
class BaseUser{
public:
    int choice;
    BaseUser(){
        cout<<"Are you a 1. User"<<endl;
        cout<<"          2. Managing Staff";
        cin>>choice;

    }
    void view(){
        ofstream in;
        in.open("name_of_csv.csv");
        
    }
    int get_type(){
        return choice;
    };
};

class User: public BaseUser{

};

class managing_staff: public BaseUser{
public:
    void edit(){
        int option;
        cout<<"What Do you want 1. Add"<<endl;
        cout<<"                 2. Edit";
        cin>>option;
        if (option==1){
                                        // Append to the csv file
        }
        else{
                                        // Edit the csv file
        }
    }
}

