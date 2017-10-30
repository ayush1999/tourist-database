#include<iostream>
#include<fstream>
#include"lodging.h"
#include "transport.h"
#include "places.h"
#include "time_to_visit.h"
#include "users.h"
using namespace std;

int main(){
    base = BaseUser()

    if (base.choice==1){
        obj = User()
        cout<<"Hello User. Which type of place do you want to visit?"<<endl;
        cout << "1. Beaches" << endl;
        cout << "2. Dams" << endl;
        cout << "3. Hills" << endl;
        cout << "4. Parks" << endl;
        cout << "5. Temple" << endl;
        cout << "6. zoo" << endl;
        int ch;
        cin>>ch;
        switch(ch){
            case 1:{
                                            // Read the beaches.csv file.(all columns).
            }
            case 2:
            {
                                            // Read the dams.csv file.(all columns).
            }
            case 3:
            {
                                            // Read the hills.csv file.(all columns).
            }
            case 4:
            {
                                            // Read the parks.csv file.(all columns).
            }
            case 5:
            {
                                            // Read the temple.csv file.(all columns).
            }
            case 6:
            {
                                            // Read the zoo.csv file.(all columns).
            }
        }
        cout<<endl;
        cout<<"What kind of Information do you want?"<<endl;
        cin>>ch;
        cout << "1. Lodging" << endl;
        cout << "2. Transport" << endl;
        cout << "3. Time to Visit" << endl;
        switch(ch){
            case 1:{
            l= lodging();
            l.show();                                // 
            }
            case 2:{
            t= transport();
            t.show();
            }
            case 3:{
            ttv = time();
            ttv.show();
            }
        }
    }
    else{
        obj = managing_staff();

    }

}

