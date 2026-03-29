#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
b_simply_sitting_on_chairs(
    const int& n,
    const vector<int>& p
) -> int {
    int max_chairs {};
    int pos_1st_chair {};
    // determine 1st chair index
    for (int i {}; i < n; i += 1) {
        if (p[i] == 1) {
            pos_1st_chair = i;
            break;
        }
    }
}

auto
main(void) -> int {
    int t {};
    cin>>t;
    while (t) {
        int n {};
        cin>>n;
        vector<int> p(n,0);
        for (auto& e : p) {
            cin>>e;
        }
        int max_chairs {b_simply_sitting_on_chairs(n, p)};
        cout<<max_chairs<<endl;
        t -= 1;
    }
    return EXIT_SUCCESS;
}