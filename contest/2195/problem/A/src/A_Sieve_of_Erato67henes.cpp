#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::vector;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    int t {};
    cin>>t;
    while (t) {
        int n {};
        cin>>n;
        vector<int> v(n,0);
        for (auto& e : v) {
            cin>>e;
        }
        int product {1};
        for (int i {}; i < n; i += 1) {
            product *= v[i];
        }
        if (product % 67 == 0) {
            cout<<"YES"s<<endl;
        } else {
            cout<<"NO"s<<endl;
        }
        t -= 1;
    }
    return EXIT_SUCCESS;
}