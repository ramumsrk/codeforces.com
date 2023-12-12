#include <iostream>
#include <cstdlib>
#include <format>

// Forward declaration using function prototype
bool are_last_names_same( std::string_view first_person_last_name , std::string_view second_person_last_name );

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
      std::cout<<std::format( "ARE Brothers" )<<std::endl;
    }
    else
    {
      std::cout<<std::format( "NOT" )<<std::endl;
    }
  return EXIT_SUCCESS;
}

// Function definition
bool are_last_names_same( std::string_view first_person_last_name , std::string_view second_person_last_name )
{
    bool last_names_are_same { false };
    if ( first_person_last_name.length() != second_person_last_name.length() )
    {
      return last_names_are_same;
    }
    for ( int index {} ; index < static_cast<int>(first_person_last_name.length()) ; index += 1 )
    {
      if ( first_person_last_name[index] == second_person_last_name[index] )
      {
        last_names_are_same = true;
      }
      else
      {
        last_names_are_same = false;
        break;
      }
    }
  return last_names_are_same;
}
