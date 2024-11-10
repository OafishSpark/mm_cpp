#ifndef MATRIX_H
#define MATRIX_H


#include <vector>
#include <cassert>
#include <string>
#include <algorithm>


class matrix_d {
protected:
    std::vector<std::vector<double>> data;
    unsigned int n_rows;
    unsigned int n_cols; 
public:
    matrix_d() = default;
    matrix_d(std::vector<std::vector<double>>);
    
    inline const unsigned int& get_n_rows() const {return n_rows;}
    inline const unsigned int& get_n_cols() const {return n_cols;}
    inline const std::vector<std::vector<double>> get_data() const {return data;}
    
    std::string print() const;
    void transpose();

    friend std::vector<double> operator*(matrix_d, std::vector<double>);
    friend matrix_d operator*(matrix_d, matrix_d);
};

matrix_d transposed(matrix_d);


#endif // MATRIX_H
