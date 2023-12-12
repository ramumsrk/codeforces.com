#include "l_the_brothers_constraints.hpp"

#include <iostream>
#include <cstdlib>
#include <format>


int main()
{
    std::cout<<std::format( "Enter first person first name: " )<<std::endl;
    std::string first_person_first_name {};
    std::cin>>first_person_first_name;
    std::cout<<std::format( "Enter first person last name: " )<<std::endl;
    std::string first_person_last_name {};
    std::cin>>first_person_last_name;
    std::cout<<std::format( "Enter second person first name: " )<<std::endl;
    std::string second_person_first_name {};
    std::cin>>second_person_first_name;
    std::cout<<std::format( "Enter second person last name: " )<<std::endl;
    std::string second_person_last_name {};
    std::cin>>second_person_last_name;
    if ( are_last_names_same( first_person_last_name , second_person_last_name ) )
    {
      std::cout<<std::format( "'{}' and '{}' are brothers" , ( first_person_first_name + " " + first_person_last_name ) , ( second_person_first_name + " " + second_person_last_name ) )<<std::endl;
    }
    else
    {
      std::cout<<std::format( "'{}' and '{}' are not brothers" , ( first_person_first_name + " " + first_person_last_name ) , ( second_person_first_name + " " + second_person_last_name ) )<<std::endl;
    }
  return EXIT_SUCCESS;
}
