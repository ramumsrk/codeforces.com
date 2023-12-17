#include <iostream>
#include <cassert>
#include <cstdlib>

constexpr short int minimum_number_of_people { +1 };
constexpr int short maximum_number_of_people { +100 };

// Forward declaration using function prototypes
int short read_number_of_people();
short int read_easy_or_hard();

// Function definition
int short read_number_of_people()
{
    std::cout<<"Enter number of people: ";
    int short number_of_people {};
    std::cin>>number_of_people;
    assert(
      number_of_people >= minimum_number_of_people
      &&
      number_of_people <= maximum_number_of_people
    );
  return number_of_people;
}

// Function definition
short int read_easy_or_hard()
{
    st::cout<<"Enter easy or hard: ";
    int short easy_or_hard {};
    std::cin>>easy_or_hard;
    assert(
      easy_or_hard == 0
      ||
      easy_or_hard == 1
    )
  return easy_or_hard;
}

int main()
{
    int short number_of_people { read_number_of_people() };
    short int array[number_of_people];
    for ( int index {} ; index < number_of_people ; index += 1 )
    {
      std::cout<<"Enter easy = 0 or hard = 1: ";
      array[index] = read_easy_or_hard();
    }
    bool is_hard { false };
    for ( int short easy_or_hard : array )
    {
      if ( easy_or_hard == 1 )
      {
        is_hard = true;
        break;
      }
    }

    if ( is_hard )
    {
      std::cout<<"HARD"<<std::endl;
    }
    else
    {
      std::cout<<"EASY"<<std::endl;
    }
  return EXIT_SUCCESS;
}
