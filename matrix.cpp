#include <iostream>

#include "matrix.h"

using namespace std;

Matrix::Matrix()
{
    _size = 9;
    _matrix = new int[9][9];
}

Matrix::~Matrix()
{
    delete _matrix;
}
