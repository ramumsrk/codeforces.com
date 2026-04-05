#include <cstdlib>
#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::max_element;

auto
main(void) -> int {
    uint16_t t {};
    cin>>t;
    while (t) {
        vector<int16_t> a(7,0);
        for (auto &e : a) {
            cin>>e;
        }
        vector<int16_t> result(7,0);
        for (int i {}; i < 7; i += 1) {
            int16_t sum_result {};
            for (int j {}; j < 7; j += 1) {
                if (i != j) {
                    sum_result += a[j]*(-1);
                }
            }
            sum_result += a[i];
            result[i] = sum_result;
        }
        cout<<*(max_element(begin(result), end(result)))<<endl;
        t -= 1;
    }
    return EXIT_SUCCESS;
}