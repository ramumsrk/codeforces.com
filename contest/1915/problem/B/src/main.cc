// std::cin
// std::cout
#include <iostream>

// missing_character_in_latin_square()
#include "constraints.hh"

// EXIT_SUCCESS
#include <cstdlib>

// assert()
#include <cassert>

/*
 * C++ program execution starts
 * from builtin main() function
 */
int
main()
{
    std::cout<<"Enter number of test cases: ";
    int test_cases {};
    std::cin>>test_cases;

    assert(
      test_cases >= minimum_test_cases
      &&
      test_cases <= maximum_test_cases
    );

    int test_case {1};
    while ( test_case <= test_cases )
    {
        std::cout<<
          "Executing test case '"<<test_case<<"'"
          <<std::endl;
        std::cout<<
        missing_character_in_latin_square()
        <<std::endl;
      test_case += 1;
    }
  /*
   * Return EXIT_SUCCESS to the
   * underlying operating-system
   */
  return EXIT_SUCCESS;
}
