#include "b_memo_and_momo_constraints.hpp"

#include <iostream>
#include <format>

// Function definition
long long int reada()
{
    std::cout<<std::format( "Enter value for 'a': " )<<std::endl;
    long long int a {};
    std::cin>>a;
  return a;
}

// Function definition
long long int readb()
{
    std::cout<<std::format( "Enter value for 'b': " )<<std::endl;
    long long int b {};
    std::cin>>b;
  return b;
}

// Function definition
long long int readk()
{
    std::cout<<std::format( "Enter value for 'k': " )<<std::endl;
    long long int k {};
    std::cin>>k;
  return k;
}

void who_will_win( long long int a , long long int b , long long int k )
{
    if ( ( a % k == 0 ) && ( b % k == 0 ) )
    {
      std::cout<<std::format( "Both" )<<std::endl;
    }
    else if ( ( a % k == 0 ) && ( b % k != 0 ) )
    {
      std::cout<<std::format( "Memo" )<<std::endl;
    }
    else if ( ( a % k != 0 ) && ( b % k == 0 ) )
    {
      std::cout<<std::format( "Momo" )<<std::endl;
    }
    else if ( ( a % k != 0 ) && ( b % k != 0 ) )
    {
      std::cout<<std::format( "No One" )<<std::endl;
    }
  return;
}
