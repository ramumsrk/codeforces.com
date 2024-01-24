#include <bits/stdc++.h>

using namespace std;

/*
* C++ program execution starts
* from main() function
*/
int
main()
{
    /*
    * Number of test cases
    */
    int t {};
    cin>>t;
    assert(
      t >= 1
      &&
      t <= 1439
    );

    /*
    * 1 hour = 60 minutes
    */
    constexpr int sixty_minutes {60};
    /*
    * 1 day = 24 hours
    */
    int constexpr twentyfour_hours {24};
    while ( t-- )
    {
      int h {};
      int m {};
      cin>>h>>m;
      assert(
        (
          h >= 0
          &&
          h <= 24
        )
        &&
        (
          m >= 0
          &&
          m <= 60
        )
      );
      int r {(twentyfour_hours * sixty_minutes) - ((h * sixty_minutes) + m)};
      cout<<r<<endl;
    }
  return EXIT_SUCCESS;
}