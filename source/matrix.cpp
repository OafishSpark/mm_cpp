#include "matrix.h"


matrix_d::matrix_d(std::vector<std::vector<double>> data_vec) {
    n_rows = data_vec.size();
    data = data_vec;
    unsigned int max_n_cols = 0;
    for (const auto& row : data)
        if (max_n_cols < row.size())
            max_n_cols = row.size();
    n_cols = max_n_cols; 
    for (auto& row : data)
        row.resize(n_cols, 0.0);
}


std::string matrix_d::print() const {
    std::string answer = "";
    for (const auto& row: data) {
        answer += "[";
        for (const auto& elem: row) {
            answer += std::to_string(elem);
            answer += " ";
        }
        answer += "]\n";
    }
    return answer;
}


void matrix_d::transpose() {
    std::vector<std::vector<double>> new_data(n_cols, std::vector<double>(n_rows, 0.0));
    for (unsigned int iv = 0; iv < n_cols; ++iv)
        for (unsigned int jv = 0; jv < n_rows; ++jv)
            new_data[iv][jv] = data[jv][iv];
    std::swap(n_cols, n_rows);
    data = new_data;
}


std::vector<double> operator*(matrix_d mat, std::vector<double> vec) {
    assert(mat.n_cols == vec.size());
    std::vector<double> answer(mat.n_rows, 0.0);
    for (unsigned int iv = 0; iv < mat.n_rows; ++iv)
        for (unsigned int jv = 0; jv < mat.n_cols; ++jv)
            answer[iv] += mat.data[iv][jv] * vec[jv];
    return answer;
}


matrix_d operator*(matrix_d mat1, matrix_d mat2) {
    assert(mat1.n_cols == mat2.n_rows);
    std::vector<std::vector<double>> answer(mat1.n_rows, std::vector<double>(mat2.n_cols, 0.0));
    for (unsigned int iv = 0; iv < mat1.n_rows; ++iv)
        for (unsigned int jv = 0; jv < mat2.n_cols; ++jv)
            for (unsigned int kv = 0; kv < mat1.n_cols; ++kv)
                answer[iv][jv] += mat1.data[iv][kv] * mat2.data[kv][jv];
    return matrix_d(answer);
}


matrix_d transposed(matrix_d mat) {
    mat.transpose();
    return mat; 
}