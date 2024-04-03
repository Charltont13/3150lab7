#include "double_vector.h"
#include <cassert>
#include <iostream>

//square function
void test_square() {
    assert(square(3) == 9);
    assert(square(-4) == 16);
    std::cout << "test_square passed." << std::endl;
}

//dot_product function
void test_dot_product() {
    double_vector v1({1, 0}, 1);
    double_vector v2({0, 1}, 2);
    assert(dot_product(v1, v2) == 0);
    std::cout << "test_dot_product passed." << std::endl;
}

//magnitude function
void test_magnitude() {
    double_vector v({3, 4});
    assert(magnitude(v) == 5);
    std::cout << "test_magnitude passed." << std::endl;
}


void test_cosine_distance() {
    double_vector v1({1, 0}, 1);
    double_vector v2({0, 1}, 2);
    double_vector v3({1, 1}, 3);
    // Cosine distance for orthogonal vectors should be 0
    assert(cosine_distance(v1, v2) == 0);

    // Cosine distance for the same vectors should be 1
    assert(cosine_distance(v1, v1) == 1);

    // Cosine distance for non-orthogonal, non-identical vectors
    assert(cosine_distance(v1, v3) < 1 && cosine_distance(v1, v3) > 0);
    std::cout << "test_cosine_distance passed." << std::endl;
}

int main() {

    test_square();
    test_dot_product();
    test_magnitude();
    test_cosine_distance();

    std::cout << "All unit tests passed!" << std::endl;
    return 0;
}
