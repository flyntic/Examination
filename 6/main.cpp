#include <iostream>

void fillArray(unsigned char *Array) {

     srand( time( 0 ) );
    for (int i = 0; i < 5; i++)
    for (int j = 0; j < 5; j++)
    {
         Array[i*5+j] =  rand()%30+30;
    }

}

void printArray(unsigned char *Array) {

    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 5; j++)
         std::cout<<  int(Array[i*5+j]) <<"  ";
        std::cout<<std::endl;
    }

}

unsigned char minimum(unsigned char *Array)
{
    unsigned char minimum=Array[0];

    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 5; j++)
           if (minimum<Array[i*5+j])
               minimum=Array[i*5+j];

    }
   return minimum;
}

unsigned char maximum(unsigned char *Array)
{
    unsigned char maximum=Array[0];

    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 5; j++)
           if (maximum>Array[i*5+j])
               maximum=Array[i*5+j];

    }
   return maximum;
}

int main() {
    unsigned char Array[5][5];

    fillArray(&Array[0][0]);

    std::cout <<"Array : "<<std::endl;
    printArray(&Array[0][0]);

    std::cout <<"Maximum in array : "<<int(maximum(&Array[0][0]))<<std::endl;
    std::cout <<"Minimum in array : "<<int(minimum(&Array[0][0]))<<std::endl;

    return 0;
}
