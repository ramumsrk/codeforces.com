#include "l_the_brothers_constraints.hpp"

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
