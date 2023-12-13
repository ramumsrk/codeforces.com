#include "a_watermelon_constraints.hpp"

#include <iostream>
#include <format>

// Function definition
bool can_divide_watermelon_into_even_weights( int watermelon_weight )
{
    bool watermelon_can_be_divided_into_even_weights { false };
    for ( int pete_share_weight { 1 } ; pete_share_weight <= watermelon_weight ; pete_share_weight += 1 )
    {
      for ( int billy_share_weight { 1 } ; billy_share_weight <= watermelon_weight ; billy_share_weight += 1 )
      {
        if (
          (
            pete_share_weight % 2 == 0
            &&
            billy_share_weight % 2 == 0
          )
          &&
          ( pete_share_weight + billy_share_weight == watermelon_weight )
        )
        {
          watermelon_can_be_divided_into_even_weights = true;
        }
      }
    }
  return watermelon_can_be_divided_into_even_weights;
}

// Function definition
int read_watermelon_weight()
{
    std::cout<<std::format( "Enter watermelon weight: " )<<std::endl;
    int watermelon_weight {};
    std::cin>>watermelon_weight;
  return watermelon_weight;
}
