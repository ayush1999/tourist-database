#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class time
{
    int choice;

  public:
    time()
    {
        cout << "Enter the type of place :";
        cout << " 1. Beaches" << endl;
        cout << "                          2. Amusement Parks" << endl;
        cout << "                          3. Zoo" << endl;
        cout << "                          4. Temples" << endl;
        cout << "                          5. Hill Station" << endl;
        cout << "                          6. Dams" << endl;
        cout << "                          7. Gardens" << endl;
        cin >> choice;
    }
    void show()
    {
        // using switch case, read corresponding csv.(only time column)
    }
}
