#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve_circuit() {
    int n;
    cin >> n;

    vector<int> switches(2*n);
    
    for (int i = 0; i < 2*n; i++) {
        cin >> switches[i];
    }

    int on_switches = 0;
    for (int switch_state : switches) {
        on_switches += switch_state;
    }
    int min_lights = std::max(0, on_switches - n);
    
    int max_lights = std::min(n, on_switches);
    cout << min_lights << " " << max_lights << "\n";
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        solve_circuit();
    }

    return 0;
}