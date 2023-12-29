#include "constraints.hh"

// std::cin
#include <iostream>

/**
 * @return  Missing character in latin
 *          square
 * Following is a latin square example
 * A B C
 * B C A
 * C A B
 * The missing character in following
 * latin-square is 'A'
 * ? B C
 * B C A
 * C A B
 */
char
missing_character_in_latin_square()
{
    int count_A {};
    int count_B {};
    int count_C {};
    char missing_character {};
    for (
          int row {1};
          row <= maximum_rows;
          row += 1
        )
    {
      for (
            int column {1};
            column <= maximum_columns;
            column += 1
          )
      {
        char character {};
        std::cin>>character;
        if ( character == 'A' )
        {
          count_A += 1;
        }
        else if ( character == 'B' )
        {
          count_B += 1;
        }
        else if ( character == 'C' )
        {
          count_C += 1;
        }
      }
    }
    if ( count_A != 3 )
    {
      missing_character = 'A';
    }
    else if ( count_B != 3 )
    {
      missing_character = 'B';
    }
    else if ( count_C != 3 )
    {
      missing_character = 'C';
    }
  return missing_character;
}
