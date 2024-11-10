#include "linear_map.h"


matrix_d linear_map::perform_x(matrix_d x) {
    return weights * x; 
}
