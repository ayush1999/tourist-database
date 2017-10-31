#include "place.h"
#include "client.h"
int main()
{
    int n;
    cout<<"\n Enter 1 for Admin ";
    cout<<"\n       2 for user ";
    cin>>n;
    if(n==1)
        admin();
    else if(n==2)
        user();
    else
        cout<<"\ninvalid input";
    return 0;
}
