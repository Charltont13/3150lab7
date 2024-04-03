#include "double_read_vector.h"
#include <sstream>

vector<double> doubles_read(istream &in_stream) {
    vector<double> result;
    double temp;
    while (in_stream >> temp) {
        result.push_back(temp);
    }
    return result;
}

vector<double> doubles_read_one_line(istream &in_stream) {
    string line;
    getline(in_stream, line);
    istringstream iss(line);
    return doubles_read(iss);
}
