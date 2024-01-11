/*
* std::cin
* std::endl
*/
#include <iostream>

// EXIT_SUCCESS
#include <cstdlib>

// assert()
#include <cassert>

// std::vector
#include <vector>

/*
* C++ program execution starts
* from main() function
*/
int
main()
{
    /*
    * Natural numbers from
    * [1,n]
    */
    int n {};
    /*
    * Find index of x in
    * the array of
    * natural numbers
    */
    int x {};
    std::cin>>n>>x;

    // constraints
    assert(
      n >= 1
      &&
      n <= 10'000'000
    );
    assert(
      x >= 1
      &&
      x <= n
    );

    /*
    * a is the vector used by Leena
    * to store all natural numbers
    * from 1 to n , i.e., [1,n]
    */
    std::vector<int> natural_numbers(n,0);
    for (
          int index {0}
          ,natural_number {1};
          natural_number <= n;
          natural_number += 1
        )
    {
      /*
      * Leena hates multiples of three
      * and deletes them from a
      */
      if ( ( natural_number % 3 ) != 0 )
      {
        natural_numbers[index] = natural_number;
        index += 1;
      }
    }
    /*
    * Store the index of
    * element x in result.
    * -1 if x is not found
    */
    int result {};
    for ( 
          int index {};
          index < static_cast<int>(natural_numbers.size());
          index += 1
        )
    {
      if ( x == natural_numbers[index] )
      {
        result = index + 1;
        break;
      }
      else
      {
        result = -1;
      }
    }
    std::cout<<result<<std::endl;
  return EXIT_SUCCESS;
}