#include <iostream>
#include <string>

char NewCasts() {
    char SummaOf4Casts=0;
    char cast;
    static time_t random_label=time( 0 ) ;

     srand( random_label++);

     for (int i = 0; i < 4; i++)
    {
         cast =  rand()%6+1;
         std::cout << int(cast)<<" ";
         SummaOf4Casts+=cast;

    }

     std::cout << " Summa : "<< int(SummaOf4Casts)<<std::endl;
     return SummaOf4Casts;

}

std::string printNameOfGamer(int i)
{
    if(i==0) return "Computer";

    return "Human";

}
int main() {
    int Results[2]={0};
    srand( time( 0 ) );

    int choice =rand()%2;

    char yes_next='Y';

    while (yes_next=='Y')
    {
       std::cout <<"Throws are made "<< printNameOfGamer(choice)<<" "<<std::endl;
       Results[choice]+=NewCasts();
       std::cout <<"Summa of all throws = "<< Results[choice] <<" "<<std::endl;


       std::cout <<"Throws are made "<< printNameOfGamer(1-choice)<<" "<<std::endl;
       Results[1-choice]+=NewCasts();
       std::cout <<"Summa of all throws == "<< Results[1-choice] <<" "<<std::endl;

       if (Results[1-choice]==Results[choice] ) std::cout<<" Draw "<<std::endl;
       else
           if(Results[1-choice]>Results[choice] )
              std::cout<<" Win "<< printNameOfGamer(1-choice)<<std::endl;
              else
              std::cout<<" Win "<< printNameOfGamer(choice)<<std::endl;


       std::cout <<"Next ? (Y) "<< std::endl;
       std::cin>> yes_next;


    }

    return 0;
}
