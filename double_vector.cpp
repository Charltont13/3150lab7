#include "double_vector.h"

double square(const double &d) {
    return d * d;
}

double dot_product(const double_vector &one, const double_vector &two) {
    double result = 0.0;
    for (size_t i = 0; i < one.elements.size(); ++i) {
        result += one.elements[i] * two.elements[i];
    }
    return result;
}

double magnitude(const double_vector &my_vector) {
    double sum = 0.0;
    for (double val : my_vector.elements) {
        sum += square(val);
    }
    return sqrt(sum);
}

double cosine_distance(const double_vector &one, const double_vector &two) {
    return dot_product(one, two) / (magnitude(one) * magnitude(two));
}
