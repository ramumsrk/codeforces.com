#include <iostream>
#include <cstdlib>

int main()
{
    int first_number {} , second_number {};
    std::cin>>first_number>>second_number;
    if (
          ( first_number % second_number == 0 )
          ||
          ( second_number % first_number == 0 )
       )
    {
       std::cout<<"Multiples"<<std::endl;
    }
    else
    {
       std::cout<<"No Multiples"<<std::endl;
    }
  return EXIT_SUCCESS;
}
