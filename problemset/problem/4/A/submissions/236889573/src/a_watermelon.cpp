#include <iostream>
#include <cstdlib>

int main()
{
    int watermelon_weight {};
    std::cin>>watermelon_weight;

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

    if ( watermelon_can_be_divided_into_even_weights )
    {
      std::cout<<"YES"<<std::endl;
    }
    else
    {
      std::cout<<"NO"<<std::endl;
    }
  return EXIT_SUCCESS;
}
