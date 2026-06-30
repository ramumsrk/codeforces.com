#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
a_divide_and_conquer(
    int x,
    int y
) -> string {
    int z {};
    if (x%y == 0) {
        int quotient = x/y;
        z = x/quotient;
    } else {
        int remainder {x%y};
        z = x%remainder;
    }
    return y == z ? "Yes"s : "No"s;
}

auto
main(void) -> int {
    int t {};
    cin>>t;
    while (t) {
        int x {}, y {};
        cin>>x>>y;
        cout<<a_divide_and_conquer(x, y)<<endl;
        t -= 1;
    }
    return EXIT_SUCCESS;
}