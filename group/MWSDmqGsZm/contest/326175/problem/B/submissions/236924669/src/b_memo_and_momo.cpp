#include <iostream>
#include <cstdlib>
//#include <cassert>
 
// Forward declaration using function prototypes
long long int reada();
long long int readb();
long long int readk();
void who_will_win( long long int a , long long int b , long long int k );
 
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
 
// Function definition
long long int reada()
{
    //std::cout<<std::format( "Enter value for 'a': " )<<std::endl;
    long long int a {};
    std::cin>>a;
  return a;
}
 
// Function definition
long long int readb()
{
    //std::cout<<std::format( "Enter value for 'b': " )<<std::endl;
    long long int b {};
    std::cin>>b;
  return b;
}
 
// Function definition
long long int readk()
{
    //std::cout<<std::format( "Enter value for 'k': " )<<std::endl;
    long long int k {};
    std::cin>>k;
  return k;
}
 
// Function definition
void who_will_win( long long int a , long long int b , long long int k )
{
    if ( ( a % k == 0 ) && ( b % k == 0 ) )
    {
      std::cout<<"Both"<<std::endl;
    }
    else if ( ( a % k == 0 ) && ( b % k != 0 ) )
    {
      std::cout<<"Memo"<<std::endl;
    }
    else if ( ( a % k != 0 ) && ( b % k == 0 ) )
    {
      std::cout<<"Momo"<<std::endl;
    }
    else if ( ( a % k != 0 ) && ( b % k != 0 ) )
    {
      std::cout<<"No One"<<std::endl;
    }
  return;
} 
