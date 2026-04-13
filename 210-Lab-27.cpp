#include <iostream>
#include <map>
#include <tuple>
#include <vector>
using namespace std;

int main() {
    // declarations
    map<string, tuple<int, string, string>> villagers;

    // insert elements into the map
    // note how the right-hand side of the assignment are the vector elements
    villagers["Audie"] = make_tuple(5, "Deer", "Beep Boop!");
    villagers["Raymond"] = make_tuple(8, "Cat", "Nice fit");
    villagers["Marshal"] = make_tuple(10, "Wolf", "Hubba hubba!");

    for (auto pair : villagers) {
        cout << pair.first << " ["
             << get<0>(pair.second) << ", "
             << get<1>(pair.second) << ", "
             << get<2>(pair.second)
             << "]\n";
    }

    return 0;
}