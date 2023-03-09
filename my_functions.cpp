
#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;


MatrixXd get_identity_matrix(MatrixXd m)
{
  MatrixXd result = MatrixXd::Identity(m.rows(), m.cols());
  return result;
}
