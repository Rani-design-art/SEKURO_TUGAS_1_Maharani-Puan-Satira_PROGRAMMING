#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), c(n);
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    for (int i = 0; i < n; i++){
        cin >> c[i];
    }
    vector<pair<int, int>> package(n);
    for (int i = 0; i < n; i++){
        package[i] = {x[i], c[i]};
    }
    sort(package.begin(), package.end());
    map<int, int> seen;
    int count = 0;
    for (int i = 0; i < n; i++){
        if (seen[package[i].second] == false){
            seen[package[i].second] = true;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
