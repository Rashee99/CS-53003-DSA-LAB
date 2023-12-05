//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
//If required, you can add additional functions or header files.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Road {
    int start, end, distance;
};

int main() {
    int n, m;
    cout << "Enter the no. of cities:";
    cin >> n;
    cout << "Enter the no. of connecting (one-way) roads:";
    cin >> m;
    vector<vector<Road>> graph(n);
    for (int i = 0; i < m; i++) {
        int start, end, distance;
        cout << "Enter the start node (city) and end node (city) in the connection " << i+1 << ":";
        cin >> start >> end;
        cout << "Enter the distance (weight):";
        cin >> distance;
        graph[start].push_back({start, end, distance});
    }
    cout << "The distance between the connecting cities are:\n";
    for (int i = 0; i < n; i++) {
        cout << i;
        if (graph[i].empty()) {
            cout << " - No connecting roads found\n";
        } else {
            for (Road road : graph[i]) {
                cout << " -> " << road.end << " Distance: " << road.distance;
            }
            cout << '\n';
        }
    }
    int max_connections = 0;
    int city_with_max_connections = -1;
    for (int i = 0; i < n; i++) {
        if (graph[i].size() > max_connections) {
            max_connections = graph[i].size();
            city_with_max_connections = i;
        }
    }
    if (city_with_max_connections == -1) {
        cout << "No city has any connecting road.\n";
    } else {
        cout << city_with_max_connections << " is the city with the highest connecting roads.\n";
    }
    return 0;
}

