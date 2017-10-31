#ifndef PLACE_H_INCLUDED
#define PLACE_H_INCLUDED

#include"read.h"

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


void showp()
{

    places p;
    p.show();
}
void showq()
{

}

#endif // PLACE_H_INCLUDED
