#include <fstream>
#include <algorithm>
#include <iostream> 
#include "double_read_vector.h"
#include "double_vector.h"
#include "my_distance.h"

using namespace std; 

int main() {
    ifstream file("vectors.txt"); 
    vector<double_vector> vectors;
    int id = 0;

    while (true) {
        vector<double> elements = doubles_read_one_line(file);
        if (file.eof()) break; 
        if (!elements.empty()) {
            vectors.push_back(double_vector(elements, id++));
        }
    }

    vector<my_distance> distances;
    for (size_t i = 0; i < vectors.size(); ++i) {
        for (size_t j = i + 1; j < vectors.size(); ++j) {
            double distance = cosine_distance(vectors[i], vectors[j]);
            distances.emplace_back(i, j, distance);
        }
    }

    sort(distances.begin(), distances.end(), [](const my_distance &a, const my_distance &b) {
        return a.cos_distance < b.cos_distance; 
    });

    for (const auto &dist : distances) {
        cout << "Vector " << dist.id_1 << " and Vector " << dist.id_2 << " have cosine distance: " << dist.cos_distance << endl;
    }

    return 0;
}
