#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class transport
{
    int choice;

  public:
    transport()
    {
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
        // using switch case, read corresponding csv.(only transport column)
    }
}
