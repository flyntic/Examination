#include <iostream>
#include <string>

int main() {

    srand( time( 0 ) );
    int Number;
    std::cout<<"Input height of triangle "<<std::endl;
    std::cin>>Number;

    for(int i=0;i<Number;i++)
    {
        for(int j=0;j<(Number-i);j++)
            std::cout<<" ";
        for(int j=0;j<(i*2+1);j++)
            std::cout<<"^";

            std::cout<<std::endl;
    }
    return 0;
}
