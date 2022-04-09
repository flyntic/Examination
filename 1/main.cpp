#include <iostream>

int main() {
    unsigned char Array[5][5];

    std::cout << "Random array : " << std::endl;
    srand( time( 0 ) );
    for(int i=0;i<5;i++) {
        for (int j = 0; j < 5; j++) {
            Array[i][j] =  rand() % 90 + 10;
            std::cout<< int(Array[i][j])<<"  ";

        }
        std::cout<<std::endl;
    }

    for(int i=0;i<5;i++) {
        unsigned char * j_max=&Array[i][0];
        for (int j = 1; j < 5; j++)
            if (Array[i][j]>*j_max)
                j_max=&Array[i][j];
        unsigned char temp;
        temp=*j_max;
        *j_max=Array[i][0];
        Array[i][0]=temp;
    }

    std::cout << "New array : " << std::endl;

    for(int i=0;i<5;i++) {
        for (int j = 0; j < 5; j++) {
            std::cout<< int(Array[i][j])<<"  ";
        }
        std::cout<<std::endl;
    }

    return 0;
}
