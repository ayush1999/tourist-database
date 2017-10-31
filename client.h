#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED

#include"place.h"
#include"write.h"
void admin()
{
    int choice;
        cout<<"\n which place do you want to edit   1. Beaches" << endl;
        cout << "                                   2. Amusement Parks" << endl;
        cout << "                                   3. Zoos and Wildlife Sanctuaries" << endl;
        cout << "                                   4. Temples" << endl;
        cout << "                                   5. Hill Station" << endl;
        cout << "                                   6. Dams and Lakes" << endl;
        cin >> choice;
        edit(choice);
}
void user()
{
    showp();
}



#endif // CLIENT_H_INCLUDED
