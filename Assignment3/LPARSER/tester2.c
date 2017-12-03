int compute_determinant()
{
    Matrix mat1[4][4] = {1.3, 0.1, 2.5, -1; 3, 0, 0.6, 5;2, 1.8, 4, -3;1, 0.3, 5, 0.9};
    Matrix mat2[4][4] = {2.3, 1.1, 3.5, -2; 4, 1, 1.6, 6;1, 0.8, 3, -2;2, 2.3, 7, 2.9};

    Matrix mat[4][4];

    mat = mat1 * mat2;

    mat = mat + mat1;

    mat = mat - mat2.';

    printStr("Determinant of the matrix is\n");
    printFlt(determinantOfMatrix(mat, 4));
    return 0;
}
