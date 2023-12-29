#include <iostream>
#include <cassert>
#include <cstdlib>

int
a_odd_one_out( int a , int b , int c );

int
main()
{
    int t {};
    std::cin>>t;
    assert(
      t >= 1
      &&
      t <= 270
    );

    int tc {1};
    while ( tc <= t )
    {
        int a {};
        int b {};
        int c {};
        std::cin>>a>>b>>c;
        std::cout<<a_odd_one_out( a , b , c )<<std::endl;
      tc += 1;
    }
  return EXIT_SUCCESS;
}

int
a_odd_one_out( int a , int b , int c )
{
    int result {};
    if ( ( a != b ) && ( a != c ) && ( b == c ) )
    {
      result = a;
    }
    else if ( ( b != a ) && ( b != c ) && ( a == c ) )
    {
      result = b;
    }
    else if ( ( c != a ) && ( c != b ) && ( a == b ) )
    {
      result = c;
    }
  return result;
}
