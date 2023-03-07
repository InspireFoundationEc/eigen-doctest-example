
#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;


MatrixXd get_identity_matrix(MatrixXd m)
{
  MatrixXd result = MatrixXd::Zero(m.rows(), m.cols());
  for (int i = 0; i < m.rows(); i++)
  {
    result(i, i) = 1;
  }
  return result;
}
