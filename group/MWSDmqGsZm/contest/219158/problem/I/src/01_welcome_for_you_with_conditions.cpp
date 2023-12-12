#include <iostream>
#include <cstdlib>

int main()
{
    int first_number {} , second_number {};
    std::cin>>first_number>>second_number;
    if ( first_number >= second_number )
    {
      std::cout<<"Yes"<<std::endl;
    }
    else
    {
      std::cout<<"No"<<std::endl;
    }
  return EXIT_SUCCESS;
}
