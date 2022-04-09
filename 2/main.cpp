#include <iostream>

double *addMemoryForArray(int n)
{
   return new double [n];
}

void fillArray(double *Array,int n) {
     srand( time( 0 ) );
    for (int i = 0; i < n; i++)
    {
         Array[i] =  rand();
    }

}

void printArray(double *Array,int n) {
     srand( time( 0 ) );
    for (int i = 0; i < n; i++)
    {
       std::cout<<  Array[i] <<"  ";
    }
    std::cout<<std::endl;

}

void clearMemoryArray(double *Array)
{
  delete (Array);

}
int main() {
    double *Array=NULL;
    int n;

    char yes='Y';

    while (yes=='Y') {
        std::cout <<"Input dimension of array "<<std::endl;
        std::cin>>n;
        Array = addMemoryForArray(n);
        fillArray(Array, n);
        printArray(Array, n);
        clearMemoryArray(Array);
        std::cout <<"Create new dinamic array? (Y) "<<std::endl;
        std::cin>>yes;
    }
    return 0;
}
