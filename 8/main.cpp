#include <iostream>
#include <string>

int main() {

    srand( time( 0 ) );

    int Number=rand()%10000;
    int newNumber=0;

    int Divider=1;

    while (Divider<10000)
    {

        newNumber=newNumber*10 + (Number/Divider) % 10;
        Divider=Divider*10;
    }
    std::cout<<"Number "<<Number<<std::endl;
    std::cout<<"New number "<<newNumber<<std::endl;

    return 0;
}
