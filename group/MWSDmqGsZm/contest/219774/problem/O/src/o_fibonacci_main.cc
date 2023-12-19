#include "o_fibonacci_constraints.hh"

#include <cstdlib>
#include <iostream>

int main()
{
    int number { read_number() };
    std::cout<<"Fibonacci of '"<<number<<"' is '"<<fibonacci( number )<<"'"<<std::endl;
  return EXIT_SUCCESS;
}
