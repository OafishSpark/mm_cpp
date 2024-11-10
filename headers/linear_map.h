#ifndef LINEAR_MAP_H
#define LINEAR_MAP_H


#include <vector>
#include <cassert>
#include <stdio.h>


#include "matrix.h"


class linear_map {
    matrix_d weights;
public:
    linear_map(std::vector<std::vector<double>> weights(matrix_d(weights)));
    linear_map(matrix_d data) : weights(data) {}
    
    inline const matrix_d& get_weights() const {return weights;}
    inline void set_weights(matrix_d new_weights) {weights = new_weights;}

    matrix_d perform_x(matrix_d);
};


#endif // LINEAR_MAP_H
