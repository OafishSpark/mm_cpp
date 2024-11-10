#include <iostream>
#include <vector>
#include <string>

#include "linear_map.h"
#include "matrix.h"
#include "square_matrix.h"


void print(std::string str) {
    std::cout << str << std::endl;
}


int main() {
    std::vector<std::vector<double>> mat = {
        {1, 0},
        {0, 1},
    };
    square_matrix_d mat1(mat);
    mat = {
        {1, 1},
        {2, 1},
        {3, 1},
    };
    matrix_d mat2(mat);
    mat2.transpose();
    linear_map a(transposed(mat1));
    print(mat1.print());
    print(mat2.print());
    print(a.perform_x(mat2).print());
    print("Tis no thing but da end, ma boy!");
    return 0;
}
