#include <bits/stdc++.h>

using namespace std;

/*
* C++ program execution starts
* from main() function
*/
int
main()
{
    try
    {
      ifstream fis(
        "/run/media/ramumsrk/16GiB/codeforces.com/problemset/problem/1283/A/practice/c-plus-plus-programming-language/input/input.txt",
        ios::in
      );
      ofstream fos(
        "/run/media/ramumsrk/16GiB/codeforces.com/problemset/problem/1283/A/practice/c-plus-plus-programming-language/output/output.txt",
        ios::out
      );
      if (
        fis.is_open()
        &&
        fos.is_open()
      )
      {
        /*
        * Total number of test cases
        */
        int t {};
        fis>>t;
        assert(
          t >= 1
          &&
          t <= 1439
        );

        constexpr int sixty_minutes {60};
        int constexpr twentyfour_hours {24};
        while ( t-- )
        {
          int h {};
          int m {};
          fis>>h>>m;
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
              m < 60
            )
          );
          int r { (twentyfour_hours * sixty_minutes) - ((h*sixty_minutes) + m)};
          fos<<r<<endl;
        }
        if (
          fis.is_open()
          &&
          fos.is_open()
        )
        {
          fis.close();
          fos.close();
        }
      }
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
  return EXIT_SUCCESS;
}