#include <iostream>
#include <cstdlib>
#include <cstdint>

using std::cin;
using std::cout;
using std::endl;
using std::min;

auto
main(void) -> int {
    uint16_t t {};
    cin>>t;
    while (t) {
        int16_t x {};
        cin>>x;
        t -= 1;
        int16_t y {static_cast<int16_t>(x + 1)};
        cout<<min(x,y)<<endl;
    }
    return EXIT_SUCCESS;
}