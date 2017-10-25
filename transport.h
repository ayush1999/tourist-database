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
        switch(choice)
        {
        	case 1: ifstream file ;
                	file.open("beach.csv");
        	        string delimiter=",";
        	        string s="";//s stores the data from an entire row to a string
        	        //store in s then continue
        	        
        	        cout<<"Available transportation modes:"<<endl;
        	        
        	        size_t pos = 0;
			string token;
			int counter = 0;
			while ((pos = s.find(delimiter)) != std::string::npos) 
			{
			         token = s.substr(0, pos);

                                 if(counter == 0 || counter == 2)
                                 {
                                         cout << token << endl;
                                 }
                                 s.erase(0, pos + delimiter.length());
                        }
                        file.close();
			break;
			
           	           //Other cases similar to case 1 with corresponding file invocation
		}//end of switch()
    }
}
