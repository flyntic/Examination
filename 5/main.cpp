#include <iostream>

int *addMemoryForArray(int n)
{
   return new int [n];
}

void fillArray(int *Array,int n) {
     srand( time( 0 ) );
    for (int i = 0; i < n; i++)
    {
         Array[i] =  rand();
    }

}

void printArray(int *Array,int n) {

    for (int i = 0; i < n; i++)
    {
       std::cout<<  int(Array[i]) <<"  ";
    }
    std::cout<<std::endl;

}

void clearMemoryArray(int *Array)
{
  delete (Array);

}
int main() {
    int *Array_1=NULL;
    int *Array_2=NULL;

    int n_1,n_2;

    std::cout <<"Input dimension of first array "<<std::endl;
    std::cin>>n_1;
    std::cout <<"Input dimension of second array "<<std::endl;
    std::cin>>n_2;

    Array_1 = addMemoryForArray(n_1);
    Array_2 = addMemoryForArray(n_2);
    fillArray(Array_1, n_1);
    fillArray(Array_2, n_2);

    std::cout <<"First array : "<<std::endl;
    printArray(Array_1, n_1);
    std::cout <<"Second array : "<<std::endl;
    printArray(Array_2, n_2);
    clearMemoryArray(Array_1);
    clearMemoryArray(Array_2);

    return 0;
}
