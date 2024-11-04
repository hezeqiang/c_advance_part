#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;

// Forward declaration of create_r_c function
MatrixXd create_r_c(int rows, int cols);

int main()
{
    // Initialize a 2x2 matrix using the create_r_c function
    MatrixXd m = create_r_c(2, 2);
    // Print the matrix
    std::cout << m << std::endl;

    return 0;
}

// Implementation of create_r_c function
MatrixXd create_r_c(int rows, int cols)
{
    // Create a random matrix of the given size
    MatrixXd m = MatrixXd::Random(rows, cols);
    return m;
}
