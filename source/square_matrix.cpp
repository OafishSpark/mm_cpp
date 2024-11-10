#include "square_matrix.h"

square_matrix_d::square_matrix_d(matrix_d mat) : matrix_d(mat) {
    assert(n_cols == n_rows);
}

square_matrix_d::square_matrix_d(std::vector<std::vector<double>> data_vec) : matrix_d(data_vec) {
    assert(n_cols == n_rows);
}

double square_matrix_d::count_determinant() {
    double answer = 0.0;
    determinant = answer;
    return answer;
}