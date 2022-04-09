#include <iostream>

unsigned char *addMemoryForArray(int nX,int nY)
{
   return new unsigned char [nX*nY];
}

void fillArray(unsigned char *Array,int nX,int nY) {
     srand( time( 0 ) );
    for (int i = 0; i < nX; i++)
    for (int j = 0; j < nY; j++)
    {
         Array[i*nX+j] =  rand()%40+10;
    }

}

void printArray(unsigned char *Array,int nX,int nY) {

    for (int i = 0; i < nX; i++)
    for (int j = 0; j < nY; j++)
    {
       std::cout<<  int(Array[i*nX+j]) <<"  ";
    }
    std::cout<<std::endl;

}

void clearMemoryArray(unsigned char *Array)
{
  delete (Array);

}
int main() {
    unsigned char *Array=NULL;
    int nx,ny;

    std::cout <<"Input first dimension of array "<<std::endl;
    std::cin>>nx;
    std::cout <<"Input second dimension of array "<<std::endl;
    std::cin>>ny;

    Array = addMemoryForArray(nx,ny);
    fillArray(Array, nx,ny);
    printArray(Array, nx,ny);
    clearMemoryArray(Array);

    return 0;
}
