#ifndef SQUARE_MATRIX_H
#define SQUARE_MATRIX_H

#include <vector>

#include "matrix.h"

// dense square matrices of doubles
class square_matrix_d : public matrix_d {
protected:
    double determinant = 0.0;
public:
    square_matrix_d(matrix_d);
    square_matrix_d(std::vector<std::vector<double>>);

    double count_determinant();
    
    inline double get_deteterminant() {return determinant;}
};

#endif // SQUARE_MATRIX_H