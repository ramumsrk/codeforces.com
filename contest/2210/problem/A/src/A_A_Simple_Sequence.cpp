#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int t {};
    cin>>t;
    while (t) {
        int n {};
        cin>>n;
        vector<int> a(n,0);
        for (int i {1}; i <= n; i += 1) {
            a[i-1] = i;       
        }
        for (const auto& e : a) {
            cout<<e<<' ';
        }
        cout<<endl;
        t -= 1;
    }
    return EXIT_SUCCESS;
}