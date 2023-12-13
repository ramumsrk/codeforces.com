#include "b_memo_and_momo_constraints.hpp"

#include <cstdlib>
#include <cassert>

int main()
{
    long long int a { reada() };
    long long int b { readb() };
    long long int k { readk() };
    /*
    assert(
      ( ( a >= minimum_value_for_input_elements ) && ( a <= maximum_value_for_input_elements ) )
      &&
      ( ( b >= minimum_value_for_input_elements ) && ( b <= maximum_value_for_input_elements ) )
      &&
      ( ( k >= minimum_value_for_input_elements ) && ( k <= maximum_value_for_input_elements ) )
    );
    */
    who_will_win( a , b , k );
  return EXIT_SUCCESS;
}
