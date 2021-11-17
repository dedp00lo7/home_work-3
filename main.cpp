

#include <iostream>

using namespace std;
extern int a;
extern int b;
extern int c;
extern int d;

int main()
{
    //1, 4 задание
    

    cout<<a* (b + (static_cast < float > (c) / d))<<endl;
    
    //2 задание
    int g;
    cin>>g;
    (g<=21) ? cout<<21-g<<endl : cout<<(g-21)*2<<endl;
    //3 задание
    int arr[3][3][3];
    int * p = &arr[1][1][1];
    
    cout<<*p<<" "<<p<<endl;
    
    return 0;
}
